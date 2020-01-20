#include <iostream>
#include "Movie.h"
#include <Player/Exceptions/IncompleteDescriptionException.h>

Movie::Movie(const File &f) : Media(f) {
    dataRequirements = {"title", "year"};
    for (const auto &r : dataRequirements) {
        auto it = attributes.find(r);
        if (it == attributes.end()) throw IncompleteDescriptionException();
    }
}

std::string decode(const std::string& source) {
    std::string result;
    for (char c : source) {
        if (isalpha(c)) {
            if ((tolower(c) - 'a') < 14)
                result.append(1, c + 13);
            else
                result.append(1, c - 13);
        } else {
            result.append(1, c);
        }
    }
    return result;
}

void Movie::play() {
    std::cout << "Movie [" << attributes["title"] << ", " << attributes["year"] << "]: ";
    std::cout << decode(content) << std::endl;
}
