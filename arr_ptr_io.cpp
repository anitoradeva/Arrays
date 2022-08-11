#include <iostream>

using namespace std;

void read(double arr[], int size)  //функция, масив с размер size
{
	for (int i = 0; i < size; i++)
	{
		cout << "[" << i << "] = ";   //prints array in order
		cin >> *(arr + i); // arr[i] memory but prints value
	}
}//read

void print(const double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}//print

int main()
{
	const int SIZE = 8;

	double arr[SIZE];
	read(arr, SIZE);
	print(arr, SIZE);

	return 0;
}//main
