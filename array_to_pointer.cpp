/*
 ==============================================================================================================================
 Name        : array_to_pointer.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Assigning array to pointer, printing 1-10, getting the size and address of the first index in an array
 ==============================================================================================================================
 */
 
#include <iostream>
using namespace std;

int main()

{

int A[10];
cout<<"Array size"<<sizeof(A)<<endl;
int *p = A;

for (int i=0; i<10; i++)
{
	p[i] = i+1;
	cout <<p[i]<< "  " ;
}
cout << "Size now: "<<sizeof(p)<<endl;
cout<< *p<< " address->" <<p<<endl;


	system ("pause");
	return 0;
}
