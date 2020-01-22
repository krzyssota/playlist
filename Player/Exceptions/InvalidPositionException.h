#ifndef _INVALIDPOSITIONEXCEPTION_H_
#define _INVALIDPOSITIONEXCEPTION_H_

#include "PlayerException.h"


class InvalidPositionException : public PlayerException {
    [[nodiscard]] const char *what() const noexcept override;
};

#endif //_INVALIDPOSITIONEXCEPTION_H_
