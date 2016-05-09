#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();
char x[100];cin.getline(x,100);
int a=strlen(x),c=0;
for(int b=0;b<a;b++)
 {if(x[b]==' ' && x[b+1]=='t' && x[b+2]=='h' && x[b+3]=='e' && x[b+4]==' ')
 c++;
 }
cout<<c;getch();}






































































