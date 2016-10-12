

//Author    : Aadesh Salecha
//Course    : Nand2Tetris
//Date      : March 2016


#include <iostream>

using namespace std;

int pow(int base,int exponent);
double sin(double opposite,double hypotenuse);

int main(){
	int base;
	int exponent;

	cout << "Please enter value for base :";
	cin >> base; cout << endl;
	cout << "Please enter value for exponent :";
	cin >> exponent ; cout << endl;

	int i = pow(base, exponent);
	cout << i << endl;
	cin >> base;

	return 0;
}

int pow(int base, int exponent)
{
	if(exponent == 0)
	{
	return 1;
	}
	if (exponent < 0)
	{
	exponent = -(exponent);
	}
	int result = base * base;
	for (int i = 2; i < exponent; i++)
	{
	result *= base;
	}

	return result;
}

double sin(double opposite,double hypotenuse)
{
	return opposite / hypotenuse;
}