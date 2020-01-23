#include <iostream>
#include <regex>
#include "Movie.h"
#include <Player/Exceptions/IncompleteDescriptionException.h>
#include <Player/Exceptions/InvalidNameException.h>


Movie::Movie(const File &f) : Media(f) {
    static std::regex YEAR_REGEX(R"(^[0-9]+$)");
    dataRequirements = {"title", "year"};

    for (const auto &r : dataRequirements) {
        auto it = attributes.find(r);

        if (it == attributes.end()) { throw IncompleteDescriptionException(); }

        if (it->first == "year" && std::regex_match(it->second, YEAR_REGEX)) {
            throw InvalidNameException();
        }
    }
}

std::string decode(const std::string &source) {
    std::string result;

    for (char c : source) {
        if (isalpha(c)) {
            if ((tolower(c) - 'a') < 13) {
                result.append(1, c + 13);
            } else {
                result.append(1, c - 13);
            }
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
