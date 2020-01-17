#include <memory>
#include <algorithm>
#include "ShuffleMode.h"

std::shared_ptr<ShuffleMode> createShuffleMode(unsigned seed) {
    return std::make_shared<ShuffleMode>(seed);
}

void ShuffleMode::play(const std::vector<std::shared_ptr<Component>> &elements) {

    size_t sz = elements.size();

    std::vector<size_t> indexes;
    for(size_t i = 0; i < sz; i++) {
        indexes.push_back(i);
    }
    shuffle(indexes.begin(), indexes.end(), random_engine);

    for(size_t i = 0; i < sz; i++) {
        elements[indexes[i]].get()->play();
    }
}

