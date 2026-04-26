#include "petrulici.h"

std::vector<std::thread> threads;

int main() {
    cs::characters.push_back(cs::petrulici);

    for (cs::character& c : cs::characters) {
        threads.emplace_back(&cs::character::talkloop, &c, c.talkspeed);
    }

    for (auto& t : threads) {
        t.join();
    }
    std::cin.get();
    return 0;
}