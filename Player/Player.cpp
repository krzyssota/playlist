#include <Components/FilesParser.h>
#include "Player.h"

Component Player::openFile(File &f) {
//    f.setOpenStatus();
//    return f;
    return FilesParser::openFile(f);
}

std::shared_ptr<Playlist> Player::createPlaylist(std::string s) {

    return std::make_shared<Playlist>(s);
}
