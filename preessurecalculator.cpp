// Name:pressurecalculator.cpp
// Pupose: to calculate the pressure on the face
// Date: 28/1/19 (28th Jan 2019)
// IDE: VS2017(15.3+)(community)

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int face = 0;
	int kg = 0;
	int newton = 0;
	int pascala = 0;
	float properface = 0;

	cout << "enter the area of the face (in cm)" << endl;
	cin >> face;
    
	properface = face / 100;

	cout << "enter the weight of the object (in kg)" << endl;
	cin >> kg;

	newton = kg * 10;

	pascala = newton / properface;

	cout << "the pressure is " << pascala << " pascals" << endl;

    return 0;
}

