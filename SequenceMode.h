#ifndef _SEQUENCEMODE_H_
#define _SEQUENCEMODE_H_

#include <memory>
#include "Mode.h"

class SequenceMode : public Mode {

  public:
    SequenceMode() = default;
    ~SequenceMode() override = default;
    void play(const componentPtrs_t &elements) override;
};

std::shared_ptr<SequenceMode> createSequenceMode();

#endif //_SEQUENCEMODE_H_
