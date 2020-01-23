#ifndef _SONG_H_
#define _SONG_H_

#include <iostream>
#include "IncompleteDescriptionException.h"
#include "File.h"
#include "Media.h"

class Song : public Media {
  public:
    explicit Song(const File &f);
    ~Song() override = default;
    void play() override;
};

#endif // _SONG_H_
