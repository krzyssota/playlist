#include "InvalidNameException.h"
#include "IncompleteDescriptionException.h"
#include "FilesParser.h"

static const char COLON = ':';

strings_t splitByFirstOccurence(std::string &s, char delimiter) {
    size_t pos = s.find(delimiter);

    if (pos == std::string::npos) {
        throw InvalidNameException();
    }

    strings_t keyValue;
    keyValue.emplace_back(s.substr(0, pos));
    keyValue.emplace_back(s.substr(pos + 1));

    return keyValue;
}

attributes_t FilesParser::separateAttributes(strings_t &strings) {
    attributes_t attributes;

    for (size_t i = strings.size() - 2; i > 0; i--) {
        strings_t keyValue = splitByFirstOccurence(strings[i], COLON);

        attributes.try_emplace(keyValue.front(), keyValue.back());
    }

    return attributes;
}

strings_t FilesParser::splitString(std::string &s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);

    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }

    if (tokens.size() < 3) {
        throw IncompleteDescriptionException();
    }

    return tokens;
}

bool FilesParser::isDescriptionValid(const strings_t &strings) {
    static std::regex CONTENT_REGEX(R"(^([a-zA-Z0-9 ,.!?':;\-])+$)");

    return std::regex_match(strings.front(), CONTENT_REGEX) &&
        std::regex_match(strings.back(), CONTENT_REGEX);
}

