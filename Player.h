#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
#include <functional>
#include <memory>
#include "Playlist.h"
#include "File.h"
#include "Song.h"
#include "Movie.h"
#include "UnsupportedTypeException.h"


using fun_t = std::function<std::shared_ptr<Media>(const File &f)>;
using types_t = std::unordered_map<std::string, fun_t>;

class Player {
private:
    types_t fileTypes;
public :
    Player();
    static std::shared_ptr<Playlist> createPlaylist(const std::string& s);
    std::shared_ptr<Media> openFile(const File& f);
};

#endif //_PLAYER_H_
