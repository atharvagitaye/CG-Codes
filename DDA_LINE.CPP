#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

void main()
{
	int gdiver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\bgi");

	int maxx=getmaxx();
	int maxy=getmaxy();

	cout<<"x:"<<maxx<<" y:"<<maxy<<endl;

	int x1,y1,x2,y2;

	cout<<"Enter the value of x1:"<<endl;
	cin>>x1;

	cout<<"Enter the value of y1:"<<endl;
	cin>>y1;

	cout<<"Enter the value of x2:"<<endl;
	cin>>x2;

	cout<<"Enter the value of y2:"<<endl;
	cin>>y2;

	int dx=x2-x1;
	int dy=y2-y1;

	int length;

	if(dx>=dy)
	{
		length=dx;
	}
	else
	{
		length=dy;
	}

	dx=length;
	dy=length;

	cout<<" x | y | i "<<endl;

	for(int i=1;i<=length;i++)
	{
		delay(10);
		putpixel(x1+250,y1+250,i);
		cout<<" "<<x1<<" | "<<y1<<" | "<<i<<endl;

		x1=x1+dx;
		y1=y1+dx;
		}
		getch();
	}