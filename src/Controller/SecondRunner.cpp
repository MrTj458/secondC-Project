/*
 * Runner.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: thod0127
 */
#include "SecondController.h";

int main()
{
	SecondController * baseController = new SecondController();
	baseController->start();
	//Do the same thing a different way
	//(*baseController).start();
	return 0;
}
