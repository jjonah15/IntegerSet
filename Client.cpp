/*
April Shin
Jonah Moon
CS 137
Homework 2
*/

#include "IntegerSet.h"
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	IntegerSet test(5);
	test.insertElement(3);

	test.insertElement(1);
	test.insertElement(4);
	test.printSet();

	system("PAUSE");
	return 0;
}