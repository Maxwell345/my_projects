#include <cstdio>
#include <Windows.h>
#include <conio.h>
#define C 261.62
#define bD 277.18
#define D 293.67
#define bE 311.12
#define E 329.62
#define F 349.23
#define bG 369.99
#define G 391.99
#define bA 415.3
#define A 440
#define bB 466.16
#define B 493.88
int NotOver(char c)
{
	if (c == 59 || c == 61 || c == 45) return 0;
	return 1;
}
int main()
{
	char key;
	key = 50;
	while(NotOver(key))
	{
		key = _getch();
		switch (key)
		{
		case 'q':
			Beep(C, 400);
			break;
		case '2':
			Beep(bD, 400);
			break;
		case 'w':
			Beep(D, 400);
			break;
		case '3':
			Beep(bD, 400);
			break;
		case 'e':
			Beep(E, 400);
			break;
		case 'r':
			Beep(F, 400);
			break;
		case '5':
			Beep(bG, 400);
			break;
		case 't':
			Beep(G, 400);
			break;
		case '6':
			Beep(bA, 400);
			break;
		case 'y':
			Beep(A, 400);
			break;
		case '7':
			Beep(bB, 400);
			break;
		case 'u':
			Beep(B, 400);
			break;
		default:
			break;
		}
	}
	return 0;
}
