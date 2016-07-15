/*
 ==============================================================================================================================
 Name        : print_multidimentionalArray.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Print a multidimentional array!!
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

void print_array(int A[][3], int row)
{
	for (int i =0; i<row; i++)
	{
		for(int j=0; j< 3; j++)
		{
			//cout << &A[i][j]<< "  ";
			cout << A[i][j]<< "  ";
		}
		cout<<endl;
	}
}

int main()
{
	int mult_array[2][3]= {{1,2,3},{4,5,6}}; // ***
											                               // ***
	print_array(mult_array, 2);

	system ("pause");
	return 0;
}
