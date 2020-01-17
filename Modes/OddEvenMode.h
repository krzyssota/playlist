#ifndef _ODDEVENMODE_H_
#define _ODDEVENMODE_H_

#include "Mode.h"

class OddEvenMode : public Mode {
  protected:
    OddEvenMode() = default;
    ~OddEvenMode() override = default;
  public:
    static OddEvenMode createOddEvenMode() { return OddEvenMode(); }
};

#endif //_ODDEVENMODE_H_
