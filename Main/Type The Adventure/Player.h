#pragma once

#include <vector>
#include "Item.h"

class Player
{
public:
	void AddItem(Item item);
	void ShowInventory();

private:
	std::vector<Item> inventory;
};

