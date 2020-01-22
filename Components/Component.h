#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include <memory>


class Component {
public:
    virtual void play() = 0;
    virtual bool isCycle(Component *element) = 0;
};

#endif //_COMPONENT_H_
