// Chapter_2_Programming_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	double growthRate = 1.5;
	int initValue = 0;
	cout << "Please provide the initial level of the ocean in milllimeters: ";
	cin >> initValue;
	cout << endl;
	double fiveValue = (growthRate * 5) + initValue;
	double sevenValue = (growthRate * 7) + initValue;
	double tenValue = (growthRate * 10) + initValue;

	cout << "The level of the ocean will be " << fiveValue << " millimeters after 5 years." << endl;
	cout << "The level of the ocean will be " << sevenValue << " millimeters after 7 years." << endl;
	cout << "The level of the ocean will be " << tenValue << " millimeters after 10 years." << endl;

	return 0;
}
