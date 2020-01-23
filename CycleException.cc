#include "CycleException.h"

const char *CycleException::what() const noexcept {
    return "cycle detected";
}
