#include<conio.h>
#include<iostream.h>
void main()
{clrscr();char a[3][3]={'1','2','3','4','5','6','7','8','9'};
char w=216,z=220,y=1,x,b=1;int f=0;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tTICK TAC TOE\t by     ---The SHUBHAJIT---";
getch();clrscr();
while(b<9)
 {  	   for (int c=0;c<3;c++)
	     {cout<<"\n\t\t\t\t ";
	      for (int d=0;d<3;d++)
		    {    if(a[c][d]==x)
			 {if(b%2==0)     a[c][d]=w;
			  else           a[c][d]=z;b++;
			 }
		    //cout<<a[c][d]<<"  ";
		    } cout<<a[c][0]<<" | "<<a[c][1]<<" | "<<a[c][2];
            cout<<"\n\t\t\t\t";
            if(c!=2) cout<<"---|---|---";
	      }
    

     for(int e=0;e<3;e++)
     {
	  if(a[e][0]==a[e][1] && a[e][1]==a[e][2])  {  y=a[e][0]; f=1;  }
	  if(a[0][e]==a[1][e] && a[1][e]==a[2][e])  {  y=a[0][e]; f=1;  }
	  if(a[0][0]==a[1][1] && a[1][1]==a[2][2])  {  y=a[1][1]; f=1;  }
	  if(a[0][2]==a[2][0] && a[2][0]==a[1][1])  {  y=a[1][1]; f=1;  }
     }
    if(f==1)  break;
     cout<<"\n\n\n\a It is now the chance of ///// ";
     if(b%2==0)    cout<<w<<" /////";
     else          cout<<z<<" /////";
     cin>>x;clrscr();
}
cout<<"\n\n\n\t\t\t"<<y<<"\t\twins!!!!!!!!\a\a\a";getch();
}