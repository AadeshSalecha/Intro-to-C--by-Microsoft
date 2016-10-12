

//Author    : Aadesh Salecha
//Course    : Nand2Tetris
//Date      : March 2016


#include <iostream>

using namespace std;

int avg(int array1[],int size);

int main()
{
	int array_int[5] = {10,20,30,40,50};
	int avgerage = avg(array_int,5);

	cout << "Average is " << avgerage << endl;
	cin >> avgerage;
	return 0;
}

int avg(int array1[],int size)
{
	int result = 0;

	for (int i = 0 ; i < size ; i++)
	{
		result += array1[i];
	}
	return result / size;
}