#include "toolbox.h"
#include <string>
#include <iostream>

void toolbox::echo(std::string text = "ERROR")
{
	std::cout << text << "\n";
}

std::string toolbox::ask(std::string question, std::string defaultAns)
{
	std::string answer;

	if (question != "") {
		echo(question);
	}

	std::getline(std::cin, answer);
	
	if (answer == "") {
		answer = defaultAns;
	}

	return answer;
}

int toolbox::askInt(std::string question, int defaultAns)
{
	int answer;

	if (question != "") {
		echo(question);
	}

	std::cin >> answer;

	if (answer == NULL) {
		answer = defaultAns;
	}

	return answer;
}