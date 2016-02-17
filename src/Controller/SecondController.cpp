/*
 * SecondController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: thod0127
 */

#include "SecondController.h";
#include <iostream>;
#include <string>;
using namespace std;

SecondController :: SecondController()
{
	this->classCount = 21;
	this->className = "Awesome";
}

void SecondController :: setClassCount(int classCount)
{
	this->classCount = classCount;
}

void SecondController :: setClassName(string className)
{
	this->className = className;
}

int SecondController :: getClassCount()
{
	return this->classCount;
}

string SecondController :: getClassName()
{
	return this->className;
}

void SecondController :: start()
{
	cout << "Welcome to my second C++ class this week" << endl;
	cout << "The current value of classCount is " << getClassCount() << endl;
	int newCount;
	cout << "Choose a new number for class" << endl;
	cin >> newCount;
	this->setClassCount(newCount);
	cout << "The current value of classCount is " << getClassCount() << endl;
	cout << "The class name is: " << getClassName() << endl;
	string newName;
	cout<< "Enter a new name for the class" << endl;
	cin >> newName;
	this->setClassName(newName);
	cout << "The new name for the class is: " << getClassName() << endl;
	cout << "Goodbye!" << endl;
}
