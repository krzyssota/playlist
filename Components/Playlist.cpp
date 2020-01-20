#include <memory>
#include <utility>
#include "Playlist.h"
#include "Media.h"

void Playlist::add(const std::shared_ptr<Component>& element) {
    elements.push_back(element);
}

void Playlist::add(const std::shared_ptr<Component>& element, size_t position) {

}

void Playlist::remove() {
    elements.pop_back();
}

void Playlist::remove(size_t position) {

}

void Playlist::setMode(std::shared_ptr<Mode> newMode) {
    mode = std::move(newMode);
}

void Playlist::play() {
    mode->play(elements);
}
