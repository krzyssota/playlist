#include "File.h"
#include "FilesParser.h"
#include <Player/Exceptions/InvalidNameException.h>

static const char PIPE = '|';


File::File(std::string description) : opened(false) {
    strings_t tokens = FilesParser::splitString(description, PIPE);

    if (!FilesParser::isDescriptionValid(tokens)) {
        throw InvalidNameException();
    }

    fileType = tokens.front();
    content = tokens.back();
    attributes = FilesParser::separateAttributes(tokens);
}

std::string File::getFileType() const {
    return fileType;
}

attributes_t File::getFileAttributes() const {
    return attributes;
}

std::string File::getFileContent() const {
    return content;
}
