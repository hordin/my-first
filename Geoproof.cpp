// Name:Geoproof.cpp
// Purpose: to prove my answer in q4 in Ex 11.1 in class 8 math book is not wrong
// IDE: VS 2017 (15.3)
// Status: Successful

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int tile_a;
	int floor_a;
	int choice;
	int times = 0;
	cout << "what do you want? 1)meters 2)centimeters (you have to enter the tile area in cm anyway)" << endl;
	cin >> choice;
	cout << "enter the area of the tile(in cm)..." << endl;
	cin >> tile_a;
	cout << "enter the area of the floor..." << endl;
	cin >> floor_a;

	if (choice == 1)
	{
		floor_a = floor_a * 100;
        
		times = floor_a / tile_a;
		
		cout << "the no. of tiles required to cover "<< floor_a << " cm is" << times << endl;
	}

	if (choice == 2)
	{
		times = floor_a / tile_a;
		
        cout << "the no. of tiles required to cover " << floor_a << " cm is" << times << endl;
	}

    return 0;
}

