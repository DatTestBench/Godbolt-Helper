# Godbolt-Helper

Single header (kinda) helper file for godbolt projects

## Usage

```cpp
#include <https://raw.githubusercontent.com/DatTestBench/Godbolt-Helper/main/godboldhelper.hpp>
```

> There are also some extra useful libraries that are not included in godbolt directly, but can be included via url

```cpp
#include <https://raw.githubusercontent.com/Neargye/magic_enum/master/include/magic_enum.hpp>
#include <https://raw.githubusercontent.com/Neargye/nameof/master/include/nameof.hpp>
```

> Options for individual includes also exist

```cpp
// Define to use individual includes
#define GH_INCLUDE_INDIVIDUAL

// Define for each include individually
#define GH_FORMAT
#define GH_GLM
#define GH_JSON

#include <https://raw.githubusercontent.com/DatTestBench/Godbolt-Helper/main/godboldhelper.hpp>
```

## Example Projects

> All of the following projects have the libraries properly setup, as well as high optimization and warning level compiler flags

[Clang](https://godbolt.org/z/fvWs5v)
[GCC](https://godbolt.org/z/od7rv4)
[MSVC](https://godbolt.org/z/7Goqx6)
