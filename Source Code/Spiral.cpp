#include<conio.h>
#include<iostream.h>
void main()
{clrscr();
int x=0,i=0,j=1,k=0,l=0;
cout<<"enter the order of spiral matrix  ";cin>>x;cout<<"\n\n\n";

for(int a=1;a<=x;a++)
{if(a<10) cout<<"00";
 else if(a<100) cout<<"0";cout<<a<<" ";}cout<<"\n";

for(a=1;a<=(x-2);a++)
{ int c=(4*(x-1))-(a-1);
  if(c<10) cout<<"00"; else if(c<100) cout<<"0"; cout<<c<<" ";

  if(a> (x/2))    i--;    else   i=a;k=i;l=i;
  if(a>(x/2) && x%2==1)   l++;

  int d=(4*(x-1))-7;
  for(int b=2;b<=l;b++)
  {c+=d; d-=8;
   if(c<10) cout<<"00"; else if(c<100) cout<<"0"; cout<<c<<" ";}

  int f=x-(i*2);
  if(a>(x/2) && x%2==0)  {f++; j=-1;}
  if(a>(x/2) && x%2==1)  {f--; j=-1;}
  for(int e=1;e<=f;e++)
  {c+=j;
   if(c<10) cout<<"00";  else if(c<100) cout<<"0"; cout<<c<<" ";}

  if(a> (x/2) && x%2==0)    k-=1;
  int h=(4*(x-1))-3-((k-1)*8);
  for(int g=1;g<=k;g++)
  {c-=h; h+=8;
   if(c<10) cout<<"00";  else if(c<100) cout<<"0"; cout<<c<<" ";}

  cout<<"\n";
}

for(a=((3*x)-2);a>=((2*x)-1);a--)
{if(a<10) cout<<"00";  else if(a<100) cout<<"0";  cout<<a<<" "; }
cout<<"\n\n\n\n\n\n\t\tby     ---The  SHUBHAJIT---";
getch();
}




























































































































