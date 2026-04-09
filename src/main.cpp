// sys-profiler — Cross-platform system profiler with CPU, memory, and IO instrumentation
#include <iostream>
#include <string>

namespace sys_profiler {

int run() {
    std::cout << "Application initialized successfully" << std::endl;
    return 0;
}

} // namespace sys_profiler

int main() {
    std::cout << "[sys-profiler] Starting application..." << std::endl;

    int result = sys_profiler::run();
    if (result != 0) {
        std::cerr << "Fatal error: non-zero exit" << std::endl;
        return 1;
    }
    return 0;
}
