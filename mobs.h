#ifndef MOBS_H
#define MOBS_H

#include <string>
#include <vector>
#include "ability.h"

// Пространство имен для избежания конфликтов имен
namespace game {

/**
 * @brief Класс Mob представляет моба в игре.
 */
class Mob {
private:
    /** @brief Имя моба */
    std::string mobName_;
    /** @brief Опыт моба */
    int experiencePoints_;
    /** @brief Уровень моба */
    int level_;

    /**
     * @brief Структура Stats хранит статистические параметры моба.
     */
    struct Stats {
        /** @brief Сила моба */
        int strength_;
        /** @brief Магия моба */
        int magic_;
        /** @brief Выносливость моба */
        int endurance_;
        /** @brief Ловкость моба */
        int agility_;
        /** @brief Удача моба */
        int luck_;
    } stats_;

    /** @brief Список способностей моба */
    std::vector<Ability> abilities_;

public:
    /**
     * @brief Конструктор по умолчанию для класса Mob.
     */
    Mob();

    /**
     * @brief Конструктор с параметрами для класса Mob.
     * @param name Имя моба.
     * @param exp Опыт моба.
     * @param lv Уровень моба.
     * @param st Сила моба.
     * @param ma Магия моба.
     * @param en Выносливость моба.
     * @param ag Ловкость моба.
     * @param lu Удача моба.
     */
    Mob(const std::string& name, int exp, int lv, int st, int ma, int en, int ag, int lu);

    /**
     * @brief Деструктор класса Mob.
     */
    ~Mob();

    /**
     * @brief Возвращает имя моба.
     * @return Имя моба.
     */
    std::string getMobName() const;

    /**
     * @brief Возвращает опыт моба.
     * @return Опыт моба.
     */
    int getExperiencePoints() const;

    /**
     * @brief Возвращает уровень моба.
     * @return Уровень моба.
     */
    int getLevel() const;

    /**
     * @brief Возвращает силу моба.
     * @return Сила моба.
     */
    int getStrength() const;

    /**
     * @brief Возвращает магию моба.
     * @return Магия моба.
     */
    int getMagic() const;

    /**
     * @brief Возвращает выносливость моба.
     * @return Выносливость моба.
     */
    int getEndurance() const;

    /**
     * @brief Возвращает ловкость моба.
     * @return Ловкость моба.
     */
    int getAgility() const;

    /**
     * @brief Возвращает удачу моба.
     * @return Удача моба.
     */
    int getLuck() const;

    /**
     * @brief Возвращает список способностей моба.
     * @return Список способностей моба.
     */
    const std::vector<Ability>& getAbilities() const;

    /**
     * @brief Добавляет способность к мобу.
     * @param ability Способность для добавления.
     */
    void addAbility(const Ability& ability);

    /**
     * @brief Устанавливает имя моба.
     * @param name Новое имя моба.
     */
    void setMobName(const std::string& name);

    /**
     * @brief Устанавливает статистические параметры моба.
     * @param strength Сила моба.
     * @param magic Магия моба.
     * @param endurance Выносливость моба.
     * @param agility Ловкость моба.
     * @param luck Удача моба.
     */
    void setStats(int strength, int magic, int endurance, int agility, int luck);

    /**
     * @brief Устанавливает опыт моба.
     * @param exp Новый опыт моба.
     */
    void setExperiencePoints(int exp);

    /**
     * @brief Устанавливает уровень моба.
     * @param level Новый уровень моба.
     */
    void setLevel(int level);

    /**
     * @brief Устанавливает силу моба.
     * @param strength Новая сила моба.
     */
    void setStrength(int strength);

    /**
     * @brief Устанавливает магию моба.
     * @param magic Новая магия моба.
     */
    void setMagic(int magic);

    /**
     * @brief Устанавливает выносливость моба.
     * @param endurance Новая выносливость моба.
     */
    void setEndurance(int endurance);

    /**
     * @brief Устанавливает ловкость моба.
     * @param agility Новая ловкость моба.
     */
    void setAgility(int agility);

    /**
     * @brief Устанавливает удачу моба.
     * @param luck Новая удача моба.
     */
    void setLuck(int luck);
};

} // namespace game

#endif // MOBS_H