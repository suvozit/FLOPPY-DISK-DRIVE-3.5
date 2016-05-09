#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<CTYPE.H>
#include <time.h>

void main()
{clrscr();
char z[6][5];
for(int i=0;i<6;i++)
   for(int k=0;k<5;k++)  z[i][k]=' ';
z[5][1]=196;z[5][2]=196;z[5][3]=196;z[5][4]=196;
z[5][0]=208;z[4][0]=186;z[3][0]=186;z[2][0]=186;z[1][0]=186;
z[0][0]=201;z[0][1]=205;z[0][2]=205;
z[0][3]=209;z[1][3]=2;z[2][3]=215;z[1][2]=92;z[1][4]=47;z[3][2]=47;z[3][4]=92;

     for(i=0;i<6;i++)
      {for(k=0;k<5;k++)
      cout<<z[i][k]; cout<<"\n";}

}

