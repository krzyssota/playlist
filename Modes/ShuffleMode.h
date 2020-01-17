#ifndef _SHUFFLEMODE_H_
#define _SHUFFLEMODE_H_

#include <random>
#include "Mode.h"

class ShuffleMode : public Mode {
  private:
    std::default_random_engine random_engine;
  public:
    explicit ShuffleMode(unsigned seed) : random_engine(seed) {}
    void play(const std::vector<std::shared_ptr<Component>> &elements) override;
};

std::shared_ptr<ShuffleMode> createSequenceMode(unsigned seed);

#endif //_SHUFFLEMODE_H_
