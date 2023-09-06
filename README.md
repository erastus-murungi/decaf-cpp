# decaf-cpp


###  Some LLVM installation notes
I got `llvm` working by:
1. Cloning LLVM to a directory called `llvm`
2. `cd`-ing into `llvm` and running
   `cmake -S llvm -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug -DLLVM_ENABLE_PROJECTS="clang;lld" LLVM_TARGETS_TO_BUILD="host"`
3. Using the CMAKE file that I have now where I have specified `LLVM_DIR` to be the location of the file `LLVMConfig.cmake`
4. also exported `LLVM_DIR` just in case cmake did not get the message.

*Also ran `ninja -C build check-all`* to ensure everything was working.