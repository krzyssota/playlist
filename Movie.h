#ifndef _MOVIE_H_
#define _MOVIE_H_

#include "File.h"
#include "Media.h"
#include "IncompleteDescriptionException.h"

class Movie : public Media {
  public :
    explicit Movie(const File &f);
    void play() override;
};

#endif //_MOVIE_H_
