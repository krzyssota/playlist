//
// Created by krzubuntu on 22.01.2020.
//

#ifndef PLAYLIST_UNSUPPORTEDTYPEEXCEPTION_H
#define PLAYLIST_UNSUPPORTEDTYPEEXCEPTION_H

#include "PlayerException.h"

class UnsupportedTypeException : public PlayerException {
public:
    [[nodiscard]] const char *what() const noexcept override;

};

#endif //PLAYLIST_UNSUPPORTEDTYPEEXCEPTION_H
