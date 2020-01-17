#include <memory>
#include "OddEvenMode.h"

std::shared_ptr<OddEvenMode> createOddEvenMode() {

    return std::make_shared<OddEvenMode>();
}

void OddEvenMode::play(const std::vector<std::shared_ptr<Component>> &elements) {
    size_t sz = elements.size();
    for(size_t i = 1; i < sz; i+=2) {
        elements[i]->play();
    }
    for(size_t i = 0; i < sz; i+=2) {
        elements[i]->play();
    }
}
