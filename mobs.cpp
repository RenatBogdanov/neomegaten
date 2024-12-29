#include "mobs.h"
#include <iostream>

namespace game {

// Конструктор по умолчанию
Mob::Mob() 
    : mobName_(""), experiencePoints_(0), level_(0), stats_{0, 0, 0, 0, 0} 
{
}

// Конструктор с параметрами
Mob::Mob(const std::string& name, int exp, int lv, int st, int ma, int en, int ag, int lu)
    : mobName_(name), experiencePoints_(exp), level_(lv), stats_{st, ma, en, ag, lu} 
{
}

// Деструктор
Mob::~Mob() {
    // Деструктор пуст, так как нет динамически выделенных ресурсов
}

// Геттеры
std::string Mob::getMobName() const {
    return mobName_;
}

int Mob::getExperiencePoints() const {
    return experiencePoints_;
}

int Mob::getLevel() const {
    return level_;
}

int Mob::getStrength() const {
    return stats_.strength_;
}

int Mob::getMagic() const {
    return stats_.magic_;
}

int Mob::getEndurance() const {
    return stats_.endurance_;
}

int Mob::getAgility() const {
    return stats_.agility_;
}

int Mob::getLuck() const {
    return stats_.luck_;
}

const std::vector<Ability>& Mob::getAbilities() const {
    return abilities_;
}

// Сеттеры
void Mob::setMobName(const std::string& name) {
    mobName_ = name;
}

void Mob::setStats(int strength, int magic, int endurance, int agility, int luck) {
    stats_.strength_ = strength;
    stats_.magic_ = magic;
    stats_.endurance_ = endurance;
    stats_.agility_ = agility;
    stats_.luck_ = luck;
}

void Mob::setExperiencePoints(int exp) {
    experiencePoints_ = exp;
}

void Mob::setLevel(int level) {
    level_ = level;
}

void Mob::setStrength(int strength) {
    stats_.strength_ = strength;
}

void Mob::setMagic(int magic) {
    stats_.magic_ = magic;
}

void Mob::setEndurance(int endurance) {
    stats_.endurance_ = endurance;
}

void Mob::setAgility(int agility) {
    stats_.agility_ = agility;
}

void Mob::setLuck(int luck) {
    stats_.luck_ = luck;
}

// Метод для добавления способности
void Mob::addAbility(const Ability& ability) {
    if (abilities_.size() < 8) {
        abilities_.push_back(ability);
    } else {
        std::cerr << "Cannot add more than 8 abilities to this mob." << std::endl;
    }
}

} // namespace game