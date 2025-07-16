cmake_minimum_required(VERSION 3.20)
project(cipherapp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(headers)

set(SOURCES
    main.cpp
    ./src/affine_cipher.cpp
    ./src/hill_cipher.cpp
    ./src/matrix.cpp
)

add_executable(cipher_app ${SOURCES})
