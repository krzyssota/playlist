#include <vector>
#include "File.h"
#include <regex>

void File::setOpenStatus() {
    opened = true;
}

/*
File("audio|artist:Dire Straits|title:Money for Nothing|""Now look at them yo-yo's that's the way you do it..."));
File("video|title:Cabaret|year:1972|Qvfcynlvat Pnonerg");
 */

File::File(std::string& description) : opened(false) {
    std::vector<std::string> parts;
    size_t i = 0;
    // a u d i o | a r t i
    // 0 1 2 3 4 5 6 7 8 9
    // length = 10
    // i = 5
    std::string spipe = R"(|)"; // R bierze '|' dosłownie a nie jako znak specjalny
    std::regex rgx_pipe(spipe);
    std::string scolon = ";";
    std::regex rgx_colon(scolon);
    std::regex_replace(description, rgx_pipe, "\0");
    std::regex_replace(description, rgx_colon, "\0");

    static const std::string contentPattern = R"(^([a-zA-Z0-9 ,.!?':;\-])+$)";
}

File::File() {
    // empty
}
