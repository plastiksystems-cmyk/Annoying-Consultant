#include "basicrand.h"

namespace consultant {
    int randomint(int min, int max) {
        std::random_device rd;
        std::mt19937 rng(rd());

        std::uniform_int_distribution<int> dist(min, max);

        return dist(rng);
    }
}