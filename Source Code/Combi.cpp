#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a,b,c,d,f,g,h;
cin>>a>>b>>c>>d;
for(int e=1;e<=4;e++)
 {  for(int x=1;x<=3;x++)
     {  for(int y=1;y<=2;y++)
	 {cout<<a<<b<<c<<d<<"\n";
	  f=c;c=d;d=f;
	  }f=b;b=c;c=f;
      }
      f=a;a=c;c=f;
      f=b;b=d;d=f;
  }
  getch();}
