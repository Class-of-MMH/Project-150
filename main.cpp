#include<bits/stdc++.h>

using namespace std;

int main()
{
	system("mode con: lines=29 cols=82");
	char ch;
	int i;
	getup();
	while(true)
	{
		while(!kbhit())
		{
			ds();
			obj();
		}
		ch=getch();
		if(ch==' ')
		{
			for(i=0;i<10;i++)
			{
			ds(1);
			obj();
			}
			for(i=0;i<10;i++)
			{
			ds(2);
			obj();
			}
		}
		else if (ch=='x')
			return(0);
	}

}
