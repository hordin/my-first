// beginner.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main() // this is where the comp starts doing it
{
	int a;
	int b;
	int c;
	int sum;
	int choice;
	int loop;
	
	cout << "wat do u need today? :1) manage the skool 2) do some simple calculations....." << endl;
	cin >> choice;
	if (choice == 2) {
		cout << "chose what you want to do : 1) addition 2)subtractionb 3)multiplication 4)division 5)other" << endl;
		cin >> choice;

		if (choice == 1)
		{
			cout << "enter 1st number" << endl; //the statement

			cin >> a; // cin takes the input from user

			cout << "enter 2nd number" << endl;

			cin >> b;

			sum = a + b;

			cout << "the sum is....." << sum << endl;
		}

		if (choice == 2)
		{
			cout << "enter 1st number" << endl; //the statement

			cin >> a; // cin takes the input from user

			cout << "enter 2nd number" << endl;

			cin >> b;

			sum = a - b;

			cout << "the ans is....." << sum << endl;
		}

		if (choice == 3)
		{
			cout << "enter 1st number" << endl; //the statement

			cin >> a; // cin takes the input from user

			cout << "enter 2nd number" << endl;

			cin >> b;

			sum = a * b;

			cout << "the product is....." << sum << endl;
		}

		if (choice == 4)
		{
			cout << "enter 1st number" << endl; //the statement

			cin >> a; // cin takes the input from user

			cout << "enter 2nd number" << endl;

			cin >> b;

			sum = a / b;

			cout << "the quetient is....." << sum << endl;
		}

		if (choice == 5)
		{
			cout << "1) area of rect 2) area of tri 3)volume of cube 4)volume of pyramid" << endl;

			cin >> choice;

			if (choice == 1)
			{
				cout << "enter lenght of rect" << endl; //the statement

				cin >> a; // cin takes the input from user

				cout << "enter breath of rect" << endl;

				cin >> b;

				sum = a * b;

				cout << "the area is....." << sum << endl;
			}


			if (choice == 2)
			{
				cout << "enter height of tri" << endl; //the statement

				cin >> a; // cin takes the input from user

				cout << "enter base of tri" << endl;

				cin >> b;

				sum = a * b / 2;

				cout << "the area of tri is....." << sum << endl;
			}


			if (choice == 3)
			{
				cout << "enter edge of cube" << endl; //the statement

				cin >> a; // cin takes the input from user

				sum = a * a * a; // formula of cube

				cout << "the volume is....." << sum << endl;
			}



			if (choice == 4)
			{


				cout << "enter base lenght" << endl; //the statement

				cin >> a; // cin takes the input from user

				cout << "enter base height" << endl;

				cin >> b;

				cout << "enter pyramaid height" << endl;

				cin >> c;

				sum = a * b * c / 3; // formula of pyramaid

				cout << "the volume is....." << sum << endl;

			}
      
	    }
		cout << "do you wish to continue? (y/n)" << endl;
		cin >> loop;
        
		while (loop == 1)
		{
			cout << "chose what you want to do : 1) addition 2)subtractionb 3)multiplication 4)division 5)other" << endl;
			cin >> choice;

			if (choice == 1)
			{
				cout << "enter 1st number" << endl; //the statement

				cin >> a; // cin takes the input from user

				cout << "enter 2nd number" << endl;

				cin >> b;

				sum = a + b;

				cout << "the sum is....." << sum << endl;
			}

			if (choice == 2)
			{
				cout << "enter 1st number" << endl; //the statement

				cin >> a; // cin takes the input from user

				cout << "enter 2nd number" << endl;

				cin >> b;

				sum = a - b;

				cout << "the ans is....." << sum << endl;
			}

			if (choice == 3)
			{
				cout << "enter 1st number" << endl; //the statement

				cin >> a; // cin takes the input from user

				cout << "enter 2nd number" << endl;

				cin >> b;

				sum = a * b;

				cout << "the product is....." << sum << endl;
			}

			if (choice == 4)
			{
				cout << "enter 1st number" << endl; //the statement

				cin >> a; // cin takes the input from user

				cout << "enter 2nd number" << endl;

				cin >> b;

				sum = a / b;

				cout << "the quetient is....." << sum << endl;
			}

			if (choice == 5)
			{
				cout << "1) area of rect 2) area of tri 3)volume of cube 4)volume of pyramid" << endl;

				cin >> choice;

				if (choice == 1)
				{
					cout << "enter lenght of rect" << endl; //the statement

					cin >> a; // cin takes the input from user

					cout << "enter breath of rect" << endl;

					cin >> b;

					sum = a * b;

					cout << "the area is....." << sum << endl;
				}


				if (choice == 2)
				{
					cout << "enter height of tri" << endl; //the statement

					cin >> a; // cin takes the input from user

					cout << "enter base of tri" << endl;

					cin >> b;

					sum = a * b / 2;

					cout << "the area of tri is....." << sum << endl;
				}


				if (choice == 3)
				{
					cout << "enter edge of cube" << endl; //the statement

					cin >> a; // cin takes the input from user

					sum = a * a * a; // formula of cube

					cout << "the volume is....." << sum << endl;
				}



				if (choice == 4)
				{


					cout << "enter base lenght" << endl; //the statement

					cin >> a; // cin takes the input from user

					cout << "enter base height" << endl;

					cin >> b;

					cout << "enter pyramaid height" << endl;

					cin >> c;

					sum = a * b * c / 3; // formula of pyramaid

					cout << "the volume is....." << sum << endl;

				}

			}

			loop == loop++;

		}
    }

	if (choice == 1)
	{
		cout << "hello, chairMAN........what do you want to do today? : 1) manage students 2) manage staff 3) manage finance" << endl;
		cin >> choice;

		if (choice == 1)
		{
			cout << "ok sire.....here are your students........" << endl;
			cout << "Name | age | gender | class | last known marks | fees" << endl;
			cout << "Henzi   12    Male      7         50/100         GUD" << endl;
			cout << "Lanzore 15    Male      10        40/100         GUD" << endl;
			cout << "Ludin   14    Male      9         54/100         DUE" << endl;
			cout << "Hidhin  12    Male      6         20/100         GUD" << endl;
		}

		if (choice == 2)
		{
			cout << "admin : laxhor" << endl;
			cout << "decription: a very laxhory boi..." << endl;
			cout << "HR : Mr Henti" << endl;
			cout << "decription: likes anime for some reason.........weirdo boi....." << endl;
		}

	}

    return 0; // verifier
}

