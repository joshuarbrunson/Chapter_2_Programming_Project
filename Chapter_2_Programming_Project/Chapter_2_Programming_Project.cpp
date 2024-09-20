// Chapter_2_Programming_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int surveyValue = 16500;
	int energyDrinks = surveyValue * 0.15;
	int citrusDrinks = surveyValue * 0.58;

	cout << "The approximate number of customers purchasing one or more energy drinks a week is " << energyDrinks << '.' << endl;
	cout << "The approximate number of customers purchasign citrus-flavored energy drinks is " << citrusDrinks << '.' << endl;

	return 0;
}
