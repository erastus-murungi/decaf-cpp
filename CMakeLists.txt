cmake_minimum_required(VERSION 3.26)
project(decaf)

set(LLVM_DIR "./lib/llvm/build/lib/cmake/llvm/")

message(STATUS "found llvm install dir ${LLVM_INSTALL_PACKAGE_DIR}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

set(CMAKE_CXX_STANDARD 23)

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})
include_directories("./include")

# Now build our tools
add_executable(decaf
        src/main.cpp
        src/basic/SourceLocation.cpp
        src/basic/Token.cpp
        src/basic/SourceLocation.cpp
        src/basic/SourceManager.cpp)


# Find the libraries that correspond to the LLVM components
# that we wish to use
llvm_map_components_to_libnames(llvm_libs support core irreader)

# Link against LLVM libraries
target_link_libraries(decaf ${llvm_libs})
link_directories(decaf "./include")



