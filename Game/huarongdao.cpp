#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
int main()
{
    int i, j,flag;
    char up, down, left, right;
    char key;
    char block[6][6] = { "#####",
                         "#123#",
                         "#456#",
                         "#78 #",
                         "#####"};
    system("color 75");
    cout << "\n\n\n\n\n\n       欢迎来到华容道游戏\n";
    cout << "       请按相应数字来移动\n\n";
    cout << "       单人游戏，请自行打乱\n\n\n";
    cout << "       按任意键开始游戏";
    _getch();
    system("cls");
    cout<<"\n\n\n\n\n\n";
    for (i = 1; i < 4; i++){
    	cout<<"       ";
        for (j = 1; j < 4; j++)
            cout<< "  " << block[i][j]<<"  ";
        cout<<endl<<endl;
    }  
    while (1) {
        key = _getch();
        for(i=1;i<4;i++)
            for(j=1;j<4;j++)
                if (block[i][j] == key){
                    if (block[i - 1][j] == ' '){
                        block[i - 1][j] = key;
                        block[i][j] = 32;
                    }
                    else if (block[i + 1][j] == ' ') {
                        block[i + 1][j] = key;
                        block[i][j] = 32;
                    }
                    else if (block[i][j - 1] == ' ') {
                        block[i][j - 1] = key;
                        block[i][j] = 32;
                    }
                    else if (block[i][j + 1] == ' ') {
                        block[i][j + 1] = key;
                        block[i][j] = 32;
                    }
                    goto pace;
                }
    pace:
        system("cls");
        cout<<"\n\n\n\n\n\n";
        for (i = 1; i < 4; i++){
        	cout<<"       ";
        	for (j = 1; j < 4; j++)
            	cout<< "  " << block[i][j]<<"  ";
        	cout<<endl<<endl;
    	}
        flag = 1;
        for (i = 1; i < 4; i++)
            for (j = 1; j < 4; j++)
                if (block[i][j] != 3 * (i - 1) + j+48&&block[i][j]!=32) {
                    flag = 0; goto chaos;
                }  
    chaos:
        if (flag) {
            cout << "恭喜您，游戏胜利！\n";
            break;
        }
    }
    Sleep(3600);
}
