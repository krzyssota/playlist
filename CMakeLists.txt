cmake_minimum_required(VERSION 3.15)
project(playlist)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(playlist
        Task/testy_1.cpp
        Task/playlist_example.cc
        Components/File.cpp Components/File.h
        Components/Song.cpp Components/Song.h
        Components/Movie.cpp Components/Movie.h
        Components/Playlist.cpp Components/Playlist.h
        Components/Component.cpp Components/Component.h
        Components/FilesParser.cpp Components/FilesParser.h
        Player/Player.cpp Player/Player.h
        Player/Exceptions/PlayerException.cpp Player/Exceptions/PlayerException.h
        Player/Exceptions/CycleException.cpp Player/Exceptions/CycleException.h
        Player/Exceptions/InvalidNameException.cpp Player/Exceptions/InvalidNameException.h
        Modes/Mode.cpp Modes/Mode.h
        Modes/ShuffleMode.cpp Modes/ShuffleMode.h
        Modes/OddEvenMode.cpp Modes/OddEvenMode.h
        Modes/SequenceMode.cpp Modes/SequenceMode.h
        Components/Media.cpp Components/Media.h)