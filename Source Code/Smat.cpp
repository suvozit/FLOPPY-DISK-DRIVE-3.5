#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();
int a[4][4],b[4][4],f=0;
for(int c=0;c<4;c++)
{ for(int d=0;d<4;d++)
   {cin>>a[c][d];     b[d][c]=a[c][d];
    }
}
for(int e=0;e<4;e++)
{ for(int f=0;f<4;f++)
   { if(a[e][f] != b[e][f])      {f=1; break;}
   }
}
if(f==1)  cout<<"not symmetric";
else      cout<<"symmetric";
getch();
}

