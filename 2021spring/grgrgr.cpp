#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int ps,np,adv,grade;
	ps=np=adv=0;
	while(1){
		scanf("%d",&grade);
		if(grade<=0) break;
		if(grade>=60&&grade<85) ps++;
		else if(grade>=85)      adv++;
		else					np++;
	}
	cout<<">=85:"<<adv<<endl<<"60-84:"<<ps<<endl<<"<60:"<<np<<endl;
}
