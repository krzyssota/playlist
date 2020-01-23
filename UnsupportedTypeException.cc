#include "UnsupportedTypeException.h"

const char *UnsupportedTypeException::what() const noexcept {
    return "unsupported type";
}