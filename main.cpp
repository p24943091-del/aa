#include <Geode/Geode.hpp>
#include <Geode/modify/GameManager.hpp>

using namespace geode::prelude;

class $modify(UnlockAllGM, GameManager) {
    bool isIconUnlocked(int id, IconType type) {
        return true;
    }

    bool isColorUnlocked(int id, UnlockType type) {
        return true;
    }
};
