#include <memory>
#include <utility>
#include <iostream>
#include <Player/Exceptions/InvalidPositionException.h>
#include "Playlist.h"
#include "Media.h"

void Playlist::add(const std::shared_ptr<Component>& element) {
    elements.push_back(element);
}

void Playlist::add(const std::shared_ptr<Component>& element, size_t position) {
    if (position > elements.size()) { throw InvalidPositionException(); }
    elements.insert(elements.begin() + position, element);
}

void Playlist::remove() {
    elements.pop_back();
}

void Playlist::remove(size_t position) {
    if (position >= elements.size()) { throw InvalidPositionException(); }
    elements.erase(elements.begin() + position);
}

void Playlist::setMode(std::shared_ptr<Mode> newMode) {
    mode = std::move(newMode);
}

void Playlist::play() {
    std::cout << "Playlist [" << name << "]" << std::endl;
    mode->play(elements);
}
