#include "SequenceMode.h"

std::shared_ptr<SequenceMode> createSequenceMode() {
    return std::make_shared<SequenceMode>();
}

void SequenceMode::play(const componentPtrs_t &elements) {
    for (const auto &el : elements) {
        el->play();
    }
}
