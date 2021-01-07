#include<iostream>
#include<conio.h>
#include<iomanip>
#include<windows.h>
#include<cstdlib>
#include<color.h>
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x; coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

using namespace std;
int main()
{
again:
	int a = 15, x, b, p = 0, n, m;
	gotoxy(0, 0);
	Sleep(0.2);
	cout <<setw(36) << "YOU DID IT!!" << endl;                              /// "YOU DID IT!! Label"
	for (b = 1; b <= a; b++)
	{
		p++;
		for (int i = 0; i <= p; i++)
		{
			for (x = 2 * a - 1 - i; x >= b; x--)
			{
				cout << " ";
			}
			if (b + i<a)
			{
				for (int x = 1; x <= b + i; x++)
				{
					n = rand() % 50;
					m = rand() % 5;
					if (n % 5 == 0)								/// Colorful things
						cout << green << "* ";			
					else if (n % 5 == 1)
						cout << yellow << "$ ";
					else if (n % 5 == 2)
						cout << red << "# ";
					else
						cout << blue << "@ ";
				}
				cout << endl;
			}
			else
				goto end;
		}
	}
end:
	p = 0;
	for (int i = 0; i<6; i++)
	{
		for (int j = 12 + p; j >= 1; j--)
		{
			cout << " ";
		}
		p = a;
		for (int k = 0; k<3; k++)
		{
			cout << green << "* ";								/// Tree trunk
		}
		Sleep(2);
		cout << endl;
	}
	cout << setw(60) << "Happy New Year, World!" << endl;		/// "Happy New Year" Label
	goto again;
}
/// Original code by Ravi Patel (https://myprogworld.wordpress.com/) 2014
/// Edited by MSS (github.com/MSS00) 2020
