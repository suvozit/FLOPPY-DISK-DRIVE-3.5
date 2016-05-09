#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();
int x[4][4],f=0,c,i=0,m=0,ja;
for(int j=0;j<4;j++)
{for(int k=0;k<4;k++)
  {int l=ja;
  x[j][k]=l;}}
for(int a=0;a<4;a++)
 {cout<<a<<" row";
  for(int b=0;b<4;b++)
    {c++;cin>>m;x[a][b]=m;
    if(c>=10) {i=1;break;}
    }  if(i==1)  break;
 }
for(int g=0;g<4;g++)
{for(int h=0;h<4;h++)
  {
	     for(int d=0;d<4;d++)
	     {for(int e=0;e<4;e++)
		{if(x[g][h]==x[d][e] && x[g][h]!=ja)   f=1;
		}
	      }
    if(f==0)  {cout<<g<<" "<<h<<" "<<x[g][h];}
    f=0;
  }
}
getch();
}

