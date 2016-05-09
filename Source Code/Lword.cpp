#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();
char x[100];cin.getline(x,100);
int a=strlen(x),e=0,d=0,c=0;
for(int b=0;b<a;b++)
 {c++;
 if(x[b]==' ')
   {  if((c-1)>e)  {d=b; e=c-1;} c=0;}
  }
for(int f=(d-e);f<=d;f++)
{cout<<x[f];}
cout<<e;
getch();
}