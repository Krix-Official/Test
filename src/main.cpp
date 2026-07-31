#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        auto icon1 = SimplePlayer::create(50);
        if (icon1) {
            icon1->setPosition({ 100.0f, 100.0f });
            icon1->setScale(0.8f);
            this->addChild(icon1);
        }

        auto icon2 = SimplePlayer::create(55);
        if (icon2) {
            icon2->setPosition({ 140.0f, 100.0f });
            icon2->setScale(0.8f);
            this->addChild(icon2);
        }

        return true;
    }
};
