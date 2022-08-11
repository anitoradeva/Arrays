#include <iostream>

using namespace std;

void arrMinMax(
	double arr[], 
	int n, 
	double* min, //points to the memory but prints the value
	double* max   //points to the memory but prints value
	)
{
	*min = *max = *arr;  //supose that the memory of those three is in one location => equal values
	for (int i = 0; i < n; i++)
	{
		if (*(arr + i) < *min)
		{
			*min = *(arr + i);
		} //checks members for the smallest one and prints it when found
		if (*(arr + i) > *max)
		{
			*max = *(arr + i);
		} //checks members for the largest one and prints it when found
	}	
}//arrMinMax

int main()
{
	double arr[] = {1.1, -1.5, -1.2, 3.4, 6.9, -9.3}; //array with 6 floating point numbers
	double n = sizeof(arr) / sizeof(arr[0]);

	double min = 0, max = 0; //assign initial value for max and min
	arrMinMax(arr, sizeof(arr) / sizeof(arr[0]), &min, &max);
	//array(used array, calculation for N alements, pointers to the adress of min and max)
	
	cout << min << " " << max << endl;
        cout << n << endl;

	return 0;
}//main
