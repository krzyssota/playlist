#include <sstream>
#include <regex>
#include <Player/Exceptions/InvalidNameException.h>
#include "FilesParser.h"
#include "Player/Exceptions/IncompleteDescriptionException.h"
#include "Song.h"
#include "Movie.h"


static const char COLON = ':';
static const std::string ARTIST = "artist";
static const std::string TITLE = "title";
static const std::string YEAR = "year";
static const std::string SONG = "audio";
static const std::string MOVIE = "video";

/*__attribute__((constructor)) static void initialise() {
    CONTENT_REGEX = std::regex(R"(^([a-zA-Z0-9 ,.!?':;\-])+$)");
}*/

static strings_t splitByFirstOccurence(std::string &s, char delimiter);

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

bool FilesParser::validateDescripton(const strings_t &strings) {
    static std::regex CONTENT_REGEX(R"(^([a-zA-Z0-9 ,.!?':;\-])+$)");
    for (const std::string &s : strings) {
        if (!std::regex_match(s, CONTENT_REGEX)) { return false; }
    }

    return true;
}
std::shared_ptr<Component> FilesParser::openFile(File &f) { // TODO zwraca shared ptr  funkvja playera

}

strings_t splitByFirstOccurence(std::string &s, char delimiter) {
    size_t pos = s.find(delimiter);

    if (pos == std::string::npos) {
        throw InvalidNameException();
    }

    strings_t keyValue;
    keyValue.emplace_back(s.substr(0, pos - 1));
    keyValue.emplace_back(s.substr(pos + 1));

    return keyValue;
}