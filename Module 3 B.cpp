

//Author    : Aadesh Salecha
//Course    : Nand2Tetris
//Date      : March 2016


#include <iostream>

using namespace std;

int main()
{
	char response;

	cin >> response;

	switch (response)
	{
		case ('y'):
		cout << "You chose y or Y" << endl;
		break;

		case ('Y'):
		cout << "You chose y or Y" << endl;
		break;

		case ('N'):
		cout << "You chose n or N" << endl;
		break;

		case ('n'):
		cout << "You chose n or N" << endl;
		break;

		default :
		cout << "You didn't choose a valid option" << endl;
	}

	return 0;
	}