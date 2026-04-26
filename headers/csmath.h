#pragma once

#include <random>

#include "cswindows.h"

namespace cs {
    struct DLL_EXPORT math {
        static int random(int min = 0, int max = 1);
        static float randomfloat(float min = 0, float max = 1);
    };
}