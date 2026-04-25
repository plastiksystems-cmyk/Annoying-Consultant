#include <iostream>
#include "petrulici.h"

int main() {
    std::thread tloop(&consultant::character::talkloop, &consultant::petrulici, 1);
    tloop.join();

    std::cin.get();
}