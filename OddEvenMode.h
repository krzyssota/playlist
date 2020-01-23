#ifndef _ODDEVENMODE_H_
#define _ODDEVENMODE_H_

#include <memory>
#include "Mode.h"


class OddEvenMode : public Mode {
public:
    OddEvenMode() = default;
    ~OddEvenMode() override = default;
    void play(const std::vector<std::shared_ptr<Component>>& elements) override;
};

std::shared_ptr<OddEvenMode> createOddEvenMode();

#endif //_ODDEVENMODE_H_
