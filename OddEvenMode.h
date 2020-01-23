#ifndef _ODDEVENMODE_H_
#define _ODDEVENMODE_H_

#include <memory>
#include "Mode.h"

class OddEvenMode : public Mode {
  public:
    OddEvenMode() = default;
    ~OddEvenMode() override = default;
    void play(const componentPtrs_t &elements) override;
};

std::shared_ptr<OddEvenMode> createOddEvenMode();

#endif //_ODDEVENMODE_H_
