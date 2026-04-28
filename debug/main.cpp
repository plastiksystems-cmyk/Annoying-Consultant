#include "petrulici.h"
#include "highspeedtrain.h"
#include "salami.h"

std::vector<std::thread> threads;

int main() {
    cs::characters.push_back(cs::petrulici);
    cs::characters.push_back(cs::highspeedtrain);
    cs::characters.push_back(cs::salami);

    for (cs::character& c : cs::characters) {
        threads.emplace_back(&cs::character::talkloop, &c, c.talkspeed);
    }

    for (auto& t : threads) {
        t.join();
    }
    std::cin.get();
    return 0;
}