#include <iostream>
#include <Components/Movie.h>
#include "lib_playlist.h"
#include "Modes/ShuffleMode.h"
#include "Modes/OddEvenMode.h"

using namespace std;

int main() {
    Player player;

    auto mishmash = player.createPlaylist("mishmash"); // zwraca NIE constowa playliste, nie wiem czy dobrze
    string sw_str4 = "star wars new hope";
    auto sw4 = std::make_shared<Movie>(Movie(sw_str4, 1977));
    string sw_str5 = "empire strikes back";
    auto sw5 = std::make_shared<Movie>(Movie(sw_str5, 1980));
    string sw_str6 = "return of the jedi";
    auto sw6 = std::make_shared<Movie>(Movie(sw_str6, 1983));
    string sw_str1 = "phantom menace";
    auto sw1 = std::make_shared<Movie>(Movie(sw_str1, 1999));
    string sw_str2 = "clone wars";
    auto sw2 = std::make_shared<Movie>(Movie(sw_str2, 2002));
    string sw_str3 = "return of the sith";
    auto sw3 = std::make_shared<Movie>(Movie(sw_str3, 2005));
    mishmash->add(sw4);
    mishmash->add(sw5);
    mishmash->add(sw6);
    mishmash->add(sw1);
    mishmash->add(sw2);
    mishmash->add(sw3);
    cout << "seq: " << endl;
    mishmash->setMode(createSequenceMode());
    mishmash->play();
    cout << "shuffle 1: " << endl;
    mishmash->setMode(createShuffleMode(0));
    mishmash->play();
    cout << "shuffle 2: " << endl;
    mishmash->play();
    cout << "oddeven: " << endl;
    mishmash->setMode(createOddEvenMode());
    mishmash->play();

    return 0;
}
