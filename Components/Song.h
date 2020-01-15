#ifndef _SONG_H_
#define _SONG_H_

#include "Components/File.h"

class Song : public File {
private:
    std::string artist;
public:
    Song(std::string s);
};

#endif // _SONG_H_
