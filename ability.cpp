#include "ability.h"

namespace game {

// Конструктор по умолчанию
Ability::Ability() 
    : name_(""), description_(""), requiredLevel_(0), type_("") 
{
}

// Конструктор с параметрами
Ability::Ability(const std::string& name, const std::string& description, int requiredLevel, const std::string& type)
    : name_(name), description_(description), requiredLevel_(requiredLevel), type_(type) 
{
}

// Геттеры
std::string Ability::getName() const {
    return name_;
}

std::string Ability::getDescription() const {
    return description_;
}

int Ability::getRequiredLevel() const {
    return requiredLevel_;
}

std::string Ability::getType() const {
    return type_;
}

// Сеттеры
void Ability::setName(const std::string& name) {
    name_ = name;
}

void Ability::setDescription(const std::string& description) {
    description_ = description;
}

void Ability::setRequiredLevel(int requiredLevel) {
    requiredLevel_ = requiredLevel;
}

void Ability::setType(const std::string& type) {
    type_ = type;
}

} // namespace game