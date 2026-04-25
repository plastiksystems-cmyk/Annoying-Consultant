#include "character.h"
#include "petrulici.h"

namespace consultant {
    void character::talk(const std::string& message) {
        if (message != "") {
            std::cout << name << ": " << message << '\n';
        }
    }

    std::string character::getrandomline() {
        if (dialog.empty()) {
            return "";
        }
        return dialog[randomint(0, static_cast<int>(dialog.size()) - 1)];
    }

    void character::talkloop(const int wait) {
        while (true) {
            talk(getrandomline());
            std::this_thread::sleep_for(std::chrono::seconds(wait));
        }
    }
}