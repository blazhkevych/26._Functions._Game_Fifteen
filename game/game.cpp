#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Game_Fifteen.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	srand(time(NULL));
	const int size = 4;
	int arr[size][size]
	{
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11},
		{12, 13, 14, 15}
	};

	char answer{ -1 };
	do
	{
		int emptyCellRow{ 0 }, emptyCellCol{ 0 };
		cout << "Welcome to the game \"Fifteen\"!\n";

		ShakeArr(arr);
		PrintPlayingField(arr);

		char userMove{ 0 };
		do
		{
			userMove = _getch();

			if (userMove == 0 || userMove == 0xE0)
				userMove = _getch();

			if (userMove == VK_ESCAPE) // "Escape"
				break;
			else if (userMove == 72) // "UP"

			else if (userMove == 80) // "DOWN"

			else if (userMove == 75) // "LEFT"

			else if (userMove == 77) // "RIGHT"


		} while (true);

			cout << endl;
			cout << "Do you want to continue? type y (yes) or n (no) : ";
			cin >> answer;
			cout << endl;

	} while (answer == 'y');

	return 0;

}