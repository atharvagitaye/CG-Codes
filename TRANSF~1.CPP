#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<conio.h>

int main()
{       int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TurboC3\\bgi");

	int s,i,j,k;
	float x1,y1,x2,y2,tx,ty,sx,sy,rd,r;
	float a[3][3];

	cout<<"Enter x1:"<<endl;
	cin>>x1;
	cout<<"Enter y1:"<<endl;
	cin>>y1;
	cout<<"Enter x2:"<<endl;
	cin>>x2;
	cout<<"Enter y2:"<<endl;
	cin>>y2;

	a[0][0]=x1;
	a[0][1]=y1;
	a[0][2]=1;
	a[1][0]=x2;
	a[1][1]=y2;
	a[1][2]=1;
	a[2][0]=0;
	a[2][1]=0;
	a[2][2]=1;

	line(200+a[0][0],200+a[0][1],200+a[1][0],200+a[1][1]);
	getch();

	cout<<endl<<"1.Transition"<<endl;
	cout<<"2.Rotation"<<endl;
	cout<<"3.Scaling"<<endl;
	cout<<"4.Exit"<<endl<<endl;

	cout<<"Enter your choice:"<<endl;
	cin>>s;

	switch(s)
	{
		case 1:cout<<endl<<"Transition"<<endl<<endl;

			cout<<"Enter how many units you want to shift in x direction:"<<endl;
			cin>>tx;
			cout<<"Enter how many units you want to shift in y direction:"<<endl;
			cin>>ty;

			float tm[3][3],ta[3][3];

			tm[0][0]=1;
			tm[0][1]=0;
			tm[0][2]=0;
			tm[1][0]=0;
			tm[1][1]=1;
			tm[1][2]=0;
			tm[2][0]=tx;
			tm[2][1]=ty;
			tm[2][2]=1;

			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					ta[i][j]=0;
					for(k=0;k<3;k++)
					{
						ta[i][j]+=a[i][k]*tm[k][j];
					}
				}
			}
			line(200+ta[0][0],200+ta[0][1],200+ta[1][0],200+ta[1][1]);

			break;

		case 2:	cout<<endl<<"Rotation"<<endl<<endl;

			float rm[3][3],ra[3][3];

			cout<<"Enter how many degree you want to rotate:"<<endl;
			cin>>rd;
			r=rd*3.14/180;

			rm[0][0]=cos(r);
			rm[0][1]=sin(r);
			rm[0][2]=0;
			rm[1][0]=-sin(r);
			rm[1][1]=cos(r);
			rm[1][2]=0;
			rm[2][0]=0;
			rm[2][1]=0;
			rm[2][2]=1;

			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					ra[i][j]=0;
					for(k=0;k<3;k++)
					{
						ra[i][j]+=a[i][k]*rm[k][j];
					}
				}
			}
			line(200+ra[0][0],200+ra[0][1],200+ra[1][0],200+ra[1][1]);

			break;



		case 3:	cout<<endl<<"Scaling"<<endl<<endl;

			float sm[3][3],sa[3][3];

			cout<<"Enter scaling vector for x:"<<endl;
			cin>>sx;
			cout<<"Enter scaling vector for y:"<<endl;
			cin>>sy;

			sm[0][0]=sx;
			sm[0][1]=0;
			sm[0][2]=0;
			sm[1][0]=0;
			sm[1][1]=sy;
			sm[1][2]=0;
			sm[2][0]=0;
			sm[2][1]=0;
			sm[2][2]=1;

			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					sa[i][j]=0;
					for(k=0;k<3;k++)
					{
						sa[i][j]+=a[i][k]*sm[k][j];
					}
				}
			}
			line(200+sa[0][0],200+sa[0][1],200+sa[1][0],200+sa[1][1]);

			break;

		case 4:	cout<<endl<<"Exiting"<<endl<<endl;
			break;

		default:cout<<endl<<"Wrong input"<<endl;
	}

	getch();
	return 0;
}