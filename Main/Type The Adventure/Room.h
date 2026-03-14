#pragma once

#include <string>

class Room
{
public: 
	Room();
	Room(std::string description);

	std::string getDescription();

private:
	std::string description;
};

