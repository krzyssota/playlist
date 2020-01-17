#include "Song.h"
#include <regex>
#include <iostream>

/*
File("audio|artist:Dire Straits|title:Money for Nothing|"
 "Now look at them yo-yo's that's the way you do it..."));
 */

Song::Song(const std::string& scontent, std::string args) : File{} { // fejkowy konstruktor File
    content = scontent;
    std::string sartist("artist:");
    std::string stitle("title:");


    for(size_t i = 0; i < args.size(); i++) {

    }
}
