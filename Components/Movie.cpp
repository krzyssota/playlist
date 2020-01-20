#include <iostream>
#include "Movie.h"
#include <Player/Exceptions/IncompleteDescriptionException.h>

Movie::Movie(File &f) : Media(f) {
    dataRequirements = {"title", "artist"};
    for (const auto &r : dataRequirements) {
        auto it = attributes.find(r);
        if (it == attributes.begin()) throw IncompleteDescriptionException();
    }
}

std::string decode(const std::string& source) {
    std::string result;
    for (size_t i = 0; i < source.size(); ++i) {
        if (isalpha(source[i])) {
            if ((tolower(source[i]) - 'a') < 14)
                result.append(1, source[i] + 13);
            else
                result.append(1, source[i] - 13);
        } else {
            result.append(1, source[i]);
        }
    }
    return result;
}

void Movie::play() {
    std::cout << "Movie [" << attributes["title"] << ", " << attributes["year"] << "]: ";
    std::cout << decode(content) << std::endl;
}
Movie::Movie(const File &f) {

}
