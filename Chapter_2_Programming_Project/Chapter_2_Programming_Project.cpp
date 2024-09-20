// Chapter_2_Programming_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int tankCapacity = 20;
	double mpgTown = 23.5;
	double mpgHighway = 28.9;

	double distanceTown = tankCapacity * mpgTown;
	double distanceHighway = tankCapacity * mpgHighway;

	cout << "A car with a tank capacity of 20 gallons will last " << distanceTown << " miles while driving in the town." << endl;
	cout << "A car with a tank capacity of 20 gallons will last " << distanceHighway << " miles while driving on the highway." << endl;
	return 0;
}
