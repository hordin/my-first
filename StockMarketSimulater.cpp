// StockMarketSimulater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#define lol int

using namespace std;

/*class player //never add '()' just dont , it wont work.....trust me.....
{
public: //the public thingy makes the code publico.....
	int playerX = 1;
	int playerY = 1;
	int steps = 5;
	int health = 100;
	int place = playerX * playerY;


}; //dont forget to add ';' after a '}' in a class..... */

lol main()
{
	lol p;
	lol t;
	lol r;
	float amount;
	lol interest;
	lol earnings;
	lol expences;
	lol m;
	lol choice;

	cout << "hello, welcome to money management calculator....what do you want to do?" << endl;
	cout << "1) simple interest calculator" << endl;
	cout << "2) compound interest calculator" << endl;
	cout << "1) monthly expences calculator" << endl;

	cin >> choice;

	if (choice == 1) // simple interest (SI)
	{
		cout << "pls specify your principal interest" << endl;
		cin >> p;

		cout << "pls specify your time" << endl;
		cin >> t;

		cout << "pls specify your rate" << endl;
		cin >> r;

		interest = p * t * r / 100;

		amount = interest + p;

		cout << "your amount is" << amount << endl;

		cout << "your interest is...." << interest << endl;
	}

	if (choice == 2)
	{
		cout << "pls specify your principal interest" << endl;
		cin >> p;

		cout << "pls specify your time" << endl;
		cin >> t;

		cout << "pls specify your rate" << endl;
		cin >> r;

		amount = p * (1 + r / 100) ^ t;

		cout << "your amount is" << amount << endl;

		interest = amount - p;

		cout << "your interest is...." << interest << endl;
	}

	if (choice == 3)
	{
		cout << "pls enter your montly salary....." << endl;
		cin >> earnings;

		cout << "pls enter your monthly expences......." << endl;
		cin >> expences;

		m = earnings - expences;

		cout << "your total is....... " << m << endl;
	}




    /* this is commented out for future use
	//zork
	lol choice;
	char game_choice;
	float mapX = 100;
	float mapY = 100;
	player player;
	player.playerX;
	player.playerY;
	player.steps;
	player.health = 100;
	player.place = playerX * playerY;

	cout << "hello, what do you want do ?" << endl;
	cout << "1) start game" << endl;
	cout << "2) about game" << endl;
	cout << "3) end game" << endl;

	cin >> choice;

	if (choice == 2)
	{
		cout << "this game was devoloped by vivek....." << endl;
	}

	if (choice == 1)
	{
		cout << "hello, welcome to zork! have a nice time" << endl;
		cout << "lets give you a tutorial: to move, type MOVE." << endl;
		cout << "to fight, type FIGHT(ATTACK TYPE)." << endl;
		cout << "ok lets start....you position is" << playerX <<" , "<< playerY << endl;
		cin >> game_choice;

		if (game_choice == 'MOVE')
		{
			cout << "ok, type the coordinates you want to move to.....the map 100 * 100" << endl;
			cin >> playerY;
			cout << "ok, now choose your y coordinate......" << endl;
			cin >> playerY;
		}
	}*/

	return 0;
}


