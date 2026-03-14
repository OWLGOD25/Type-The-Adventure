#include <iostream>
#include <Algorithm>

#include "CommandParser.h"

using namespace std;

string CommandParser::GetCommand()
{

	string command;

	cout << "\nCommand:";
	getline(cin, command);

transform(command.begin(), command.end(), command.begin(), ::tolower);
return command;
}