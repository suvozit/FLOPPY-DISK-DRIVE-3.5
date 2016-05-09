#include<iostream.h>
#include<string.h>
#include<conio.h>
char m[3][3];
char x='X',o='O';
void get_player_move(void);
void get_computer_move(void);
void trick_check(int);
int simple_check(int);
int disp_n(void);

void get_player_move(void)
{	int a,b;
	cout<<"nter ur move  ";
	cin>>a>>b;
	if(m[a][b]!=' ') 	{cout<<"invalid move"; get_player_move();}
	else m[a][b]=' ';
}
int disp_n(void)
{	for(int a=0;a<3;a++)
	{cout<<m[a][0]<<" | "<<m[a][1]<<" | "<<m[a][2]<<"\n";
	if(a<2) cout<<"--|---|--";}

	for(a=0;a<3;a++)
	{	if(m[a][0]==m[a][1] && m[a][1]==[a][2])	{a=4;}

		if(m[0][a]==m[1][a] && m[1][a]==[2][a])   a=4;

		if(m[2][0]==m[1][1] && m[1][1]==[0][2])   a=4;

		if(m[0][0]==m[1][1] && m[1][1]==[2][2])   a=4;
	}
	if(a==4) {return 1;}
}






void main()
{int f=1,g=0,h=97;
	for(f=0;f<3;f++)
	for(g=0;g<3;g++)
		m[f][g]=h++;
	f=1;g=0;

	while(f!=0)
	{g=0;
	get_player_move();
	f=disp_n();
	g=simple_check(g);
	trick_check(g);
	f=disp_n();
	}
}
int simple_check(int f)
{	for(int a=0;a<3;a++)
	{	if(f==0 && m[a][0]==x && m[a][1]==x && m[a][2]==' ')	{ m[a][2]=o;f=1; }
		if(f==0 && m[a][0]==x && m[a][2]==x && m[a][1]==' ')	{ m[a][1]=o;f=1; }
		if(f==0 && m[a][2]==x && m[a][1]==x && m[a][0]==' ')	{ m[a][0]=o;f=1; }
	}

	for(a=0;a<3;a++)
	{	if(f==0 && m[0][a]==x && m[1][a]==x && m[2][a]==' ')	{ m[2][a]=o;f=1; }
		if(f==0 && m[2][a]==x && m[0][a]==x && m[1][a]==' ')	{ m[1][a]=o;f=1; }
		if(f==0 && m[1][a]==x && m[2][a]==x && m[0][a]==' ')	{ m[0][a]=o;f=1; }
	}
	int b=2;
	for(a=0;a<3;a++)
	{	if(f==0 && m[0][a]==x && m[1][1]==x && m[2][b]==' ')	{ m[2][b]=o;f=1; }
		if(f==0 && m[2][b]==x && m[0][a]==x && m[1][1]==' ')	{ m[1][1]=o;f=1; }
		if(f==0 && m[1][1]==x && m[2][b]==x && m[0][a]==' ')	{ m[0][a]=o;f=1; }
		a+=b;b=a-b;a=a-b;a--;
	}

	return f;
}

void trick_check(int f)
{	if(f==0 && m[1][1]==x && m[2][0]==' ')	{m[2][0]=o;f=1;}
	if(f==0 && m[1][1]!=x && m[1][1]==' ')	{m[1][1]=o;f=1;}

	if(f==0 && m[0][0]==x && m[2][2]==x && m[0][1]!=o && m[1][0]!=o && m[2][1]!=o m[1][2]!=o) {m[0][1]=o;f=1;}
	if(f==0 && m[0][2]==x && m[2][0]==x && m[0][1]!=o && m[1][0]!=o && m[2][1]!=o m[1][2]!=o) {m[0][1]=o;f=1;}

	if(f==0 && m[0][1]==x && m[1][2]==x && m[0][2]==' ')	{m[0][2]=o;f=1;}
	if(f==0 && m[0][1]==x && m[2][2]==x && m[0][2]==' ')	{m[0][2]=o;f=1;}
	if(f==0 && m[0][0]==x && m[1][2]==x && m[0][2]==' ')	{m[0][2]=o;f=1;}

	if(f==0 && m[0][1]==x && m[1][0]==x && m[0][0]==' ')	{m[0][0]=o;f=1;}
	if(f==0 && m[0][1]==x && m[2][0]==x && m[0][0]==' ')	{m[0][0]=o;f=1;}
	if(f==0 && m[0][2]==x && m[1][0]==x && m[0][0]==' ')	{m[0][0]=o;f=1;}

	if(f==0 && m[2][1]==x && m[1][2]==x && m[2][2]==' ')	{m[2][2]=o;f=1;}
	if(f==0 && m[2][1]==x && m[0][2]==x && m[2][2]==' ')	{m[2][2]=o;f=1;}
	if(f==0 && m[2][0]==x && m[1][2]==x && m[2][2]==' ')	{m[2][2]=o;f=1;}

	if(f==0 && m[2][1]==x && m[1][0]==x && m[2][0]==' ')	{m[2][0]=o;f=1;}
	if(f==0 && m[2][2]==x && m[1][0]==x && m[2][0]==' ')	{m[2][0]=o;f=1;}
	if(f==0 && m[2][1]==x && m[0][0]==x && m[2][0]==' ')	{m[2][0]=o;f=1;}

	if(f==0)
	{for(int a=0;a<3;a++)
		{for(int b=0;b<3;b++)
			{if(m[a][b]==' '&& f==0)
				{m[a][b]=o;f=1;}
			}
		}
	}
}







