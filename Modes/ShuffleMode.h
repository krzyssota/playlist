#ifndef _SHUFFLEMODE_H_
#define _SHUFFLEMODE_H_

#include <random>
#include "Mode.h"

class ShuffleMode : public Mode {
  private:
    std::default_random_engine random_engine;
  protected:
    explicit ShuffleMode(unsigned seed) : random_engine(seed) {}
  public:
    static ShuffleMode createShuffleMode(unsigned seed) { return ShuffleMode(seed); }
};

#endif //_SHUFFLEMODE_H_
