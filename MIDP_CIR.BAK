#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

int main()
{
	float p;
	int i,gd,gm,x,y,r;

	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TurboC3\\bgi");

	cout<<"Enter the radius of the circle:"<<endl;
	cin>>r;

	x=0;
	y=r;
	p=1.25-r;

	do
	{
		putpixel(200+x,200+y,1);
		putpixel(200+y,200+x,2);
		putpixel(200+x,200-y,3);
		putpixel(200+y,200-x,4);
		putpixel(200-x,200-y,5);
		putpixel(200-x,200+y,6);
		putpixel(200-y,200+x,7);
		putpixel(200-y,200-x,8);

		if(p<0)
		{
			x=x+1;
			y=y;
			p=p+2*x+1;
		}
		else
		{
			x=x+1;
			y=y-1;
			p=p+2*(x-y)+1;
		}
		delay(100);
	}
	while(x<y);


	getch();
	closegraph();
}