// RothschildGlobalBankingCartalSimulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <amp_graphics.h>
#include <time.h>


using namespace std;
bool gameover;
const int H = 100;
const int W = 100;
int x, y, fruitY,fruitX, score;
enum eDirection {STOP = 0, LEFT,RIGHT,UP,DOWN};
eDirection dir;
void Setup()
{
	gameover = false;
	dir = STOP;
	x = W / 2;
	y = H / 2;
	fruitX = rand() % W;
	fruitY = rand() % H;
	score = 0;
}
void Draw()
{
	system("cls");
	for (i = 0; i < W;i++)
	{
		cout << "-";
		cout << endl;
	}	
	
	
}
void Input()
{

}
void Logic()
{

}
int main()
{
	int total_marks = 60;
	double marks_obtained;
	double percentage;
	int choice;
	int ladder = 6;
	int snake = 6;

	cout << "helo, wat do u want do? 1) play a snake and ladder game 2)do some gradeing" << endl;
	cin >> choice;

	if (choice == 1) // no no.....i will specify the actual master constraints tommorow
	{
		Setup();
		while (!gameover)
		{
			Draw();
			Input();
			Logic();
			//sleep(10);sleep(10);
		}
	}

	if (choice == 2)
	{
		cout << "enter da marks" << endl;
		cin >> marks_obtained;
		percentage = (marks_obtained / total_marks) * 100;


		if (percentage >= 90)
		{
			cout << "da goddam sucker got A.....nerdy bitch" << endl;
			cout << "the percentage is" << percentage << endl;
		}

		if (percentage >= 60 && percentage < 90)
		{
			cout << "da boi got good gradee.....B" << endl;
			cout << "the percentage is" << percentage << endl;
		}

		if (percentage >= 30 && percentage < 60)
		{
			cout << "da boi got avragen....C " << endl;
			cout << "the percentage is" << percentage << endl;
		}

		if (percentage >= 0 && percentage < 30)
		{
			cout << "da boi failed.....D" << endl;
			cout << "the percentage is" << percentage << endl;
		}

	}
    return 0; //claps :) to vivek and amma !!!!!!
}

