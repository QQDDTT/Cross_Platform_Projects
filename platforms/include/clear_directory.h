#ifndef CLEAR_DIRECTORY_H
#define CLEAR_DIRECTORY_H

#include <string>
#include <filesystem>
#include "deleteable.h"  // 导入 deleteable.h 头文件，使用 PathInfo

namespace fs = std::filesystem;

// 清空目录的函数声明，强制删除目录及其内容
void clearDirectory(const PathInfo& pathInfo);

#endif // CLEAR_DIRECTORY_H
