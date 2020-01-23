#include "IncompleteDescriptionException.h"

const char *IncompleteDescriptionException::what() const noexcept {
    return "corrupt file";
}