/*
Jonah Moon
Partnered with April Shin
CS 137
Homework 2
*/

#include "IntegerSet.h"
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int arr[10] = {1,1,1,1,1,1,1,1,1,1 };
	IntegerSet testArr(arr, 10);
	testArr.printSet();

	IntegerSet test1(10);
	test1.insertElement(1);
	test1.insertElement(5);
	test1.insertElement(7);
	test1.printSet();
	
	IntegerSet test2(10);
	test2.insertElement(0);
	test2.insertElement(5);
	test2.printSet();

	IntegerSet unionSet(10);
	unionSet = *(test2.unionOfSets(&test1));
	unionSet.printSet();
	
	IntegerSet interSet(10);
	interSet = *(interSet.intersectionOfSets(&test1, &test2));
	interSet.printSet();

	testArr.deleteElement(5);
	testArr.printSet();

	int arr2[10] = { 1,1,1,1,1,1,1,1,1,1 };
	IntegerSet testArr2(arr2, 10);
	if (testArr.isEqual(&testArr2) == true)
	{
		cout << "These two sets are equal." << endl;
	}

	system("PAUSE");
	return 0;
}