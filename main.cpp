#include <iostream>
#include <string>
#include "mobs.h"

int main() {
    // Инициализация объекта Mob с помощью конструктора
    game::Mob jackFrost("Jack Frost", 100, 10, 20, 30, 40, 50, 60);

    // Создание способностей
    game::Ability iceBreath("Ice Breath", "Breathes a freezing ice breath.", 1, "Attack");
    game::Ability frostNova("Frost Nova", "Creates a nova of frost around the target.", 5, "AoE Attack");
    game::Ability iceShield("Ice Shield", "Generates a protective ice shield.", 3, "Defense");
    game::Ability snowballStorm("Snowball Storm", "Summons a storm of snowballs.", 7, "AoE Attack");

    // Добавление способностей к Jack Frost
    jackFrost.addAbility(iceBreath);
    jackFrost.addAbility(frostNova);
    jackFrost.addAbility(iceShield);
    jackFrost.addAbility(snowballStorm);

    // Вывод начальных значений
    std::cout << "Initial Stats:" << std::endl;
    std::cout << "Name: " << jackFrost.getMobName() << std::endl;
    std::cout << "Exp: " << jackFrost.getExperiencePoints() << std::endl;
    std::cout << "Lv: " << jackFrost.getLevel() << std::endl;
    std::cout << "St: " << jackFrost.getStrength() << std::endl;
    std::cout << "Ma: " << jackFrost.getMagic() << std::endl;
    std::cout << "En: " << jackFrost.getEndurance() << std::endl;
    std::cout << "Ag: " << jackFrost.getAgility() << std::endl;
    std::cout << "Lu: " << jackFrost.getLuck() << std::endl;

    // Вывод способностей
    std::cout << "\nAbilities:" << std::endl;
    const auto& abilities = jackFrost.getAbilities();
    for (const auto& ability : abilities) {
        std::cout << "Name: " << ability.getName() << std::endl;
        std::cout << "Description: " << ability.getDescription() << std::endl;
        std::cout << "Required Level: " << ability.getRequiredLevel() << std::endl;
        std::cout << "Type: " << ability.getType() << std::endl;
        std::cout << "--------------------------" << std::endl;
    }

    // Установка новых значений статов с помощью setStats
    jackFrost.setStats(10, 20, 30, 40, 50);

    // Вывод обновленных значений
    std::cout << "\nUpdated Stats:" << std::endl;
    std::cout << "Name: " << jackFrost.getMobName() << std::endl;
    std::cout << "Exp: " << jackFrost.getExperiencePoints() << std::endl;
    std::cout << "Lv: " << jackFrost.getLevel() << std::endl;
    std::cout << "St: " << jackFrost.getStrength() << std::endl;
    std::cout << "Ma: " << jackFrost.getMagic() << std::endl;
    std::cout << "En: " << jackFrost.getEndurance() << std::endl;
    std::cout << "Ag: " << jackFrost.getAgility() << std::endl;
    std::cout << "Lu: " << jackFrost.getLuck() << std::endl;

    // Вывод обновленных способностей
    std::cout << "\nUpdated Abilities:" << std::endl;
    for (const auto& ability : abilities) {
        std::cout << "Name: " << ability.getName() << std::endl;
        std::cout << "Description: " << ability.getDescription() << std::endl;
        std::cout << "Required Level: " << ability.getRequiredLevel() << std::endl;
        std::cout << "Type: " << ability.getType() << std::endl;
        std::cout << "--------------------------" << std::endl;
    }

    // Ожидание ввода пользователя перед завершением программы
    std::cout << "\nPress Enter to exit..." << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}