#ifndef _FILE_H_
#define _FILE_H_

#include <string>
#include "Component.h"

class File : public Component {
protected :
    bool opened;
    std::string extraMetadata;
    std::string title;
    std::string content;
public:
    File(std::string& s);
    File();
    void setOpenStatus();
};

#endif //_FILE_H_
