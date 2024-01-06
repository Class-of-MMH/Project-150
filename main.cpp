#include<bits/stdc++.h>
#include "functions.cpp"

using namespace std;

int main()
{
	system("mode con: lines=30 cols=100");
	char ch;
	int i;
	getup();
	while(true)
	{
		while(!kbhit())
		{
			ds(0);
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
		else if (ch=='o')
			return(0);
	}

}
