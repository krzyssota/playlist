#include "Playlist.h"


void Playlist::add(const std::shared_ptr<Component> &element) {
    if (element->isCycle(this)) { throw CycleException(); }

    elements.push_back(element);
}

void Playlist::add(const std::shared_ptr<Component> &element, size_t position) {
    if (position > elements.size()) { throw InvalidPositionException(); }
    if (element->isCycle(this)) { throw CycleException(); }

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

bool Playlist::isCycle(Component *element) {
    if (this == element) { return true; }

    for (auto &e : elements) {
        if (e->isCycle(element)) {
            return true;
        }
    }

    return false;
}

