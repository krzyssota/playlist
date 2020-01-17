#include <memory>
#include <algorithm>
#include "ShuffleMode.h"

std::shared_ptr<ShuffleMode> createSequenceMode(unsigned seed) {
    return std::make_shared<ShuffleMode>(seed);
}

void ShuffleMode::play(const std::vector<std::shared_ptr<Component>> &elements) {
    size_t sz = elements.size();

    std::vector<size_t> indexes;
    for(size_t i = 0; i < sz; i++) {
        indexes[i] = i;
    }
    shuffle(indexes.begin(), indexes.end(), random_engine);

    for(size_t i = 0; i < sz; i+=2) {
        elements[indexes[i]]->play();
    }
}
