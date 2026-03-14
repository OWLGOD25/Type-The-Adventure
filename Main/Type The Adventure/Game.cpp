#include <iostream>
#include "Game.h"

using namespace std;

void Game::run()
{

	isRunning = true;

}

void Game::run()
{
	string command;

	while (isRunning)
	{
		cout << World.getCurrentLocation().getDescription() << endl;

		commmand = parser.GetCommand();

		processCommand(command);
	}
}

void Game::processCommand(string command)
{
	if (command == "quit")
	{
		isRunning = false;
	}
	else if (command == "inventory")
	{
		player.showInventory();
	}
	else
	{
		World.movePlayer(command);
	}
}