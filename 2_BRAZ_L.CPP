#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<math.h>

int main()
{
	float x,y,x1,y1,x2,y2,dx,dy,e;
	int i,gd,gm;
	clrscr();

	cout<<"Enter the value of x1:"<<endl;
	cin>>x1;
	cout<<"Enter the value of y1:"<<endl;
	cin>>y1;
	cout<<"Enter the value of x2:"<<endl;
	cin>>x2;
	cout<<"Enter the value of y2:"<<endl;
	cin>>y2;

	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TURBOC3\\bgi");

	dx=abs(x2-x1);
	dy=abs(y2-y1);

	x=x1;
	y=y1;

	e=2*dy-dx;

	i=1;
	do
	{
		putpixel(x,y,15);
	       //
			while(e>=0)
			{
				y=y+1;
				e=e-2*dx;

			}
			cout<<x<<" "<<y<<endl;
		x=x+1;
		e=e+2*dy;
		i=i+1;
	}
	while(i<=dx);
	getch();
	closegraph();
	return 0;
}