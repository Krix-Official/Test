#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        // Icon 50
        auto icon1 = SimplePlayer::create(50);
        icon1->setPosition({ 100.0f, 100.0f });
        icon1->setScale(0.8f);
        icon1->setColor(GameManager::sharedState()->colorForIdx(10));
        icon1->setSecondColor(GameManager::sharedState()->colorForIdx(5));

        // Icon 55
        auto icon2 = SimplePlayer::create(55);
        icon2->setPosition({ 140.0f, 100.0f });
        icon2->setScale(0.8f);
        icon2->setColor(GameManager::sharedState()->colorForIdx(3));
        icon2->setSecondColor(GameManager::sharedState()->colorForIdx(12));

        this->addChild(icon1);
        this->addChild(icon2);

        return true;
    }
};
