#pragma once
class Input
{
public:
	Input();
	~Input();

	double getVector1();
	double setVector1(double vector1);

	double getVector2();
	double setVector2(double vecto2);

private:
	double vector1;
	double vector2;
};

