// Carnival.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "toolbox.h"
#include <random>
#include <time.h>

void numberGuessingGame() {
	srand(time(NULL));
	toolbox Tools;

	int outOf = Tools.askInt("What should the max be?", 100);

	int randomNumber = rand() % outOf;
	bool correct = false;
	int tries = 0;
	
	while (!correct)
	{
		int ans = Tools.askInt("What do you think the number is?", 0);
		if (ans > randomNumber) {
			Tools.echo("Too Big!");
			Tools.echo("You have " + std::to_string(9 - tries) + " tries left!");
			tries++;
		}
		if (ans < randomNumber) {
			Tools.echo("Too Small!");
			Tools.echo("You have " + std::to_string(9 - tries) + " tries left!");
			tries++;
		}
		if (ans == randomNumber) {
			Tools.echo("You got the correct number; " + std::to_string(randomNumber) + "!");
			correct = true;
		}
		if (tries >= 10) {
			Tools.echo("Too Many Tries!");
			correct = true;
		}
	}
}
void clicker() {
	toolbox Tools;
	int kromer = 0;
	bool escapist = false;

	Tools.echo("Press 1 for more clicks, and press 0 to escape!");
	
	while (!escapist) {
		int button = Tools.askInt("Points: " + std::to_string(kromer), 1);
		kromer++;
		if (button == 0) {
			escapist = true;
			return;
		}
	}

}
void escapeTheRoom() {

}
void chooseYourOwnAdventure() {

}
void rpg() {

}

int main()
{
	toolbox Tools;

	Tools.echo("Welcome to the carnival!");
	Tools.echo("Which game would you like to play?");
	Tools.echo("1. Number Guessing\n2. Clicker \n3. Escape the Room\n4. Choose Your Own Adventure\n5. RPG\n0. Quit");
	switch (Tools.askInt("", 0)) {
	case 1:
		numberGuessingGame();
		break;
	case 2:
		clicker();
		break;
	case 3:
		escapeTheRoom();
		break;
	case 4:
		chooseYourOwnAdventure();
		break;
	case 5:
		rpg();
		break;
	case 0:
		return 0;
		break;
	}
	
}

