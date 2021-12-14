#pragma once
#include <string>
class toolbox
{ public:
	void echo(std::string text);
	std::string ask(std::string question, std::string defaultAns);
	int askInt(std::string question, int defaultAns);
};

