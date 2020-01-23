#ifndef _MODE_H_
#define _MODE_H_

#include <vector>
#include <memory>
#include <Component.h>


class Mode {
public:
    virtual ~Mode() = default;;
    virtual void play(const std::vector<std::shared_ptr<Component>>& elements) = 0;
};

#endif //_MODE_H_
