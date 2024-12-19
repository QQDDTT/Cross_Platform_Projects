#ifndef DELETEABLE_H
#define DELETEABLE_H

#include <string>
#include <vector>
#include <functional>

// 路径信息结构体
struct PathInfo {
    std::string path;            // 路径
    std::string descriptionCN;   // 中文描述
    std::string descriptionJP;   // 日文描述
    std::string descriptionEN;   // 英文描述

    // 构造函数
    PathInfo(
        const std::string& p,
        const std::string& cn,
        const std::string& jp,
        const std::string& en
    ) : path(p), descriptionCN(cn), descriptionJP(jp), descriptionEN(en) {}
};

// 路径集合类
class PathCollection {
private:
    std::vector<PathInfo> paths;  // 存储路径信息的容器

public:
    // 构造函数
    explicit PathCollection(const std::vector<PathInfo>& initialPaths)
        : paths(initialPaths) {}

    // 遍历路径集合，并对每个路径执行指定操作
    void eachPaths(const std::function<void(const PathInfo&)>& func) const {
        for (const auto& path : paths) {
            func(path);
        }
    }
};

#endif // DELETEABLE_H
