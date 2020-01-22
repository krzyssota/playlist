#include "InvalidPositionException.h"


const char *InvalidPositionException::what() const noexcept {
    return "invalid position";
}