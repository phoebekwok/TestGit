// InsertionSort.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n, i, j, temp, a[30];
	cout<<"Enter the number of elements:";
    cin>>n;
	cout<<"\nEnter the elements:\n";
	for (i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for (i=1; i<n; i++)
	{
		temp = a[i];
		j = i -1;
		while ((temp<a[j])&&(j>=0))
		{
			a[j+1] = a[j];
			j = j-1; 
		}
		a[j+1] = temp;
	}
	cout<<"\nSorted array is as follows:\n";
	for (i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	_getch();
	return 0;
}