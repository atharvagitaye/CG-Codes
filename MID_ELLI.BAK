#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

int main()
{
	long d1,d2,rx,ry,rxsq,rysq,tworxsq,tworysq,dx,dy;
	int i,gd,gm,x,y;

	cout<<"Enter the x radius of the ellipse:"<<endl;
	cin>>rx;

	cout<<"Enter the y radius of the ellipse:"<<endl;
	cin>>ry;

	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TurboC3\\bgi");

	rxsq=rx*rx;
	rysq=ry*ry;
	tworxsq=2*rxsq;
	tworysq=2*rysq;

	x=0;
	y=ry;
	d1=rysq-rxsq*ry+(0.25*rxsq);
	dx=tworysq*x;
	dy=tworxsq*y;

	do
	{
		putpixel(200+x,200+y,1);
		putpixel(200-x,200-y,2);
		putpixel(200+x,200-y,3);
		putpixel(200-x,200+y,4);

		if(d1<0)
		{
			x=x+1;
			y=y;
			dx=dx+tworysq;
			d1=d1+dx+rysq;
		}
		else
		{
			x=x+1;
			y=y-1;
			dx=dx+tworysq;
			dy=dy-tworxsq;
			d1=d1+dx-dy+rysq;
		}

		delay(100);
	}
	while(dx<dy);

	d2=rysq*(x+0.5)*(x+0.5)+rxsq*(y-1)*(y-1)-rxsq*rysq;

	do
	{
		putpixel(200+x,200+y,5);
		putpixel(200-x,200-y,6);
		putpixel(200+x,200-y,7);
		putpixel(200-x,200+y,8);

		if(d2>0)
		{
			x=x;

			y=y-1;
			dy=dy-tworxsq;
			d2=d2-dy+rxsq;
		}
		else
		{
			x=x+1;
			y=y-1;
			dy=dy-tworxsq;
			dx=dx+tworysq;
			d2=d2+dx-dy+rxsq;
		}

		delay(100);
	}
	while(y>=0);

	getch();
	closegraph();

	return 0;
}