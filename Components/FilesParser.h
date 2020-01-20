#ifndef _MEDIAPARSER_H_
#define _MEDIAPARSER_H_

#include <string>
#include <vector>
#include "File.h"

class FilesParser {
  public:
    static attributes_t separateAttributes(strings_t &strings);
    static strings_t splitString(std::string &s, char delimiter);
    static bool validateDescripton(const strings_t &strings);
};

#endif //_MEDIAPARSER_H_
