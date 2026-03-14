#pragma once

#include <string>

class Item
{
public:
	Item(std::string name);

	std::string getName();

private:
	std::string name;
};

