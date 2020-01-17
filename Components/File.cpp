#include <vector>
#include "File.h"
#include <regex>
#include <Player/Exceptions/InvalidNameException.h>

static const std::regex CONTENT_REGEX(R"(^([a-zA-Z0-9 ,.!?':;\-])+$)");

static const char PIPE = '|';
static const char COLON = ':';
static const std::string ARTIST = "artist";
static const std::string TITLE = "title";
static const std::string YEAR = "year";

static std::vector<std::string> splitString(std::string &s, char delimiter);

static bool validateDescripton(const std::vector<std::string> &strings);


void File::setOpenStatus() {
    opened = true;
}

/*
File("audio|artist:Dire Straits|title:Money for Nothing|""Now look at them yo-yo's that's the way you do it..."));
File("video|title:Cabaret|year:1972|Qvfcynlvat Pnonerg");
 */

File::File(std::string &description) : opened(false) {
//    std::vector<std::string> parts;
//    size_t i = 0;
//    // a u d i o | a r t i
//    // 0 1 2 3 4 5 6 7 8 9
//    // length = 10
//    // i = 5
//    std::string spipe = R"(|)"; // R bierze '|' dosłownie a nie jako znak specjalny
//    std::regex rgx_pipe(spipe);
//    std::string colon = ":";
//    std::regex rgx_colon(colon);
//    std::regex_replace(description, rgx_pipe, "\0");
//    std::regex_replace(description, rgx_colon, "\0");

    std::vector<std::string> tokens = splitString(description, PIPE);

    if (!validateDescripton(tokens)) {
        throw InvalidNameException();
    }

    separateAttributes(tokens);
}

File::File() {
    // empty
}

std::vector<std::string> splitString(std::string &s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);

    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}

static bool validateDescripton(const std::vector<std::string> &strings) {
    for (const std::string& s : strings) {
        if (!std::regex_match(s, CONTENT_REGEX)) { return false; }
    }

    return true;
}

void File::separateAttributes(std::vector<std::string> &strings) {
    fileType = strings[0];

    size_t i = 1;

    for (; i < strings.size() - 1; i++) {

    }
}