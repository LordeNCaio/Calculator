#pragma once
#include <vector>
class Input
{

public:
	Input();
	~Input();
	std::vector<double>& getPairValues();
	void setPairValues(const std::vector<double>& Value);

private:
	std::vector<double> PairValues;
};

