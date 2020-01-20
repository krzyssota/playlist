#include <Components/FilesParser.h>
#include "Player.h"
#include "Exceptions/InvalidNameException.h"
#include "Components/Song.h"
#include "Components/Movie.h"


auto SONG_L = [](const File &f) { return std::make_shared<Song>(f); };
auto MOVIE_L = [](const File &f) { return std::make_shared<Movie>(f); };

Player::Player() {
    fileTypes.emplace("audio", SONG_L);
    fileTypes.emplace("video", MOVIE_L);
}

std::shared_ptr<Media> Player::openFile(const File &f) { // TODO nie ogarniam. f powinno byc constowe
    auto it = fileTypes.find(f.getFileType()); // getFileType constowa
    if(it != fileTypes.end()) return it->second(f);
    else throw InvalidNameException();
}
std::shared_ptr<Playlist> Player::createPlaylist(std::string s) {
    return std::make_shared<Playlist>(s);
}
