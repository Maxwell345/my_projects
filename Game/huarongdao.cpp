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
    cout << "\n\n\n\n\n\n       ��ӭ�������ݵ���Ϸ\n";
    cout << "       �밴��Ӧ�������ƶ�\n\n";
    cout << "       ������Ϸ�������д���\n\n\n";
    cout << "       ���������ʼ��Ϸ";
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
            cout << "��ϲ������Ϸʤ����\n";
            break;
        }
    }
    Sleep(3600);
}
