#include <iostream>
#include <cassert>

using namespace std;

void read(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i << "] = ";
		cin >> arr[i];
	}
}//read

void print(const int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}//read

int realloc(int* &arr)
{
	if (arr)
	{
		delete[] arr;
		arr = NULL;
	}

	cout << "Number of elements: ";
	int n; 
	cin >> n;
	assert(n > 0);
	
	arr = new int[n];

	return n;
}//realloc

int main()
{
	int* arr = NULL;
	int n = realloc(arr);
	read(arr, n);
	print(arr, n);
	n = realloc(arr);
	read(arr, n);
	print(arr, n);

	if (arr)
	{
		delete[] arr;
		arr = NULL;
	}

	return 0;
}//main
