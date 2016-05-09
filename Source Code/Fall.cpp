#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void main()
{clrscr();
char a[80],x;
cin.getline(a,80);clrscr();
int b=strlen(a),e=0;
for(int c=0;c<b;c++)
{ x=a[c];a[c]=' ';
  for(int d=0;d<20;d++)
  { cout.write(a,b);cout<<"\n";
    for(e=0;e<d;e++)   cout<<"\n";
    for(e=0;e<c;e++)   cout<<" ";
    cout<<x;delay(50);clrscr();

    //sound(d*500);delay(30-d);nosound();
  }
}
gotoxy(35, 12);cout<<"by  ---The SHUBHAJIT---";
getch();

}

