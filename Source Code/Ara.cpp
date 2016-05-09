#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();
int a[10],b[10],h=0;
for(int c=0;c<10;c++)
  cin>>a[c];
for(int d=0;d<10;d++)
{  for(int e=0;e<10;e++)
    { if(a[d]>a[e])
	{h=a[d]; a[d]=a[e]; a[e]=h;}
    }
}
int m=0,n=9;
for(int f=0;f<10;f++)
{  if(f%2==1)  {b[m]=a[f]; m++;}
   else        {b[n]=a[f]; n--;}
}
for(int g=0;g<10;g++)  cout<<b[g];
getch();
}
