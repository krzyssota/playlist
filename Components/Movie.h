#ifndef _MOVIE_H_
#define _MOVIE_H_

#include "File.h"

class Movie : public Component {
private :
    int year;
public :
    explicit Movie(std::string &s);
};

#endif //_MOVIE_H_
