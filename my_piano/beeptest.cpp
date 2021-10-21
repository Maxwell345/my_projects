#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <cmath>
using namespace std;
void welcome()
{
	cout<<"\n\n\n\t\twelcome to digital music!"<<endl<<endl<<endl;
}
void begin()
{
	welcome();
	cout<<"\t\tplease choose data type:"<<endl;
	cout<<"\t\ti for integer,f for float\n or j for piano(press space to end)"<<endl;
	
}
int main()
{
	char key;char jian[12]={'q','2','w','3','e','r','5','t','6','y','7','u'};
	int n,i;double x,q;
	double freq[12];
	q=pow(2.0,1.0/12.0);printf("%.9f",q);
	freq[0]=261.63;
	for(i=1;i<12;i++){
		freq[i]=freq[i-1]*q;
	}
	begin();
	source:
	key = _getch();
	if(key=='i'){
		cin>>n;
		Beep(n,800);
	}
	else if(key=='f'){
		cin>>x;
		Beep(x,800);
	}
	else if(key=='j'){
		do{
			key=_getch();
			for(i=0;i<12;++i){
				if(jian[i]==key) Beep(freq[i],750);
			}
		}while(key!=32);
	}
	else{
		cout<<"input error"<<endl;
		goto fled;
	}
	goto source;
	fled:
		return 0;
}
