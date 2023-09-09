#include <iostream>
#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include <map>
#include <memory>
#include <string>
#include <vector>
#include "SourceLocation.h"

static llvm::LLVMContext TheContext;
static std::unique_ptr<llvm::Module> TheModule;
static std::unique_ptr<llvm::IRBuilder<>> Builder;
static std::map<std::string, llvm::Value *> NamedValues;

int main() {
    auto v = llvm::ConstantFP::get(TheContext, llvm::APFloat(19.0));
    auto sourceLocation = new SourceLocation{100};
    v->dump();
    llvm::outs() << sourceLocation->getRawSourceLoc();
}
