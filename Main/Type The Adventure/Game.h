#pragma once
#include "Player.h"
#include "World.h"
#include "CommandParser.h"

class Game
{
	public:
	Game();
	void run()

private:
	Player player;
	World world;
	CommandParser commandParser;

	bool isRunning;

	void processCommand(std::string& command);
};

