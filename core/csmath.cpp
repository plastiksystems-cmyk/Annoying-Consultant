#include "csmath.h"

namespace cs {
    int math::random(int min, int max) {
        static std::random_device rd;
        static std::mt19937 rng(rd());

        std::uniform_int_distribution<int> dist(min, max);
        return dist(rng);
    }
    float math::randomfloat(float min, float max) {
        static std::random_device rd;
        static std::mt19937 rng(rd());

        std::uniform_real_distribution<float> dist(min, max);
        return dist(rng);
    };
}