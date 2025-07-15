cmake_minimum_required(VERSION 3.10)
project(CipherProject VERSION 1.0)

# Use modern C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include headers
include_directories(headers)

# Source files
set(SOURCES
    main.cpp
    src/affine_cipher.cpp
    src/hill_cipher.cpp
    src/matrix.cpp
)

# Create the executable
add_executable(cipher_app ${SOURCES})
