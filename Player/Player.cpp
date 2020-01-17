#include "Player.h"

File& Player::openFile(File &f) {
    f.setOpenStatus();
    return f;
}

std::shared_ptr<const Playlist> Player::createPlaylist(std::string s) {
    return std::make_shared<const Playlist>(s);
}
