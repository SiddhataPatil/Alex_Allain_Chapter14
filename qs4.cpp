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
using namespace std;

void print1 (int* t, string* s,int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<s[i]<<"---->"<<t[i]<<endl;
	}

}

void swap2(string &n1, string &n2)
{
	string temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
void swap1(int &n1, int &n2)
{
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
}


void bubble_sort(string* s,int* p, int size)
{
	for(int j=0; j<size; j++)
	{
		for(int i=0; i<size-1; i++)
		{
			if (p[i]<p[i+1])
				swap1(p[i],p[i+1]);
				swap2(s[i],s[i+1]);
		}
	}
	
	print1(p,s,size);
}

void max_caller(string* p, int* x, int size)
{int max=0;
for ( int k=0; k<size; k++)
	{
		if (x[k] > x[max])
			max=k;
	}
cout<< "Most called friend is "<<p[max]<< endl;
cout<<p[max]<<" called "<< x[max]<<" times"<< endl;

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
		cout<<"Enter name: "<<i+1<<" ] "<<endl;
		cin>>blah.name;
		p[i]= blah.name;
		cout<<"Enter the no of times"<<p[i]<<" called: "<<endl;
		cin>>blah.no;
		if(blah.no > 0)
		x[i] = blah.no;
		else 
		{
			cout<<"Please enter a positive number: "<<endl;
			cin>>blah.no;
			if(blah.no > 0)
			x[i] = blah.no;
			else break;
		}
	}
		while(loop_condition<10)
	{
		next_element=i;
	max_caller(p,x, size);
	bubble_sort(p,x,size);
	cout<<"How many more friends you want to add"<<endl;
	cin>> count;
	size= size+count;
for ( i=next_element; i<size; i++)
	{
		cout<<"Enter name: "<<i+1<<" ] "<<endl;
		cin>>blah.name;
		p[i]= blah.name;
		cout<<"Enter the no of times "<<p[i]<<" called: "<<endl;
		cin>>blah.no;
		if(blah.no > 0)
		x[i] = blah.no;
		else 
		{
			cout<<"Please enter a positive number: "<<endl;
			cin>>blah.no;
			if(blah.no > 0)
			x[i] = blah.no;
			else break;
		}
	} continue;
	loop_condition++;
	}
	delete[] x;
	delete x;
	
	system ("pause");
	return 0;
}
