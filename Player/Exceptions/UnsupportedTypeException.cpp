//
// Created by krzubuntu on 22.01.2020.
//

#include "UnsupportedTypeException.h"

const char *UnsupportedTypeException::what() const noexcept {
    return "unsupported type";
}