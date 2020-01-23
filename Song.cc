#include "Song.h"

Song::Song(const File &f) : Media(f) {
    dataRequirements = {"title", "artist"};

    for (const auto &r : dataRequirements) {
        auto it = attributes.find(r);

        if (it == attributes.end()) { throw IncompleteDescriptionException(); }
    }
}
void Song::play() {
    std::cout << "Song [" << attributes["artist"] << ", " << attributes["title"] << "]: ";
    std::cout << content << std::endl;
}
