
#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{clrscr();
char *z[37]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
int x[12];long y,m,d;
gotoxy(30,5);cout<<"***  DAY  ***";
gotoxy(40,7);cout<<"by   ---The SHUBHAJIT---";
cout<<"\n\n\n\n  write the year ,month & date and find out which  DAY  was/is/will be that.";
cout<<"\n\n\t\t  YYYY   ";cin>>y;
cout<<"\t\t  MM     ";cin>>m;
cout<<"\t\t  DD     ";cin>>d;
int a=(y/4*5)+5;
switch(y%4)
{case 1:a+=2;break;
 case 2:a+=3;break;
 case 3:a+=4;break;
}
while(a>=7)  a-=7;
x[0]=a;
for(int c=1;c<=11;c++)
{  switch(c)
   {case  1: a+=3; break;
    case  2: if(y%4==0)  a+=1;break;
    case  3: a+=3; break;
    case  4: a+=2; break;
    case  5: a+=3; break;
    case  6: a+=2; break;
    case  7: a+=3; break;
    case  8: a+=3; break;
    case  9: a+=2; break;
    case 10: a+=3; break;
    case 11: a+=2; break;
   }
   while(a>=7)  a-=7;
   x[c]=a;
}

  m--;
  int b=d+x[m];
  while(b>7)  b-=7;
  cout<<"\n\n\t\t\t"<<z[b-1];

getch();
}









