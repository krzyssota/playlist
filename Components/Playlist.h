#ifndef _PLAYLIST_H_
#define _PLAYLIST_H_

#include <string>
#include <Modes/SequenceMode.h>
#include <utility>
#include <vector>
#include "Components/Component.h"
#include "Modes/Mode.h"

class Playlist : public Component {
  private:
    std::string name;
    std::shared_ptr<Mode> mode;
    std::vector<std::shared_ptr<Component>> elements;

  public:
    explicit Playlist(std::string name) : name(std::move(name)), mode(createSequenceMode()) {}

    void add(const std::shared_ptr<Component>& element); // KS 17.01 21:45 zmieniłem sygnature
    //void add(const Component &element, size_t position);

    void remove();
    void remove(size_t position);

    void setMode(std::shared_ptr<Mode> newMode);

    void play();
};

#endif //_PLAYLIST_H_
