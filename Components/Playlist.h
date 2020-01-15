#ifndef _PLAYLIST_H_
#define _PLAYLIST_H_

#include <string>
#include <Modes/SequenceMode.h>
#include <vector>
#include "Components/Component.h"
#include "Modes/Mode.h"

class Playlist : public Component {
  private:
    std::string name;
    Mode mode;
    std::vector<Component> elements;

  public:
    explicit Playlist(std::string &name) : name(name), mode(SequenceMode()) {}

    void add(const Component &element);
    void add(const Component &element, size_t position);

    void remove();
    void remove(size_t position);

    void setMode(Mode newMode);

    void play();
};

#endif //_PLAYLIST_H_
