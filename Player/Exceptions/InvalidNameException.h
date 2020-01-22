#ifndef _INVALIDNAMEEXCEPTION_H_
#define _INVALIDNAMEEXCEPTION_H_

#include "PlayerException.h"

class InvalidNameException : public PlayerException {
    [[nodiscard]] const char *what() const noexcept override;
};

#endif //_INVALIDNAMEEXCEPTION_H_
