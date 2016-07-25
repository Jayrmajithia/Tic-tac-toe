#include<iostream.h>
#include<conio.h>
char e[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
class tic
{
	public:
	int a[3][3],i,j;
	void get(int c,int d,int n)
	{
		i=c;
		j=d;
		a[i][j]=n;
	}
};
class toe:public tic
{
	int count;
	public:
	toe()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				a[i][j]=0;
		}
	}
	int check(int c,int d,int n)
	{
		count=1;
		get(c,d,n);
		if(d==0)
		{
			if(c==0)
			{
				if(a[c][d]==a[c][d+1])
				{
					count++;
					if(a[c][d]==a[c][d+2])
					{
						count++;
					}
					else
						count=1;
				}
				if(a[c][d]==a[c+1][d])
				{
					count++;
					if(a[c][d]==a[c+2][d])
					{
						count++;
					}
					else
						count=1;
				}
				if(a[c][d]==a[c+1][d+1])
				{
					count++;
					if(a[c][d]==a[c+2][d+2])
					{
						count++;
					}
					else
						count=1;
				}
			}
			if(c==2)
			{
				if(a[c][d]==a[c][d+1])
				{
					count++;
					if(a[c][d]==a[c][d+2])
						count++;
					else
						count=1;
				}
				if(a[c][d]==a[c-1][d])
				{
					count++;
					if(a[c][d]==a[c-2][d])
						count++;
					else
						count=1;
				}
				if(a[c][d]==a[c-1][d+1])
				{
					count++;
					if(a[c][d]==a[c-2][d+2])
						count++;
					else
						count=1;
				}
			}
			if(c==1)
			{
				if(a[c][d]==a[c+1][d])
				{
					count++;
					if(a[c][d]==a[c-1][d])
						count++;
					else
						count=1;
				}
				if(a[c][d]==a[c][d+1])
				{
					count++;
					if(a[c][d]==a[c][d+2])
						count++;
					else
						count=1;
				}
			}
		}
		if(d==2)
		{
			if(c==0)
			{
				if(a[c][d]==a[c][d-1])
				{
					count++;
					if(a[c][d]==a[c][d-2])
					{
						count++;
					}
					else
						count=1;
				}
				if(a[c][d]==a[c+1][d])
				{
					count++;
					if(a[c][d]==a[c+2][d])
					{
						count++;
					}
					else
						count=1;
				}
				if(a[c][d]==a[c+1][d-1])
				{
					count++;
					if(a[c][d]==a[c+2][d-2])
					{
						count++;
					}
					else
						count=1;
				}
			}
			if(c==2)
			{
				if(a[c][d]==a[c][d-1])
				{
					count++;
					if(a[c][d]==a[c][d-2])
					{
						count++;
					}
					else
						count=1;
				}
				if(a[c][d]==a[c-1][d])
				{
					count++;
					if(a[c][d]==a[c-2][d])
					{
						count++;
					}
					else
						count=1;
				}
				if(a[c][d]==a[c-1][d-1])
				{
					count++;
					if(a[c][d]==a[c-2][d-2])
					{
						count++;
					}
					else
						count=1;
				}
			}
			if(c==1)
			{
				if(a[c][d]==a[c+1][d])
				{
					count++;
					if(a[c][d]==a[c-1][d])
						count++;
					else
						count=1;
				}
				if(a[c][d]==a[c][d-1])
				{
					count++;
					if(a[c][d]==a[c][d-2])
						count++;
					else
						count=1;
				}
			}
		}
		if(d==1)
		{
			if(c==0)
			{
				if(a[c][d]==a[c+1][d])
				{
					count++;
					if(a[c][d]==a[c+2][d])
						count++;
					else
						count=1;
				}
				if(a[c][d]==a[c][d-1])
				{
					count++;
					if(a[c][d]==a[c][d+1])
						count++;
					else
						count=1;
				}
			}
			if(c==2)
			{
				if(a[c][d]==a[c-2][d])
				{
					count++;
					if(a[c][d]==a[c-1][d])
						count++;
					else
						count=1;
				}
				if(a[c][d]==a[c][d-1])
				{
					count++;
					if(a[c][d]==a[c][d+1])
						count++;
					else
						count=1;
				}
			}
			if(c==1)
			{
				if(a[c][d]==a[c-1][d])
				{
					count++;
					if(a[c][d]==a[c+1][d])
						count++;
					else
						count=1;
				}
				if(a[c][d]==a[c][d-1])
				{
					count++;
					if(a[c][d]==a[c][d+1])
						count++;
					else
						count=1;
				}
				if(a[c][d]==a[c-1][d-1])
				{
					count++;
					if(a[c][d]==a[c+1][d+1])
						count++;
					else
						count=1;
				}
				if(a[c][d]==a[c+1][d-1])
				{
					count++;
					if(a[c][d]==a[c-1][d+1])
						count++;
					else
						count=1;
				}
			}
		}
		if(count==3)
			return(1);
		else
		{
			return(0);
		       //	count=0;
		}
	}
	int checka()
	{
		int r=0,x,f=0;
		for( ;r<3;r++)
		{
			for(x=0;x<3;x++)
			{
				if(a[r][x]==0)
					f++;
			}
		}
		if(f==0)
			return(0);
		else
			return(1);
	}
};
void print(int i,int j,char r)
{
	if(e[i][j]==' ')
		e[i][j]=r;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<e[i][j]<<" |";
		cout<<"\n";
	}
}
void print1()
{
	int i=0,j=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<i<<j<<"|";
		cout<<"\n";
	}
}
void main()
{
	int x,y,z,i,j;
	char r;
	toe s;
	clrscr();
	print1();
	print(0,0,' ');
	cout<<"enter the choice x/o:";
	cin>>r;
	if(r=='x')
		x=1;
	else if (r=='o')
		x=2;
	goto b;
	a:
	if(x==1)
	{
		x=2;
		r='o';
	}
	else if(x==2)
	{
		x=1;
		r='x';
	}
	r:
	b:
	if(s.checka())
	{
		cout<<"enter the postion:\n" ;
		cin>>i>>j;
		clrscr();
		print1();
		print(i,j,r);
		if(s.a[i][j]!=0)
		{
			cout<<"value already exists\ny";
			goto r;
		}
		y=s.check(i,j,x);
		if(y==1)
			cout<<"game won by "<<r;
		else
			goto a;
	}
	else
		cout<<"game draw";
	getch();
}










