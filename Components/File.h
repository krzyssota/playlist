#ifndef _FILE_H_
#define _FILE_H_

#include <string>
#include <map>
#include <vector>
#include "Component.h"

using strings_t = std::vector<std::string>;
using attributes_t = std::map<std::string, std::string>;

class File {
protected :
    bool opened;
    attributes_t attributes;
    std::string extraMetadata;
    std::string title;
    std::string content;
    std::string fileType;
public:
    explicit File(std::string& s);
    explicit File(const char *s) : File((std::string&) s) {}
    File();
    void setOpenStatus();
    std::string getFileType();
};

#endif //_FILE_H_
