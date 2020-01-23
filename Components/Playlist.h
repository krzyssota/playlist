#ifndef _PLAYLIST_H_
#define _PLAYLIST_H_

#include <string>
#include <Modes/SequenceMode.h>
#include <utility>
#include <vector>
#include "Components/Component.h"
#include "Modes/Mode.h"
#include "Media.h"


class Playlist : public Component {
  private:
    std::string name;
    std::shared_ptr<Mode> mode;
    std::vector<std::shared_ptr<Component>> elements;
  public:
    explicit Playlist(std::string name) : name(std::move(name)),
                                          mode(createSequenceMode()) {}
    void add(const std::shared_ptr<Component> &element);
    void add(const std::shared_ptr<Component> &element, size_t position);
    void remove();
    void remove(size_t position);
    void setMode(std::shared_ptr<Mode> newMode);
    void play() override;
    bool isCycle(Component *element) override;
};

#endif //_PLAYLIST_H_
