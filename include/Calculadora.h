#pragma once
#include <iostream>
#include "Input.h"
#include "Output.h"

class Calculadora
{
public:
	Calculadora();
	Calculadora(Input input, Output output);
	
	~Calculadora();

	/**
	 * @brief Method to add 2 doubles and return his result
	 * 
	 * @param lhs left hande side of operation
	 * @param rhs right hand side of operation
	 * @return double Computed number.
	 */
	double add(const double lhs, const double rhs);

	double subtract(Input input);

	double multiply(Input input);

	double divide(Input input);

	template<typename T>
	inline void ShowValue(const T& value)
	{
		std::cout << value << std::endl;
	}

private:
	Input input;
	Output output;
};
