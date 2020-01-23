#ifndef PLAYLIST_MEDIA_H
#define PLAYLIST_MEDIA_H

#include <utility>
#include <vector>
#include <string>
#include <map>
#include "Component.h"
#include "File.h"

using attributes_t = std::map<std::string, std::string>;

class Media : public Component {
  private:
  protected:
    attributes_t attributes;
    std::string content;
    strings_t dataRequirements;
  public:
    explicit Media(const File &f);
//    ~Media() override = default;
    void play() override = 0;
    bool isCycle(const Component *element) override;
};

#endif //PLAYLIST_MEDIA_H
