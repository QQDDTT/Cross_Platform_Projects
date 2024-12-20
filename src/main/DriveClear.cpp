#include <string>

#ifdef _WIN32 
#include "windows_deleteable_clear.cpp"
#elif __linux__ 
#include "linux_deleteable_clear.cpp"
#endif

int main() {
    clearAllPaths();
    return 0;
}