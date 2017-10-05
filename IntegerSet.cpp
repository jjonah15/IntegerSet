/*
Jonah Moon
Partnered with April Shin
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
		*(intSet + i) = 0;
	}
}
IntegerSet::IntegerSet(int* arr, int size)
{
	intSet = new int[size];
	setSize = size;
	for (int i = 0; i < setSize; i++)
	{
		*(intSet + i) = *(arr + i);
	}
}
IntegerSet* IntegerSet::unionOfSets(const IntegerSet* compareSet)
{
	//first compare the sets and start creating new set with both values
	IntegerSet* unionSet = new IntegerSet(compareSet->setSize);

	for (int i = 0; i < setSize; i++)
	{
		if (intSet[i] == 1 || compareSet->intSet[i] == 1)
		{
			unionSet->intSet[i] = 1;
			cout << "test" << endl;
		}
		else
		{
			unionSet->intSet[i] = 0;
		}
	}
	return unionSet;
}
IntegerSet* IntegerSet::intersectionOfSets(const IntegerSet* set1,const IntegerSet* set2)
{
	IntegerSet* interSet = new IntegerSet(set1->setSize);

	for (int i = 0; i < setSize; i++)
	{
		if (set1->intSet[i] == 1 && set2->intSet[i] == 1)
		{
			interSet->intSet[i] = 1;
		}
		else
		{
			interSet->intSet[i] = 0;
		}
	}
	return interSet;
}
bool IntegerSet::insertElement(int k)
{
	bool status;
	if (*(intSet + k) == 0)
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
bool IntegerSet::deleteElement(int k)
{
	bool status;
	if (k > setSize)
	{
		status = false;
	}
	else if (k <= setSize)
	{
		if (*(intSet + k) == 1)
		{
			*(intSet + k) = 0;
			status = true;
		}
		else if (*(intSet + k) == 0)
		{
			status = false;
		}
	}
	return status;
}
void IntegerSet::printSet() const
{
	for (int i = 0; i < setSize; i++)
	{
		if (*(intSet + i) == 1)
		{
			cout << i << " ";
		}
	}
	cout << endl;
}
bool IntegerSet::isEqual(IntegerSet* compareSet) const
//argument is pointer so that you can use the structure pointer operator, ->, to call
//the member variable of the argument
{
	bool status;
	for (int i = 0; i < setSize; i++)
	{
		if (*(intSet + i) == compareSet->intSet[i])
		{
			status = true;
		}
		else
		{
			status = false;
		}
	}
	return status;
}
IntegerSet::~IntegerSet()
{
	delete[] intSet;
}