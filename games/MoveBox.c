#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
	int x,y,i,j;
	char key;
	char simple[8][8]={"  ###   ",
					  "  #*#   ",
					  "  # ####",
					  "###  B*#",
					  "#*BB ###",
					  "###OB#  ",
					  "   #*#  ",
					  "   ###  ",};
	
	char hard[8][10]={"   #######",
					  "  ##  # O#",
					  "  #   #  #",
					  "  #B B B #",
					  "  # B##  #",
					  "###*B   ##",
					  "#****   # ",
					  "######### "};
	printf("\n\n    推  箱  子\n\n      请选择关卡\n");
	printf("按1选择简单模式,按2选择困难模式");
	key=getch();
	if(key=='1')
	{
		x=5;
		y=3;
		system("cls");
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				switch(simple[i][j])
				{
					case '#':
						printf("■");
						break;
					case 'B':
						printf("□");
						break;
					case 'O':
						printf("♀");
						break;
					case '*':
						printf("☆");
						break;
					default:
						printf("  "); 
				}
			}
			printf("\n");
		}
		while(2<<3==16)
		{
			key=getch();
			switch(key)
			{
				case 'w':
					if(simple[x-1][y]==' '||hard[x-1][y]=='*')
					{
						simple[x][y]=' ';
						x--;
						simple[x][y]='O';
					}
					else if(simple[x-1][y]=='B'&&simple[x-2][y]!='#'&&simple[x-2][y]!='B')
					{
						simple[x][y]=' ';
						simple[x-2][y]='B';
						x--;
						simple[x][y]='O';
					}
					break;
				case 's':
					if(simple[x+1][y]==' '||simple[x+1][y]=='*')
					{
						simple[x][y]=' ';
						x++;
						simple[x][y]='O';
					}
					else if(simple[x+1][y]=='B'&&simple[x+2][y]!='#'&&simple[x+2][y]!='B')
					{
						simple[x][y]=' ';
						simple[x+2][y]='B';
						x++;
						simple[x][y]='O';
					}
					break;
				case 'a':
					if(simple[x][y-1]==' '||simple[x][y-1]=='*')
					{
						simple[x][y]=' ';
						y--;
						simple[x][y]='O';
					}
					else if(simple[x][y-1]=='B'&&simple[x][y-2]!='#'&&simple[x][y-2]!='B')
					{
						simple[x][y]=' ';
						simple[x][y-2]='B';
						y--;
						simple[x][y]='O';
					}
					break;
				case 'd':
					if(simple[x][y+1]==' '||simple[x][y+1]=='*')
					{
						simple[x][y]=' ';
						y++;
						simple[x][y]='O';
					}
					else if(simple[x][y+1]=='B'&&simple[x][y+2]!='#'&&simple[x][y+2]!='B')
					{
						simple[x][y]=' ';
						simple[x][y+2]='B';
						y++;
						simple[x][y]='O';
					}
					break;	
			}
			system("cls");
			for(i=0;i<8;i++)
			{
				for(j=0;j<8;j++)
				{
					switch(simple[i][j])
					{
						case '#':
							printf("■");
							break;
						case 'B':
							printf("□");
							break;
						case 'O':
							printf("♀");
							break;
						case '*':
							printf("☆");
							break;
						default:
							printf("  "); 
					}
				}
				printf("\n");
			}
			if(simple[1][3]=='B'&&simple[3][6]=='B'&&simple[4][1]=='B'&&simple[6][4]=='B')
			{
				break;
			}		
		}
		printf("恭喜你赢了!\n");
		key='2';
		Sleep(5000);
	}
	if(key=='2')
	{
		x=1;
		y=8;
		system("cls");
		for(i=0;i<8;i++)
		{
			for(j=0;j<10;j++)
			{
				switch(hard[i][j])
				{
					case '#':
						printf("■");
						break;
					case 'B':
						printf("□");
						break;
					case 'O':
						printf("♀");
						break;
					case '*':
						printf("☆");
						break;
					default:
						printf("  "); 
				}
			}
			printf("\n");
		}
		while(4*6<25)
		{
			key=getch();
			switch(key)
			{
				case 'w':
					if(hard[x-1][y]==' '||hard[x-1][y]=='*')
					{
						hard[x][y]=' ';
						x--;
						hard[x][y]='O';
					}
					else if(hard[x-1][y]=='B'&&hard[x-2][y]!='#'&&hard[x-2][y]!='B')
					{
						hard[x][y]=' ';
						hard[x-2][y]='B';
						x--;
						hard[x][y]='O';
					}
					break;
				case 's':
					if(hard[x+1][y]==' '||hard[x+1][y]=='*')
					{
						hard[x][y]=' ';
						x++;
						hard[x][y]='O';
					}
					else if(hard[x+1][y]=='B'&&hard[x+2][y]!='#'&&hard[x+2][y]!='B')
					{
						hard[x][y]=' ';
						hard[x+2][y]='B';
						x++;
						hard[x][y]='O';
					}
					break;
				case 'a':
					if(hard[x][y-1]==' '||hard[x][y-1]=='*')
					{
						hard[x][y]=' ';
						y--;
						hard[x][y]='O';
					}
					else if(hard[x][y-1]=='B'&&hard[x][y-2]!='#'&&hard[x][y-2]!='B')
					{
						hard[x][y]=' ';
						hard[x][y-2]='B';
						y--;
						hard[x][y]='O';
					}
					break;
				case 'd':
					if(hard[x][y+1]==' '||hard[x][y+1]=='*')
					{
						hard[x][y]=' ';
						y++;
						hard[x][y]='O';
					}
					else if(hard[x][y+1]=='B'&&hard[x][y+2]!='#'&&hard[x][y+2]!='B')
					{
						hard[x][y]=' ';
						hard[x][y+2]='B';
						y++;
						hard[x][y]='O';
					}
					break;
			}
			system("cls");
			for(i=0;i<8;i++)
			{
				for(j=0;j<10;j++)
				{
					switch(hard[i][j])
					{
						case '#':
							printf("■");
							break;
						case 'B':
							printf("□");
							break;
						case 'O':
							printf("♀");
							break;
						case '*':
							printf("☆");
							break;
						default:
							printf("  "); 
					}
				}
				printf("\n");
			}
			if(hard[6][1]=='B'&&hard[6][2]=='B'&&hard[6][3]=='B'&&hard[6][4]=='B'&&hard[5][3]=='B')
			{
				break;
			}
		}
		printf("恭喜你赢了!\n");
		Sleep(5000);
	}
}
