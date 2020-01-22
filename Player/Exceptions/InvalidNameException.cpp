#include "InvalidNameException.h"


const char *InvalidNameException::what() const noexcept {
    return "corrupt content";
}
