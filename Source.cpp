#include <iostream>

using namespace std;

int StringLength(char* C)
{
	for (int i = 0; ; ++i)
	{
		if (C[i] == '\0')
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	//char C[12] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
	//char C[12] = { '¹«', '±Ã', 'È­', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
	char C[12] = "Hello";
	cout << StringLength(C) << endl;

	return 0;
	//'A', '\0' != "A"
	int A[10] = { 0, 1, 2,3,4,5,6,7,8, 9 };
	int* PA = A;

	cout << PA[3] << endl; //*(PA+3)
	cout << A[9] << endl;
	//for (int i = 0; i < 11; ++i)
	//{
	//	cout << C[i];
	//}


	return 0;
}