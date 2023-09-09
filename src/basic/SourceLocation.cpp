#include "SourceLocation.h"


SourceLocation::UIntType SourceLocation::getRawSourceLoc() const {
    return loc;
}

SourceLocation::SourceLocation(SourceLocation::UIntType loc) : loc(loc) {}
