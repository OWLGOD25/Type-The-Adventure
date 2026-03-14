#include "Room.h"

Room::Room()
{
}

Room::Room(std::string description)
{
	this->description = description;
}

std::string Room::getDescription()
{
	return description;
}