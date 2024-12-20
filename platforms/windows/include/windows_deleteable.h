#ifndef WINDOWS_DELETEABLE_H
#define WINDOWS_DELETEABLE_H

#include <string>
#include <vector>
#include <functional>
#include "deleteable.h"

// 创建要删除的路径信息
std::vector<PathInfo> paths = {
    PathInfo("C:\\TempFiles", "临时文件", "一時ファイル", "Temporary Files"),
    PathInfo("C:\\Cache", "缓存", "キャッシュ", "Cache")
};

// 将路径信息存储到 PathCollection 中
PathCollection pathCollection(paths);


#endif // DELETEABLE_H