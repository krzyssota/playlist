#include <Components/FilesParser.h>
#include "Player.h"
#include "Exceptions/InvalidNameException.h"
#include "Components/Song.h"
#include "Components/Movie.h"

static const std::string SONG = "audio";
static const std::string MOVIE = "video";
static const std::function SONG_L = [](File &f) { return std::make_shared<Song>(f); };
static const std::function MOVIE_L = [](File &f) { return std::make_shared<Movie>(f); };


Player::Player() : fileTypes() {
    fileTypes.emplace(SONG, SONG_L);
    fileTypes.emplace(MOVIE, MOVIE_L);
}

std::shared_ptr<Component> Player::openFile(File &f) {
    f.setOpenStatus();
    if (f.getFileType() == SONG) {
        //Song s = Song(f);
        return std::make_shared<Song>(f);
    } else if (f.getFileType() == MOVIE) {
        return std::make_shared<Movie>(f);
    } else {
        throw InvalidNameException();
    }
}
std::shared_ptr<Playlist> Player::createPlaylist(std::string s) {

    return std::make_shared<Playlist>(s);
}
