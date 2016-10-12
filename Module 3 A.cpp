

//Author    : Aadesh Salecha
//Course    : Nand2Tetris
//Date      : March 2016


#include <iostream>

using namespace std;

int main()
{
	int base = 2;
	int exponent = 4;

	int ans = 0;

	for (int i = 1 ; i <= exponent ; i++)
	{
		ans = ans + base * base;
	}

	cout << "The answer of " << base << " ^ " << exponent << " is " << ans << endl;

	return 0;
}