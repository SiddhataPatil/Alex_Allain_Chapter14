/*
 ==============================================================================================================================
 Name        : qs4.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    :Write a program that lets users keep track of the last time they talked to each of their friends.
              Users should be able to add new friends (as many as they want!) and store the number of days
              ago that they last talked to each friend. Let users update this value (but don't let them put in
              bogus numbers like negative values). Make it possible to display the list sorted by the names of
              the friends of by how recently it was since they talked to each friend.
 ==============================================================================================================================
 */
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void print_ascending(string* p, int* x,int size) // has to be corrected
{
	int j,k,s;
	string temp=" ";
	for(s=0; s<size/2; s++)
	{
	for ( j=0; j<size-1; j++)
	{
		if(x[j]<x[j+1])
		{
		temp = p[j];
		p[j]=p[j+1];
		p[j+1] = temp;
		}
	}
	}
	for ( k=0; k<size; k++)
	{
		cout<< p[k]<<endl;
	}
}
void Info(string* p, int* x, int size)
{int max=0;
for ( int k=0; k<size; k++)
	{
		if (x[k] > x[max])
			max=k;
	}
cout<< "Most called friend is "<<p[max]<< endl;

}
struct callers
{
	string name;
	int no;
};

int main()

{		
	int i,next_element;
	int size;
	int loop_condition=0;
	callers blah;
	
cout<< "Enter no of friends you want to keep in contact"<< endl;
cin>>size;
string* p= new string[size*4];
int* x = new int [size*4];
int count;
		for ( i=0; i<size; i++)
	{
		cout<<"Enter name and no of times called: "<<i+1<<" ] "<<endl;
		cin>>blah.name;
		p[i]= blah.name;
		cin>>blah.no;
		x[i] = blah.no;
	}
		while(loop_condition<10)
	{
		next_element=i;
	Info(p,x, size);
	print_ascending(p,x,size);
	cout<<"How many more friends you want to add"<<endl;
	cin>> count;
	size= size+count;
for ( i=next_element; i<size; i++)
	{
		cout<<"Enter name and no of times called: "<<i+1<<" ] "<<endl;
		cin>>blah.name;
		p[i]= blah.name;
		cin>>blah.no;
		x[i] = blah.no;
	} continue;
	loop_condition++;
	}
	delete[] x;
	delete x;
	
	system ("pause");
	return 0;
}
