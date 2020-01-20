#ifndef _MOVIE_H_
#define _MOVIE_H_

#include "File.h"
#include "Media.h"

class Movie : public Media {
public :
    explicit Movie(File& f);
    void play() override;
};

#endif //_MOVIE_H_
