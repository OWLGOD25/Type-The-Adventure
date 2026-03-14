#include <iostream>

#include "Player.h"

using namespace std;

void Player::AddItem(Item item)
{
	inventory.push_back(item);
}

void Player::ShowInventory()
{
	cout << "\nInventory:"

		if (inventory.empty())
		{
			cout << "Inventory is empty.\n";
			return;
		}
	for (Item item : inventory)
	{
		cout << "- " << item.GetName() << "\n";
	}
}