#ifndef _INCOMPLETEDESCRIPTIONEXCEPTION_H_
#define _INCOMPLETEDESCRIPTIONEXCEPTION_H_

#include "PlayerException.h"


class IncompleteDescriptionException : public PlayerException {
    [[nodiscard]] const char *what() const noexcept override;
};

#endif //_INCOMPLETEDESCRIPTIONEXCEPTION_H_
