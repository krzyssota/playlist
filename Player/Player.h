#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <Components/Playlist.h>
#include <string>
#include <Components/File.h>
#include <functional>

using types_t = std::map<std::string, std::function<std::shared_ptr<Component>(File &f)>>;

class Player {
  private:
    types_t fileTypes;
public :
    Player();
    std::shared_ptr<Playlist> createPlaylist(std::string s);
    static std::shared_ptr<Component> openFile(File& f);

};

#endif //_PLAYER_H_
