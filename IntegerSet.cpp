/*
April Shin
Jonah Moon
CS 137
Homework 2
*/
#include "IntegerSet.h"
#include <iostream>
using namespace std;

IntegerSet::IntegerSet(int size)
{
	intSet = new int[size];// +1 ??
	setSize = size;
	for (int i = 0; i < size; i++)
	{
		intSet[i] = 0;
	}
}
bool IntegerSet::insertElement(int k)
{
	bool status;
	if (intSet[k] == 0)
	{
		intSet[k] = 1;
		status = true;
	}
	else
	{
		status = false;
	}
	return status;
}
void IntegerSet::printSet() const
{
	for (int i = 0; i < setSize; i++)
	{
		if (intSet[i] == 1)
		{
			cout << i << " ";
		}
	}
	cout << endl;
}
bool IntegerSet::isEqual(IntegerSet compareSet)
{
	bool status;
	for (int i = 0; i < setSize; i++)
	{

	}
}
IntegerSet::~IntegerSet()
{
	delete[] intSet;
}