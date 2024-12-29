#ifndef ABILITY_H
#define ABILITY_H

#include <string>

namespace game {

/**
 * @brief Класс Ability представляет способность моба.
 */
class Ability {
private:
    /** @brief Имя способности */
    std::string name_;
    /** @brief Описание способности */
    std::string description_;
    /** @brief Уровень требования для использования способности */
    int requiredLevel_;
    /** @brief Тип способности (например, атакующая, защитная, буферная) */
    std::string type_;

public:
    /**
     * @brief Конструктор по умолчанию для класса Ability.
     */
    Ability();

    /**
     * @brief Конструктор с параметрами для класса Ability.
     * @param name Имя способности.
     * @param description Описание способности.
     * @param requiredLevel Уровень требования для использования способности.
     * @param type Тип способности.
     */
    Ability(const std::string& name, const std::string& description, int requiredLevel, const std::string& type);

    /**
     * @brief Возвращает имя способности.
     * @return Имя способности.
     */
    std::string getName() const;

    /**
     * @brief Возвращает описание способности.
     * @return Описание способности.
     */
    std::string getDescription() const;

    /**
     * @brief Возвращает уровень требования для использования способности.
     * @return Уровень требования для использования способности.
     */
    int getRequiredLevel() const;

    /**
     * @brief Возвращает тип способности.
     * @return Тип способности.
     */
    std::string getType() const;

    /**
     * @brief Устанавливает имя способности.
     * @param name Новое имя способности.
     */
    void setName(const std::string& name);

    /**
     * @brief Устанавливает описание способности.
     * @param description Новое описание способности.
     */
    void setDescription(const std::string& description);

    /**
     * @brief Устанавливает уровень требования для использования способности.
     * @param requiredLevel Новый уровень требования для использования способности.
     */
    void setRequiredLevel(int requiredLevel);

    /**
     * @brief Устанавливает тип способности.
     * @param type Новый тип способности.
     */
    void setType(const std::string& type);
};

} // namespace game

#endif // ABILITY_H