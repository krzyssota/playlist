#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <Components/Playlist.h>
#include <string>
#include <Components/File.h>

class Player {
private:
public :
    Playlist& createPlaylist(std::string s);
    File& openFile(File& f)
};

#endif //_PLAYER_H_
