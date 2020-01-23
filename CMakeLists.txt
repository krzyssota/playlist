cmake_minimum_required(VERSION 3.15)
project(playlist)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(playlist
        playlist_example.cc
        File.cc File.h
        Song.cc Song.h
        Movie.cc Movie.h
        Playlist.cc Playlist.h
        Component.h
        FilesParser.cc FilesParser.h
        Player.cc Player.h
        PlayerException.h
        CycleException.cc CycleException.h
        InvalidNameException.cc InvalidNameException.h
        InvalidPositionException.cc InvalidPositionException.h
        IncompleteDescriptionException.cc IncompleteDescriptionException.h
        UnsupportedTypeException.cc UnsupportedTypeException.h
        Mode.h
        ShuffleMode.cc ShuffleMode.h
        OddEvenMode.cc OddEvenMode.h
        SequenceMode.cc SequenceMode.h
        Media.cc Media.h
        )