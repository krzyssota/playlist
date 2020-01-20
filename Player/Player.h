#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <Components/Playlist.h>
#include <string>
#include <Components/File.h>

class Player {
public :
    std::shared_ptr<Playlist> createPlaylist(std::string s);
    static File& openFile(File& f);

};

#endif //_PLAYER_H_
