#ifndef _MEDIAPARSER_H_
#define _MEDIAPARSER_H_

#include <regex>
#include <string>
#include <vector>
#include "File.h"

class FilesParser {
  public:
    static strings_t splitString(std::string &s, char delimiter);
    static attributes_t separateAttributes(strings_t &strings);
    static bool isDescriptionValid(const strings_t &strings);
};

#endif //_MEDIAPARSER_H_
