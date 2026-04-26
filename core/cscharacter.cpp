#include "cscharacter.h"

namespace cs {
    void character::talk(const std::string& message) {
        std::printf("%s: %s\n", name.c_str(), message.c_str());
    }

    void character::talkloop(int wait) {
        if (dialogue.empty()) return;

        while (true) {
            int rdi = math::random(0, dialogue.size() - 1);
            talk(dialogue[rdi]);
            std::this_thread::sleep_for(std::chrono::seconds(wait));
        }
    }
}