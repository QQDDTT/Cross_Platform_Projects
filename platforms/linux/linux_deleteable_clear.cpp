#include "clear_directory.h"
#include "include\linux_deleteable.h"
#include <iostream>
#include <vector>

namespace fs = std::filesystem;

// 实现 clearDirectory 函数，删除指定路径及其内容
void clearDirectory(const PathInfo& pathInfo) {
    try {
        const fs::path dirPath = pathInfo.path;

        if (fs::exists(dirPath) && fs::is_directory(dirPath)) {
            // 遍历目录，删除所有文件和子目录
            for (const auto& entry : fs::recursive_directory_iterator(dirPath)) {
                fs::remove_all(entry.path());  // 删除文件和子目录
            }
            std::cout << "Successfully cleared directory: " << pathInfo.path << std::endl;
        } else {
            std::cout << "Directory does not exist: " << pathInfo.path << std::endl;
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error clearing directory: " << e.what() << std::endl;
    }
}

// 创建 PathCollection 并清空其中所有路径
void clearAllPaths() {

    // 对每个路径调用 clearDirectory 函数进行清空
    pathCollection.eachPaths([](const PathInfo& pathInfo) {
        clearDirectory(pathInfo);
    });
}
