#ifndef _PLAYLIST_H_
#define _PLAYLIST_H_

#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <iostream>
#include "InvalidPositionException.h"
#include "CycleException.h"
#include "SequenceMode.h"
#include "Component.h"
#include "Mode.h"
#include "Media.h"

class Playlist : public Component {
  private:
    std::string name;
    std::shared_ptr<Mode> mode;
    componentPtrs_t elements;
  public:
    explicit Playlist(std::string name) : name(std::move(name)),
                                          mode(createSequenceMode()) {}
    ~Playlist() override = default;
    void add(const std::shared_ptr<Component> &element);
    void add(const std::shared_ptr<Component> &element, size_t position);
    void remove();
    void remove(size_t position);
    void setMode(std::shared_ptr<Mode> newMode);
    void play() override;
    bool isCycle(const Component *element) override;
};

#endif //_PLAYLIST_H_
