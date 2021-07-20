#include <iostream>
#include <Windows.h>
using namespace std;
#define C4 Beep(261,400);Sleep(80)
#define D4 Beep(293,400);Sleep(80)
#define E4 Beep(329,400);Sleep(80)
#define F4 Beep(349,400);Sleep(80)
#define G4 Beep(392,400);Sleep(80)
#define A4 Beep(440,400);Sleep(80)
#define B4 Beep(494,400);Sleep(80)
#define CC4 Beep(524,400);Sleep(80)
#define lowB4 Beep(247,400);Sleep(80)
#define lowA4 Beep(220,400);Sleep(80)
#define lowG4 Beep(196,400);Sleep(80)
#define lowE4 Beep(165,400);Sleep(80)
#define C8 Beep(261,200);Sleep(80)
#define D8 Beep(293,200);Sleep(80)
#define E8 Beep(329,200);Sleep(80)
#define F8 Beep(349,200);Sleep(80)
#define G8 Beep(392,200);Sleep(80)
#define A8 Beep(440,200);Sleep(80)
#define B8 Beep(494,200);Sleep(80)
#define CC8 Beep(524,200);Sleep(80)
#define lowB8 Beep(247,200);Sleep(80)
#define lowA8 Beep(220,200);Sleep(80)
#define lowG8 Beep(196,200);Sleep(80)
#define lowE8 Beep(165,200);Sleep(80)
#define Cx Beep(261,100);Sleep(80)
#define Dx Beep(293,100);Sleep(80)
#define Ex Beep(329,100);Sleep(80)
#define Fx Beep(349,100);Sleep(80)
#define Gx Beep(392,100);Sleep(80)
#define Ax Beep(440,100);Sleep(80)
#define Bx Beep(494,100);Sleep(80)
#define CCx Beep(524,100);Sleep(80)
#define lowBx Beep(247,100);Sleep(80)
#define lowAx Beep(220,100);Sleep(80)
#define lowGx Beep(196,100);Sleep(80)
#define lowEx Beep(165,100);Sleep(80)
void orchid()
{
	lowA8; E8; E8; E8; Beep(329, 600); Sleep(80); D8; Beep(261,300); Sleep(80); Dx; C8; lowB8; lowA4; Beep(220, 800); Sleep(80);
	A8; A8; A8; A8; Beep(440, 600); Sleep(80); G8; E8; G8; G8;  Beep(370, 200); Sleep(80);  Beep(329, 800); Sleep(80);
	E8; A8; A8; G8; Beep(329, 600); Sleep(80); D4; C8; Dx; C8; lowB8; lowA4; lowE4;
	lowE8; C8; C8; lowB8; lowA4; E8; D8; C8; lowB8; lowG8; lowA4;
}
void birthday()
{
	lowG8; lowG8; lowA4; lowG4; C4; Beep(247, 400); Sleep(80);
	lowG8; lowG8; lowA4; lowG4; D4;Beep(261, 400); Sleep(80);
	lowG8; lowG8; G4; E4; C4; lowB4; lowA4;
	Beep(349, 300); Sleep(80); F8; E4; C4; D4; Beep(261, 800); Sleep(80);
}
int main()
{
	orchid();
	Sleep(2600);
	birthday();
}
