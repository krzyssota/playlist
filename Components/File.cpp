#include "File.h"
#include "FilesParser.h"
#include <vector>
#include <regex>
#include <Player/Exceptions/InvalidNameException.h>

static const char PIPE = '|';
static const char COLON = ':';


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

    strings_t tokens = FilesParser::splitString(description, PIPE);

    if (!FilesParser::validateDescripton(tokens)) {
        throw InvalidNameException();
    }

    fileType = tokens.front();
    content = tokens.back();
    attributes = FilesParser::separateAttributes(tokens);
}

File::File() {
    // empty
}
