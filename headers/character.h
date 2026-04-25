#pragma once

#include <iostream>
#include <unordered_map>
#include <thread>
#include <chrono>
#include <vector>

#include "basicrand.h"
#include "win32.h"

namespace consultant {
    static int pindex = 0;

    using dialog_map = std::vector<std::string>;

    class DLL_EXPORT character {
    private:
        int char_id;
        dialog_map dialog;
    public:
        std::string name;

        character(std::string n, dialog_map d) : char_id(pindex++), name(n), dialog(d) {}

        void talk(const std::string& message);
        std::string getrandomline();
        void talkloop(const int wait);
    };
}