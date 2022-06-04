#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <Windows.h>
using namespace std;
char hints[11][7];
void dye_ltr(char color_name,char letter)	
{
    if(color_name=='G')
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    else if(color_name=='Y')
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    else
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
    cout << letter;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int main()
{
    int won = 0;
    char wordlist[120][10] = {
        "abuse","abide","waive","crane","woman","human","naive","teach","touch","watch",
        "along","alone","argue","arise","awake","house","horse","juice","media","movie",
        "score","mount","mouth","month","dream","cream","stair","stare","start","stand",
        "empty","scope","field","yield","salad","ratio","sauce","radio","piano","video",
        "raise","ocean","quiet","quite","group","roast","goose","audio","loose","boost",
        "stoop","booth","bonus","grant","grade","grace","right","light","fight","night",
        "trail","trial","local","cause","laugh","cough","knife","photo","table","prime",
        "visit","glass","grass","shell","pearl","world","polar","begin","while","white",
        "beach","beast","feast","yeast","fable","force","carry","avoid","sense","slope",
        "faith","trust","think","value","vague","claim","novel","habit","scale","party",
        "nasty","phase","refer","arrow","worth","heart","earth","quote","trace","graph",
        "trade","grape","phone","sixth","forth","tooth","teeth","rural","cover","maple"
    };
    int chance=10, i, j,wall_row=0;
    char obj_word[7];
    char guess_word[12][7];
    cout << "please input a word with 5 letters,and some hints will be given."<<endl;
    cout << "Green means the letter in the specific position is correct," << endl;
    cout << "Yellow means the letter exists but the position is wrong" << endl;
    cout << "and Grey means that that letter does not exist." << endl;
    srand((int)time(0));
    strcpy(obj_word, wordlist[rand() % 120]);
    while (chance--)
    {
        cin >> guess_word[wall_row];
        for (i = 0; i < 5; ++i)
        {
            hints[wall_row][i] = 'B';
        }
        for (i = 0; i < 5; ++i) {
            for (j = 0; j < 5; ++j) {
                if (guess_word[wall_row][i] == obj_word[j])
                {
                    if (i == j||guess_word[wall_row][i]==obj_word[i])
                        hints[wall_row][i] = 'G';
                    else
                        hints[wall_row][i] = 'Y';
                    break;
                }
            }
        }
        cout << wall_row + 1 << "/10" << endl;
        for (i = 0; i <= wall_row; ++i) {
            for (j = 0; guess_word[i][j]; ++j)
                dye_ltr(hints[i][j], guess_word[i][j]);
            cout << endl;
        }
        if (strcmp(guess_word[wall_row], obj_word) == 0)
        {
            cout << "you won:" << obj_word << endl;
            won = 1;
            break;
        }
        wall_row++;
    }
    if(!won)
        cout << "You lost." << endl << "The correct answer is:" << obj_word;
    Sleep(12500);
}
