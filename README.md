# sys-profiler

[![Build](https://img.shields.io/github/actions/workflow/status/user/sys-profiler/ci.yml?branch=main)]()
[![C++](https://img.shields.io/badge/C++-20-blue.svg)]()
[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

**sys-profiler** cross-platform system profiler with CPU, memory, and IO instrumentation. Built with simplicity and performance in mind.

## Features

- CMake Build: CMake-based build system with FetchContent dependencies
- Performance: Cache-friendly data structures and SIMD where beneficial
- Unit Tested: GoogleTest and GoogleMock-based test suite
- Memory Safe: RAII and smart pointers throughout, no raw new/delete

## Getting Started

### Installation

Using CMake FetchContent:

```cmake
include(FetchContent)
FetchContent_Declare(sys_profiler
  GIT_REPOSITORY https://github.com/user/sys-profiler.git
  GIT_TAG main
)
FetchContent_MakeAvailable(sys_profiler)
```

## Usage

```cpp
#include <sys_profiler/sys_profiler.h>

int main() {
    auto client = sys_profiler::Client::builder()
        .with_timeout(std::chrono::seconds(30))
        .build();

    auto result = client.run();
    std::cout << result << std::endl;
    return 0;
}
```

## Configuration

Configuration can be provided via environment variables, a config file, or programmatically.

| Variable | Description | Default |
|----------|-------------|--------|
| `SYS_PROFILER_TIMEOUT` | Request timeout in seconds | `30` |
| `SYS_PROFILER_RETRIES` | Number of retry attempts | `3` |
| `SYS_PROFILER_LOG_LEVEL` | Log verbosity (debug, info, warn, error) | `info` |

## Contributing

Contributions are welcome! Please read the [contributing guidelines](CONTRIBUTING.md) before submitting a pull request.

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'feat: add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License — see the [LICENSE](LICENSE) file for details.
