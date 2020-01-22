#ifndef _SONG_H_
#define _SONG_H_

#include "Components/File.h"
#include "Media.h"


class Song : public Media {
public:
    explicit Song(const File& f);
    void play() override;
};

#endif // _SONG_H_
