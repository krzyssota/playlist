#include <memory>
#include "Playlist.h"

void Playlist::add(const std::shared_ptr<Component>& element) {
    elements.push_back(element);
}

/*void Playlist::add(const Component &element, size_t position) {

}*/

void Playlist::remove() {
    elements.pop_back();
}

void Playlist::remove(size_t position) {

}

void Playlist::setMode(std::shared_ptr<Mode> newMode) {
    mode = newMode;
}

void Playlist::play() {
    mode->play(elements);
}
