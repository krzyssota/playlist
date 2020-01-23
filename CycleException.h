#ifndef _CYCLEEXCEPTION_H_
#define _CYCLEEXCEPTION_H_

#include "PlayerException.h"


class CycleException : public PlayerException {
    [[nodiscard]] const char *what() const noexcept override;
};

#endif //_CYCLEEXCEPTION_H_
