#include <cstdio>
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	cout << "Hello World!" << endl;
	printf("This is an sound");
	printf("\a");Sleep(3000);
	Beep(660, 500);
}
