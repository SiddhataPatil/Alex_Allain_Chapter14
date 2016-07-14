/*
 ==============================================================================================================================
 Name        : new_delete.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Implement an array of unknown size using new and delete
 ==============================================================================================================================
 */
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
	srand(time(NULL));
	int count; 
	cout<<"Enter the count"<<endl;
	cin>> count;
	cout<<endl;
	int *p2 = new int[count];
	for(int i=0; i<count; i++)
	{
		p2[i]= rand()%9+1;
	}
	for(int i=0; i<count; i++)
	{
		cout<<p2[i]<<endl;
	}
	delete[] p2;


	system ("pause");
	return 0;
}
