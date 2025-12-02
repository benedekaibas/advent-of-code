# 🎄 Advent of Code 2024 - C++ Solutions 🎄

![Language](https://img.shields.io/badge/language-C++-00599C?style=for-the-badge&logo=c%2B%2B)
![AoC](https://img.shields.io/badge/Advent%20of%20Code-2024-FFD700?style=for-the-badge&logo=adventofcode&logoColor=white)
![Stars](https://img.shields.io/badge/stars-%E2%AD%90%200-yellow?style=for-the-badge)
![License](https://img.shields.io/badge/license-MIT-green?style=for-the-badge)

Welcome to my repository for [Advent of Code 2024](https://adventofcode.com/2024)! I am using this event to sharpen my C++ skills and explore algorithms.

## 📂 Project Structure

The repository is structured as follows:

```text
├── inputs/         # Puzzle inputs (ignored by git)
├── src/            # Source code for solutions
│   ├── day01.cpp
│   ├── day02.cpp
│   └── ...
├── include/        # Shared header files (utils, parsing, etc.)
├── CMakeLists.txt  # Build configuration
└── README.md
```

## 🚀 Progress

| Day | Puzzle Name | Part 1 | Part 2 | Solution | Source |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 01 | Historian Hysteria | ⭐ | ⭐ | [View Output](output/day01.txt) | [day01.cpp](src/day01.cpp) |
| 02 | Red-Nosed Reports | ⭐ | - | - | [day02.cpp](src/day02.cpp) |
| 03 | Mull It Over | - | - | - | - |
| 04 | Ceres Search | - | - | - | - |
| 05 | Print Queue | - | - | - | - |
| 06 | Guard Gallivant | - | - | - | - |
| 07 | Bridge Repair | - | - | - | - |

## 🛠️ Building & Running

### Prerequisites
* A C++ compiler (GCC, Clang, or MSVC) supporting C++20 (recommended).
* CMake (optional, if you are using it).

### Compilation
If you are compiling manually using `g++`:

```bash
# Example for Day 1
g++ -std=c++20 -O3 src/day01.cpp -o build/day01
./build/day01 < inputs/day01.txt
```

If you are using **CMake**:

```bash
mkdir build && cd build
cmake ..
cmake --build .
./day01
```

## 📚 Resources used
* [CppReference](https://en.cppreference.com/w/)
* [Advent of Code Subreddit](https://www.reddit.com/r/adventofcode/)

---
_Happy Coding!_ 🎅
