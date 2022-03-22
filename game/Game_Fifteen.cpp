#include <iostream>
using std::cout;
using std::endl;

//Функция замены ноля на пробел.
void ZeroToSpace(int arr[][4], int row, int col)
{
	if (arr[row][col] == 0)
	{
		cout << ' ';
	}
	else cout << arr[row][col];
}

// Функция печати игрового поля. Игра "Пятнашки".
void PrintPlayingField(int arr[][4], int size = 4)
{
	cout << "\n"
		<< char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(186) << "   "; ZeroToSpace(arr, 0, 0); cout << "\t " << char(186) << "   "; ZeroToSpace(arr, 0, 1); cout << "\t  " << char(186) << "   "; ZeroToSpace(arr, 0, 2); (arr[0][2]) > 9 ? cout << "   " : cout << "    "; cout << char(186) << "   "; ZeroToSpace(arr, 0, 3); (arr[0][3]) > 9 ? cout << "   " : cout << "    "; cout << char(186)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(186) << "   "; ZeroToSpace(arr, 1, 0); cout << "\t " << char(186) << "   "; ZeroToSpace(arr, 1, 1); cout << "\t  " << char(186) << "   "; ZeroToSpace(arr, 1, 2); (arr[1][2]) > 9 ? cout << "   " : cout << "    "; cout << char(186) << "   "; ZeroToSpace(arr, 1, 3); (arr[1][3]) > 9 ? cout << "   " : cout << "    "; cout << char(186)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(186) << "   "; ZeroToSpace(arr, 2, 0); cout << "\t " << char(186) << "   "; ZeroToSpace(arr, 2, 1); cout << "\t  " << char(186) << "   "; ZeroToSpace(arr, 2, 2); (arr[2][2]) > 9 ? cout << "   " : cout << "    "; cout << char(186) << "   "; ZeroToSpace(arr, 2, 3); (arr[2][3]) > 9 ? cout << "   " : cout << "    "; cout << char(186)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(186) << "   "; ZeroToSpace(arr, 3, 0); cout << "\t " << char(186) << "   "; ZeroToSpace(arr, 3, 1); cout << "\t  " << char(186) << "   "; ZeroToSpace(arr, 3, 2); (arr[3][2]) > 9 ? cout << "   " : cout << "    "; cout << char(186) << "   "; ZeroToSpace(arr, 3, 3); (arr[3][3]) > 9 ? cout << "   " : cout << "    "; cout << char(186)
		<< "\n" << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186) << "        " << char(186)
		<< "\n" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
}

// Функция перемешивает матрицу. Игра "Пятнашки".
void ShakeArr(int arr[][4], int size = 4)
{
	int min = 0;
	int max = 3;
	int row{ 0 }, col{ 0 };
	int n = 10;
	while (n > 0)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				row = rand() % (max - min + 1) + min;
				col = rand() % (max - min + 1) + min;
				int temp = arr[i][j];
				arr[i][j] = arr[row][col];
				arr[row][col] = temp;
			}
		}
		n--;
	}
}