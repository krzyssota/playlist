#ifndef _UNSUPPORTEDTYPEEXCEPTION_H
#define _UNSUPPORTEDTYPEEXCEPTION_H

#include "PlayerException.h"


class UnsupportedTypeException : public PlayerException {
public:
    [[nodiscard]] const char *what() const noexcept override;
};

#endif //_UNSUPPORTEDTYPEEXCEPTION_H
