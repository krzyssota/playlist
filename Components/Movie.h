#ifndef _MOVIE_H_
#define _MOVIE_H_

#include "File.h"

class Movie : public File {
private :
    int year;
public :
    Movie(std::string s);
};

#endif //_MOVIE_H_
