//
// Created by Erastus Murungi on 9/5/23.
//

#ifndef DECAF_SOURCELOCATION_H
#define DECAF_SOURCELOCATION_H


#include "Decaf.h"

class SourceLocation {
public:
    using UIntType = uint32_t;
    using IntTy = int32_t;

private:
    UIntType loc = 0;

public:
    explicit SourceLocation(UIntType loc);

    UIntType getRawSourceLoc() const;
};


#endif //DECAF_SOURCELOCATION_H
