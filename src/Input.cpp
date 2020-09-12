#include "Input.h"

Input::Input() 
{
	#ifdef DEBUG
	std::cout << "Input default constructor initalized." << std::endl;
	#endif
}

Input::~Input() 
{

}

// Get value from class vector
std::vector<double>& Input::getPairValues()
{
	return this->PairValues;
}

void Input::setPairValues(const std::vector<double>& Value)
{
	this->PairValues = Value;
}