#pragma once
#include "Input.h"
#include "Output.h"

class Calculadora
{
public:
	Calculadora(Input input, Output output);
	~Calculadora();

	double add(Input input);
	double subtract(Input input);
	double multiply(Input input);
	double divide(Input input);

private:
	Input input;
	Output output;


};
