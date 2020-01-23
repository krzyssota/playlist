#ifndef _SHUFFLEMODE_H_
#define _SHUFFLEMODE_H_

#include <random>
#include <memory>
#include <algorithm>
#include "Mode.h"

class ShuffleMode : public Mode {
  private:
    std::default_random_engine random_engine;
  public:
    explicit ShuffleMode(unsigned seed) : random_engine(seed) {};
    ~ShuffleMode() override = default;
    void play(const componentPtrs_t &elements) override;
};

std::shared_ptr<ShuffleMode> createShuffleMode(unsigned seed);

#endif //_SHUFFLEMODE_H_
