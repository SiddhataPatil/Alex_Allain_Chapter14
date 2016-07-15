/*
 ==============================================================================================================================
 Name        : distance_pointers.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Distance between two pointers (in terms of type bytes)
 ==============================================================================================================================
 */
 
 // for eg: suppose p1=00675888 and p2=006758C8
 // There hexadecimal subtraction gives us value 64
 // But we will be getting the answer as 64/4 (let us assume both pointers of type int and hence divide by 4)
 // which also tells that we cannot subtract pointers of different types.
 
#include <iostream>
using namespace std;

int main()
{
	
	int *p1 = new int;
	int *p2 = new int;
	cout<< "P1: "<<p1<<" and "<<"P2: "<<p2<<endl;
	cout<< *p1 <<"      " << *p2<<endl;
	cout<< "Distance between these two pointers"<< p2-p1<<endl;
	delete p1;
	p1 = NULL;
	delete p2;
	p2= NULL;
	cout<< "P1: "<<p1<<" and "<<"P2: "<<p2<<endl;

	system ("pause");
	return 0;
}
