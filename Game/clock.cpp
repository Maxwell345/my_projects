#include <iostream>
#include <Windows.h>
using namespace std;
int map[12][27];
int main()
{
	int cntclk = 3600;
	int scdu,scdt,mint,minu;
	int x, y, i, j;
	while (cntclk > 0) {
		--cntclk;
		scdu = (cntclk % 60) % 10;
		scdt = (cntclk % 60)/10;
		minu = (cntclk / 60) % 10;
		mint = (cntclk / 60) / 10;
		switch (mint)
		{
		case 1:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4] = 1;
			}
			break;
		case 2:
			for (j = 1; j < 4; ++j) {
				for (i = 0; i < 9; i += 4)
					map[i][j] = 1;
			}
			for (i = 1; i < 4; ++i)
				map[i][4] = 1;
			for (i = 5; i < 8; ++i) {
				map[i][0] = 1;
			}
			break;
		case 3:
			for (j = 1; j < 4; ++j) {
				for (i = 0; i < 9; i += 4)
					map[i][j] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][4] = 1;
			}
			break;
		case 4:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4] = 1;
			}
			for (i = 1; i < 4; i++) {
				map[4 - i][0] = 1;
				map[4][0 + i] = 1;
			}
			break;
		case 5:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				if (i < 4) map[i][0] = 1;
				else       map[i][4] = 1;
			}
			break;
		case 6:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				else if (i < 4) map[i][0] = 1;
				else {
					map[i][0] = 1;
					map[i][4] = 1;
				}
			}
			break;
		case 7:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4] = 1;
			}
			for (j = 1; j < 4; ++j)
				map[0][j] = 1;
			break;
		case 8:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][0] = 1;
				map[i][4] = 1;
			}
			break;
		case 9:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				else if (i < 4) {
					map[i][0] = 1;
					map[i][4] = 1;
				}
				else map[i][4] = 1;
			}
			break;
		default:
			for (i = 0; i < 9; i += 4) {
				if (i == 4) continue;
				for (j = 1; j < 4; ++j)
					map[i][j] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][0] = 1;
				map[i][4] = 1;
			}
			break;
		}
		switch (minu)
		{
		case 1:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4+7] = 1;
			}
			break;
		case 2:
			for (j = 1; j < 4; ++j) {
				for (i = 0; i < 9; i += 4)
					map[i][j+7] = 1;
			}
			for (i = 1; i < 4; ++i)
				map[i][4+7] = 1;
			for (i = 5; i < 8; ++i) {
				map[i][0+7] = 1;
			}
			break;
		case 3:
			for (j = 1; j < 4; ++j) {
				for (i = 0; i < 9; i += 4)
					map[i][j+7] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][4+7] = 1;
			}
			break;
		case 4:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4+7] = 1;
			}
			for (i = 1; i < 4; i++) {
				map[4 - i][0+7] = 1;
				map[4][0 + i + 7] = 1;
			}
			break;
		case 5:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 7] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				if (i < 4) map[i][0 + 7] = 1;
				else       map[i][4 + 7] = 1;
			}
			break;
		case 6:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 7] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				else if (i < 4) map[i][0+7] = 1;
				else {
					map[i][0 + 7] = 1;
					map[i][4 + 7] = 1;
				}
			}
			break;
		case 7:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4 + 7] = 1;
			}
			for (j = 1; j < 4; ++j)
				map[0][j + 7] = 1;
			break;
		case 8:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 7] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][0 + 7] = 1;
				map[i][4 + 7] = 1;
			}
			break;
		case 9:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 7] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				else if (i < 4) {
					map[i][0 + 7] = 1;
					map[i][4 + 7] = 1;
				}
				else map[i][4 + 7] = 1;
			}
			break;
		default:
			for (i = 0; i < 9; i += 4) {
				if (i == 4) continue;
				for (j = 1; j < 4; ++j)
					map[i][j+7] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][0+7] = 1;
				map[i][4+7] = 1;
			}
			break;
		}
		switch (scdt)
		{
		case 1:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4 + 14] = 1;
			}
			break;
		case 2:
			for (j = 1; j < 4; ++j) {
				for (i = 0; i < 9; i += 4)
					map[i][j + 14] = 1;
			}
			for (i = 1; i < 4; ++i)
				map[i][4 + 14] = 1;
			for (i = 5; i < 8; ++i) {
				map[i][0 + 14] = 1;
			}
			break;
		case 3:
			for (j = 1; j < 4; ++j) {
				for (i = 0; i < 9; i += 4)
					map[i][j + 14] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][4 + 14] = 1;
			}
			break;
		case 4:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4 + 14] = 1;
			}
			for (i = 1; i < 4; i++) {
				map[4 - i][0 + 14] = 1;
				map[4][0 + i + 14] = 1;
			}
			break;
		case 5:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 14] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				if (i < 4) map[i][0 + 14] = 1;
				else       map[i][4 + 14] = 1;
			}
			break;
		case 6:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 14] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				else if (i < 4) map[i][0+14] = 1;
				else {
					map[i][0 + 14] = 1;
					map[i][4 + 14] = 1;
				}
			}
			break;
		case 7:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4 + 14] = 1;
			}
			for (j = 1; j < 4; ++j)
				map[0][j + 14] = 1;
			break;
		case 8:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 14] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][0 + 14] = 1;
				map[i][4 + 14] = 1;
			}
			break;
		case 9:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 14] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				else if (i < 4) {
					map[i][0 + 14] = 1;
					map[i][4 + 14] = 1;
				}
				else map[i][4 + 14] = 1;
			}
			break;
		default:
			for (i = 0; i < 9; i += 4) {
				if (i == 4) continue;
				for (j = 1; j < 4; ++j)
					map[i][j + 14] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][0 + 14] = 1;
				map[i][4 + 14] = 1;
			}
			break;
		}
		switch (scdu)
		{
		case 1:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4 + 21] = 1;
			}
			break;
		case 2:
			for (j = 1; j < 4; ++j) {
				for (i = 0; i < 9; i += 4)
					map[i][j + 21] = 1;
			}
			for (i = 1; i < 4; ++i)
				map[i][4 + 21] = 1;
			for (i = 5; i < 8; ++i) {
				map[i][0 + 21] = 1;
			}
			break;
		case 3:
			for (j = 1; j < 4; ++j) {
				for (i = 0; i < 9; i += 4)
					map[i][j + 21] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][4 + 21] = 1;
			}
			break;
		case 4:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4 + 21] = 1;
			}
			for (i = 1; i < 4; i++) {
				map[4 - i][0 + 21] = 1;
				map[4][0 + i + 21] = 1;
			}
			break;
		case 5:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 21] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				if (i < 4) map[i][0 + 21] = 1;
				else       map[i][4 + 21] = 1;
			}
			break;
		case 6:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 21] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				else if (i < 4) map[i][0+21] = 1;
				else {
					map[i][0 + 21] = 1;
					map[i][4 + 21] = 1;
				}
			}
			break;
		case 7:
			for (i = 1; i < 8; i++) {
				if (i == 4) continue;
				map[i][4 + 21] = 1;
			}
			for (j = 1; j < 4; ++j)
				map[0][j + 21] = 1;
			break;
		case 8:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 21] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][0 + 21] = 1;
				map[i][4 + 21] = 1;
			}
			break;
		case 9:
			for (i = 0; i < 9; i += 4) {
				for (j = 1; j < 4; ++j)
					map[i][j + 21] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				else if (i < 4) {
					map[i][0 + 21] = 1;
					map[i][4 + 21] = 1;
				}
				else map[i][4 + 21] = 1;
			}
			break;
		default:
			for (i = 0; i < 9; i += 4) {
				if (i == 4) continue;
				for (j = 1; j < 4; ++j)
					map[i][j + 21] = 1;
			}
			for (i = 1; i < 8; ++i) {
				if (i == 4) continue;
				map[i][0 + 21] = 1;
				map[i][4 + 21] = 1;
			}
			break;
		}
		cout<<"\n\n\n";
		for (x = 0; x < 12; ++x) {
			cout<<"      ";
			for (y = 0; y < 26; ++y) {
				if (map[x][y]) cout << "¡ö";
				else           cout << "  ";
			}
			cout << endl;
		}
		Sleep(875);
		for (x = 0; x < 12; ++x) {
			for (y = 0; y < 26; ++y) {
				map[x][y] = 0;
			}
		}
		map[3][13] = 1; map[5][13] = 1;
		system("cls");
	}
}
