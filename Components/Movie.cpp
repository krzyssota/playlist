#include <iostream>
#include "Movie.h"

/*
Movie::Movie(std::string &s) {
}
*/
Movie::Movie(std::string &s, int y) :File() {
    title = s;
    year = y;
}


void Movie::play() {
    std::cout << "Movie [" << title << ", " << year << "]: " << std::endl;
}
