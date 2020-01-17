#ifndef _SONG_H_
#define _SONG_H_

#include "Components/File.h"

class Song : public Component {
private:
    std::string artist;
public:
    Song(const std::string& content, std::string args);
};

#endif // _SONG_H_
