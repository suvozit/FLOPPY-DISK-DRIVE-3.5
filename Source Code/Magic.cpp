#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void main()
{clrscr();
gotoxy(35,12);cout<<"MAGIC";
gotoxy(45,15);cout<<"by      ---The   SHUBHAJIT---";

getch();clrscr();
gotoxy(15,12);cout<<"think of any number from 1 to 100 , example: 25,  ";
getch();clrscr();
gotoxy(15,12);cout<<"now sum the digits in the NUMBER     , (2+5)= ";
getch();clrscr();
gotoxy(15,12);cout<<"subtract it from the original NUMBER  ,  25 - (2+5)= ";
getch();clrscr();
gotoxy(15,12);cout<<"search the respective sybmol of the result   &  press enter";
getch();clrscr();

char a[24]={224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,245,246,247};
char b[100];
randomize();
int c=random(23),e;
b[0]=a[c]; b[9]=a[c]; b[18]=a[c]; b[27]=a[c];
b[36]=a[c]; b[45]=a[c]; b[54]=a[c]; b[63]=a[c]; b[72]=a[c]; b[81]=a[c];
b[90]=a[c];b[99]=a[c];
int f=0;
for(int d=0;d<4;d++)
{ char a[24]={224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,245,246,247};
  e=0;
  while(e<22)
   { if(f%9==0) f++;
     //randomize();
     c=random(23);
     if(a[c]=='*')  continue;
     b[f]=a[c];a[c]='*';e++;f++;
   }
}

f=0;
for(d=0;d<20;d++)
{ for(e=0;e<5;e++)
   {cout<<"\t"<<f<<" "<<b[f];f++;}
   cout<<"\n";
}
getch();clrscr();
gotoxy(15,12);
cout<<"you thought of ////////  "<<b[0]<<"  ////////";
getch();
}

