/*
 ==============================================================================================================================
 Name        : qs1.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a function that builds the multiplication table of arbitrary dimensions
               Means Simple implementation for pointer to pointer ie Implementing a multi dimentional 
               array using a pointer to the individual rows i.e they store address of each row
               so that each row is an array that store values.
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

int main()
{
	clock_t begin = clock();

int** pointer_to_rows;

pointer_to_rows = new int*[3];

for (int i=0; i<3; i++)
{
	pointer_to_rows[i] = new int[2]; // 3 rows and 2 columns
}
for(int i=0; i<3;i++)
{
	for (int j=0; j<2; j++)
	{
		pointer_to_rows[i][j] = i*j;
	}
}

for(int i=0; i<3;i++)
{
	for (int j=0; j<2; j++)
	{
		cout<<pointer_to_rows[i][j]<< "  ";
	}
	cout<<endl;
}

cout<<endl;
cout<<pointer_to_rows[1][1];
cout<<endl;
for (int i=0; i<3;i++)
{
	delete pointer_to_rows[i];
}
delete[] pointer_to_rows;

	clock_t end = clock();
	double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	cout<<endl;
	cout<<elapsed_secs<<" sec"<<endl;
	system ("pause");
	return 0;
}
