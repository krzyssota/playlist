#ifndef _MODE_H_
#define _MODE_H_

#include <vector>
#include <memory>
#include "Component.h"

using componentPtrs_t = std::vector<std::shared_ptr<Component>>;

class Mode {
  public:
    virtual ~Mode() = default;;
    virtual void play(const componentPtrs_t &elements) = 0;
};

#endif //_MODE_H_
