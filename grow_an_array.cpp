/*
 ==============================================================================================================================
 Name        : grow_an_array.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Grow an array at runtime!!
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int *grow(int *p2, int size)
{
	int *p3 = new int[size*2];
	for (int i=0; i<size; ++i)
	{
		p3[i]=p2[i];
	}
	delete[] p2;
	int **p4;
	p4=&p3;
	return *p4;
}

int main()
{
	int count; 
	cout<<"Please enter a size"<<endl;
	cin>> count;
	cout<<endl;
	int *p2 = new int[count]; // p2= 0x 12345678 // size 4 bytes ---> 00010010 00111000 01010110 01111000
	int no;
	int next_element=0;
	int i=0;
	while (i<7)
	{
		cout<<"Enter a no:"<<endl;
		cin >> no;
		if (count == next_element+1)
		{
			p2 = grow(p2,count);
		}
		p2[next_element] = no;
		next_element++;
		i++;
	}
	for (int j=0; j<i; j++)
cout<< p2[j]<<"  "<<endl;

	system ("pause");
	return 0;
}
