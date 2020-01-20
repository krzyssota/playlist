#ifndef PLAYLIST_MEDIA_H
#define PLAYLIST_MEDIA_H

#include <utility>
#include <vector>
#include "Component.h"
#include "File.h"
#include <string>
#include <map>

using attributes_t = std::map<std::string, std::string>;

class Media : Component {
private:
protected:
    attributes_t attributes;
    std::string content;
    std::string fileType;
    std::vector<std::string> dataRequirements;
public:
    explicit Media(File &f) {
        attributes = f.getAttributes();
        content = f.getContent();
        fileType = f.getFileType();
    }
    virtual ~Media() = 0;
};


#endif //PLAYLIST_MEDIA_H
