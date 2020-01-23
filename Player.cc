#include "Player.h"

auto SONG_L = [](const File &f) { return std::make_shared<Song>(f); };
auto MOVIE_L = [](const File &f) { return std::make_shared<Movie>(f); };

Player::Player() {
    fileTypes.emplace("audio", SONG_L);
    fileTypes.emplace("video", MOVIE_L);
}

std::shared_ptr<Media> Player::openFile(const File &f) {
    auto it = fileTypes.find(f.getFileType());
    if(it != fileTypes.end()) return it->second(f);
    else throw UnsupportedTypeException();
}

std::shared_ptr<Playlist> Player::createPlaylist(const std::string& s) {
    return std::make_shared<Playlist>(s);
}
