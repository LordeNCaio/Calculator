#include "Calculadora.h"


Calculadora::Calculadora(Input input, Output output)
{
	this->input = input;
	this->output = output;
}

Calculadora::~Calculadora()
{
}

double Calculadora::add(Input input)
{
	return input.getVector1() + input.getVector2();
}

double Calculadora::subtract(Input input)
{
	return input.getVector1() - input.getVector2();
}

double Calculadora::multiply(Input input)
{
	return input.getVector1() * input.getVector2();
}

double Calculadora::divide(Input input)
{
	return input.getVector1() / input.getVector2();
}
