#include "Calculadora.h"

Calculadora::Calculadora()
{
	this->input = Input();
	this->output = Output();
}
Calculadora::Calculadora(Input input, Output output)
{
	this->input = input;
	this->output = output;
}

Calculadora::~Calculadora()
{

}

double Calculadora::add(const double lhs, const double rhs)
{
	auto r = std::vector<double>({lhs,rhs});
	this->input.setPairValues(r);
	return lhs + rhs;
}

double Calculadora::subtract(Input input)
{
	//return input.getVector1() - input.getVector2();
	return 0;
}

double Calculadora::multiply(Input input)
{
	//return input.getVector1() * input.getVector2();
	return 0;
}

double Calculadora::divide(Input input)
{
	// return input.getVector1() / input.getVector2();
	return 0;
}
