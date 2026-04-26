#pragma once

#include <string>
#include <iostream>

#include <vector>

#include <thread>
#include <chrono>

#include "cswindows.h"
#include "csmath.h"

namespace cs {
    inline int cindex = 1;

    using dialog_map = std::vector<std::string>;

    class DLL_EXPORT character {
    private:
        const int uniqueid;
        const dialog_map dialogue;
    public:
        std::string name;
        int talkspeed;

        character(const std::string& na, const dialog_map& di, int ta) : uniqueid(cindex++), name(na), dialogue(di), talkspeed(ta) {}

        void talk(const std::string& m);
        void talkloop(int w);
    };

    using character_map = std::vector<character>;

    inline character_map characters;
}