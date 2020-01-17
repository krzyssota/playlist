#ifndef _FILE_H_
#define _FILE_H_

#include <string>
#include <map>
#include "Component.h"

class File : public Component {
  private:
    void separateAttributes(std::vector<std::string> &strings);
protected :
    bool opened;
    std::map<std::string, std::string> attributes;
    std::string extraMetadata;
    std::string title;
    std::string content;
    std::string fileType;
public:
    File(std::string& s);
    File();
    void setOpenStatus();
};

#endif //_FILE_H_
