#ifndef _SEQUENCEMODE_H_
#define _SEQUENCEMODE_H_

#include "Mode.h"

class SequenceMode : public Mode {
  protected:
    SequenceMode() = default;
  public:
    static SequenceMode createSequenceMode() { return SequenceMode(); }
};

#endif //_SEQUENCEMODE_H_
