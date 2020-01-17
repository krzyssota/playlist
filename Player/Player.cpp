#include "Player.h"

File& Player::openFile(File &f) {
    f.setOpenStatus();
    return f;
}

std::shared_ptr<Playlist> Player::createPlaylist(std::string s) {

    return std::make_shared<Playlist>(s);
}
