#ifndef _MOVIE_H_
#define _MOVIE_H_

#include "File.h"

class Movie : public Component {
private :
//    int year;
public :
    /*explicit Movie(std::string &s);*/
    Movie(std::string &s, int year);
    explicit Movie(const File &f);
    void play() override;
};

#endif //_MOVIE_H_
