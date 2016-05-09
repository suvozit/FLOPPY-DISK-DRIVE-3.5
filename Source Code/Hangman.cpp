#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<CTYPE.H>
#include <time.h>
#include<dos.h>

void main()
{ 
	clrscr();
char *a,*b,*c,y,x,w[36];
int n=0,p=0,r=0,q=0;
char *v[36]={"The Father of Medicine","which astronomer said planets moves round the sun","The Father of Botany","who proved that lightning was really electricity","who is regarded as the inventor of ALGEBRA","who is regarded as the first scientist in the world","science dealing with SOUND","name given to earliest birds","the brightest star in the sky","name given to Venus when it is seen before sunlight","mathematician who discovered that light travels in a straight line","first spaceprobe that left the solar system is _________-10","the farthest object in space visible to naked eye is _________ galaxy","what is the source of litmus ,an indicator for acidity","sometimes called DIRTY SNOWBALLS","smallest unit of length","Laszlo & Georg Biro invented it in 1938","Mark Twain the famous author invented it","intensity of earthquake is measured in this scale","trains without wheels are called","the first plastic surgeon","the fastest car ______-2","the fourth state of matter ,i.e.,solid ,liqid ,gas ,______",
	     "the freezing technique in surgery known as","study of FOSSILS","man-made elements are called","study of elasticty of water under pressure","a morbid dislike for food is called","study of nose disease","____ bombs full of hydrogen sulphide","name given to Soviet supersonic airliner","theory that universe is expanding","the rod that connects tram to the overhead cables","Soviet Space Station is named Mir. which means","sub-atomic particle named after  Satyen"};
char *u[36]={"hippocrates","copernicus","theophrastus","benjamin","aryabhatta","uddalaka","acoustics","archaeopteryx","sirius","lucifier","euclid","pioneer","andromeda","lichen","comets","attometre","ballpen","typewriter","mercalli","maglev","sushruta","thrust","plasma","cryosurgery","paleontology","transuranics","elastohydrodynamics","sitophobia","rhinology","stink","concordski","redshift","pantograph","peace","boson"};


for(int i=1;i<=50;i++)
{gotoxy(35,12);cout<<"HANG-MAN";
gotoxy(45,16);cout<<"--by  THE SHUBHAJIT";sound(250*i);
delay(10*i);nosound();clrscr();delay(200-(i*2));}

gotoxy(35,12);cout<<"HANG-MAN";
gotoxy(45,16);cout<<"--by  THE SHUBHAJIT";getch();clrscr();

while(r<36)
{  randomize();int j=random(36);
   if(w[j]=='*')    continue;
   w[j]='*';r++;
   a=u[j];c=v[j];

   const int h=strlen(a);
   int m=10,p=0;
   char z[6][7],d[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   for(i=0;i<h;i++)   b[i]=168;

   for(i=0;i<6;i++)
   for(int k=0;k<7;k++)  z[i][k]=' ';

   for(i=0;i<40;i++)
   { sound(4000+i*100); delay(100-i*2) ; nosound(); }

   while(m>0)
   { cout<<r;
     gotoxy(9,5);  puts(c);
     cout<<"\n\t\t\t";         cout.write(b,h);
     cout<<"\n\n\t\t\t  ";
     for(i=0;i<6;i++)
      {for(k=0;k<7;k++)
	cout<<z[i][k]; cout<<"\n\t\t\t  "; }
     cout<<"\n\n\t\tchance left  ";  for(i=0;i<m;i++)  cout.put(1);
     cout<<"\n\n\n\tYou can choose among    ";  puts(d);
     cout<<"\n\twhat is your choice ?   ";      cin.get(y); clrscr();
     x=tolower(y);
     int l=0;
     for(i=0;i<26;i++)
       if( d[i]==x )
       { d[i]=' ';
	 for(int k=0;k<h;k++)
	  if( a[k]==x )
	  { b[k]=a[k]; l++; }
	  l++;
       }
     if(l==1) m--;
     n=0;
     for(i=0;i<h;i++)
      if(a[i]==b[i]) n++;

     if(n==h)  { p=1; break; }
 //////////////////////////////grapicz  code//////////////////////////////////
     switch(m)
     {case  9:z[5][1]=196;z[5][2]=196;z[5][3]=196;z[5][4]=196;break;
      case  8:z[5][0]=208;z[4][0]=186;z[3][0]=186;z[2][0]=186;z[1][0]=186;break;
      case  7:z[0][0]=201;z[0][1]=205;z[0][2]=205;break;
      case  6:z[0][3]=209;break;
      case  5:z[1][3]=153;break;
      case  4:z[2][3]=215;break;
      case  3:z[1][2]=92;break;
      case  2:z[1][4]=47;break;
      case  1:z[3][2]=47;break;
      case  0:z[3][4]=92;break;
     }

   }
   q+=m;
   gotoxy(15,12);

 //  for(i=0;i<25;i++)
   //{ sound(i*10); delay(10+i*10); nosound();}

   if(p==1)    {sound(100);delay(500);
		sound(80);delay(800);
		sound(50);delay(1200);
		cout<<"you win!!!!!\t\t\t   point scored="<<q;nosound();}
   else        {z[0][6]='H';z[1][6]='A';z[2][6]='N';
		z[3][6]='G';z[4][6]='E';z[5][6]='D';
		gotoxy(9,5);
		cout<<"\n\n\n\n\t\t\t  ";
		    for(i=0;i<6;i++)
		    {for(k=0;k<7;k++)
		     {sound(800*7);delay(100);cout<<z[i][k];nosound();}
		      cout<<"\n\t\t\t  "; }
		  delay(500);
		cout<<"\n\n\t\t\tyou loose!!!!!";delay(500);
		cout<<"\t\t\t point scored="<<q<<"\n\n\n\n\tthe solution is    "; puts(a);
		getch();clrscr();break;}
   getch();clrscr();
}

clrscr();
randomize();
int s=0,t=0;
for(i=0;i<=50;i++)
 {
  t=random (50);s=random(50);
  gotoxy(t,s);
  cout<<"*****";        sound(2000);delay(50);nosound();
  cout<<"  THE  ";      sound(750);delay(50);nosound();
  cout<<"  SHUBHAJIT  ";sound(10);delay(50);nosound();
  cout<<"*****\twins!!!!!!!";
  delay(500);clrscr();
 }

gotoxy(20, 12);
cout<<"*****  THE    SHUBHAJIT  *****\twins!!!!!!\t\t\t";delay(1000);

for(i=0;i<=100;i++)
{ sound(i*60); delay(200-i); nosound();
  sound(i*40); delay(150-i); nosound();
  sound(i*20); delay(100-i); nosound(); }
 clrscr();gotoxy(35, 12);
 cout<<"GAME  OVER";
getch();clrscr();

cout<<"\tPlease do not make illegal copies of this game";
cout<<"\n\nThe software you are using are produced through the efforts of - SHUBHAJIT -";
cout<<"This software is protected by federal copyright law. 2005 ";
cout<<"\n\n\n\n\n  The idea of making this game was hinted by <my BEST FRIEND>  ---- MAYA ----";

getch();
}

