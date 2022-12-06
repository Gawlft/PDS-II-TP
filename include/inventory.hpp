/**
 * @file inventory.hpp
 * @author Victória Tejada (victoriatsiqueiram@gmail.com)
 * @brief Classe principal com a lógica do inventário
 * @version 1.0
 * @date 2022-12-03
 * @details Responsável por armazenar e processar o inventário do jogador.
 * @copyright Copyright (c) 2022
 *
 */

#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
#include <list>
#include "weapon.hpp"
#include "utilities.hpp"
#include "item.hpp"
#include <map>
#include "playableCharacter.hpp"
#include <tabulate/table.hpp>
using namespace tabulate;

class Inventory : public Item
{
public:
    // Inventory(std::map<Item, int> _inventory);
    Inventory();
    ~Inventory();

    std::map<Item, int> createInventory();

    void useItem(Item item);

    void subtractItem(Item item);

    void displayInventory(PlayableCharacter *player);

    bool operator<(const Item &rhs) const;

    void addItem(Item item);

    int checkValue(Item item);

    std::string getItemN(Item item);

public:
    std::map<Item, int> _inventory;
};

#endif
