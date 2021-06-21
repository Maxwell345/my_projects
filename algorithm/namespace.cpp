#include <iostream>
using namespace std;
namespace normal{
	void show(char *s){
		int i;
		for(i=0;s[i];i++) cout<<s[i];
		cout<<endl;
	}
}
namespace reverse{
	void show(char *t)
	{
		int j,tail;
		for(tail=0;t[tail];tail++);
		for(j=tail;j>=0;j--)
		{
			cout<<t[j];
		}
		cout<<endl;
	}
}
int main()
{
	char words[100];
	cin>>words;
	normal::show(words);
	reverse::show(words);
}
