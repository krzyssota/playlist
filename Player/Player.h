#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <Components/Playlist.h>
#include <string>
#include <Components/File.h>
#include "Components/Media.h"
#include <functional>

using types_t = std::unordered_map<std::string, std::function<std::shared_ptr<Media>(const File &f)> >;

class Player {
private:
    types_t fileTypes;
public :
    Player();
    static std::shared_ptr<Playlist> createPlaylist(const std::string& s);
    std::shared_ptr<Media> openFile(const File& f);
};

#endif //_PLAYER_H_
