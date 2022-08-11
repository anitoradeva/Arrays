#include <iostream>

using namespace std;

int main()
{
	int* ptr = new int;
	*ptr = 42;
	cout << "Address: " << ptr << endl;
	cout << "Value: " << (*ptr) << endl;

	if (ptr)
	{
		delete ptr;
		ptr = NULL;
	}	

	return 0;
}//main
