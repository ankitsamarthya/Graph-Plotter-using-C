#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
void udefault(void);
float a,b,c,d,e,i;
int main(void)
{

   int j,ch1,ch2,ch3,gdriver = DETECT, gmode, errorcode;
   char str[10];

   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   errorcode = graphresult();

   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   printf("MENU:\n\n1.Inverse Trignometric Functions\n2.Logarithmic Functions\n3.Algbraic Functions\n4.Trignometric Functions\n5.Exit");
   printf("\n\nEnter Your Choice:");
   input1:
   scanf("%d",&ch1);
   switch(ch1)
   {    case 1:
	printf("\n\nSUBMENU:\n\n1.a+arcSin(bx+c)\n2.a+arcCos(bx+c)\n3.a+arcTan(bx+c)\n4.a+arcCot(bx+c)\n5.a+arcSec(bx+c)\n6.a+arcCosec(bx+c)");
	printf("\n\nEnter Your Choice:");
	input3:
	scanf("%d",&ch2);
	switch(ch2)
	{
		case 1:
		printf("\n\nEnter the Value of a, b, c:");

		checkc1:
		scanf("%f%f%f",&a,&b,&c);
			if(b==0)
		{   if(c<=1&&c>=-1)
		{ 	setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{
				itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}
		for(i=-12;i<12;i+=0.0001){
		putpixel(30*i+320,-30*(a+asin(c))+240,15);}}
		else
		{
		printf("\nDomain Error Enter vaule of a, b, c Again:");
		goto checkc1;}}
		if(b!=0){
		setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{
				itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}


		{
		for(i=((-1-c)/b);i<=((1-c)/b);i+=0.0001)
		{
			putpixel(30*i+320,-30*(a+asin(b*i+c))+240,15);
		}}   }
		break;
		case 2:

		printf("\n\nEnter the Value of a, b, c:");

		checkc2:
		scanf("%f%f%f",&a,&b,&c);
			if(b==0)
		{   if(c<=1&&c>=-1)
		{ 	setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{
				itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}
		for(i=-12;i<12;i+=0.0001){
		putpixel(30*i+320,-30*(a+acos(c))+240,15);}}
		else
		{
		printf("\nDomain Error Enter vaule of a, b, c Again:");
		goto checkc2;}}
		if(b!=0){
		setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{
				itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}


		{
		for(i=((-1-c)/b);i<=((1-c)/b);i+=0.0001)
		{
			putpixel(30*i+320,-30*(a+acos(b*i+c))+240,15);
		}}   }
		break;



		case 3:
		printf("\n\nEnter the Value of a, b, c:");
		scanf("%f%f%f",&a,&b,&c);
		setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{	itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}
		for(i=-12;i<12;i+=0.0001)
		{
			putpixel(30*i+320,-30*(a+atan(b*i+c))+240,15);
		}
		break;
		case 4:
		printf("\n\nEnter the Value of a, b, c:");
		scanf("%f%f%f",&a,&b,&c);
		setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{	itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}
		 for(i=-12;i<12;i+=0.0001)
		 {
   putpixel(30*i+320,-30*(1.57-(a+atan(b*i+c)))+240,BLUE);
		  }
		break;
		case 5:

		printf("\n\nEnter the Value of a, b, c:");

		checkc3:
		scanf("%f%f%f",&a,&b,&c);
			if(b==0)
		{   if(c>=1||c<=-1)
		{ 	setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{
				itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}
		for(i=-12;i<12;i+=0.0001){
		putpixel(30*i+320,-30*(a+acos(1/c))+240,15);}}
		else
		{
		printf("\nDomain Error Enter vaule of a, b, c Again:");
		goto checkc3;}}
		if(b!=0){
		setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{
				itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}


		{


 for(i=-12;i<((-1-c)/b);i+=0.0001)
   putpixel(30*i+320,-30*(a+acos(1/((b*i)+c)))+240,WHITE);
   for(i=((1-c)/b);i<12;i+=0.0001)
   putpixel(30*i+320,-30*(a+acos(1/((b*i)+c)))+240,WHITE);


		}   }
		break;

		case 6:


		printf("\n\nEnter the Value of a, b, c:");

		checkc4:
		scanf("%f%f%f",&a,&b,&c);
			if(b==0)
		{   if(c>=1||c<=-1)
		{ 	setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{
				itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}
		for(i=-12;i<12;i+=0.0001){
		putpixel(30*i+320,-30*(a+asin(1/c))+240,15);}}
		else
		{
		printf("\nDomain Error Enter vaule of a, b, c Again:");
		goto checkc4;}}
		if(b!=0){
		setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{
				itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}


		{


 for(i=-12;i<((-1-c)/b);i+=0.0001)
   putpixel(30*i+320,-30*(a+asin(1/((b*i)+c)))+240,WHITE);
   for(i=((1-c)/b);i<12;i+=0.0001)
   putpixel(30*i+320,-30*(a+asin(1/((b*i)+c)))+240,WHITE);


		}   }
		break;

		default:
		udefault();
		goto input3;

	}
	break;
	case 4:
	printf("\n\nSUBMENU:\n\n1.a+Sin(bx+c)\n2.a+Cos(bx+c)\n3.a+Tan(bx+c)\n4.a+Cot(bx+c)\n5.a+Sec(bx+c)\n6.a+Cosec(bx+c)");
	printf("\n\nEnter Your Choice:");
	input2:
	scanf("%d",&ch2);
	switch(ch2)
	{
		case 1:
		printf("\n\nEnter the Value of a, b, c:");
		scanf("%f%f%f",&a,&b,&c);
		setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{
				itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}
		for(i=-12;i<12;i+=0.0001)
		{
			putpixel(30*i+320,-30*(a+sin(b*i+c))+240,15);
		}
		break;
		case 2:
		printf("\n\nEnter the Value of a, b, c:");
		scanf("%f%f%f",&a,&b,&c);
		setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{	itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}
		for(i=-12;i<12;i+=0.0001)
		{
			putpixel(30*i+320,-30*(a+cos(b*i+c))+240,15);
		}
		break;
		case 3:
		printf("\n\nEnter the Value of a, b, c:");
		scanf("%f%f%f",&a,&b,&c);
		setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{	itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}
		for(i=-12;i<12;i+=0.0001)
		{
			putpixel(30*i+320,-30*(a+tan(b*i+c))+240,15);
		}
		break;
		case 4:
		printf("\n\nEnter the Value of a, b, c:");
		scanf("%f%f%f",&a,&b,&c);
		setfillstyle(1,0);
		bar(0,0,640,480);
		setcolor(GREEN);
		for(i=0;i<=640;i+=30)
		line(0,i,640,i);
		for(i=0;i<=640;i+=30)
		line(i-10,0,i-10,480);
		setcolor(15);
		line(320,0,320,480);
		line(0,240,640,240);
		for(i=0,j=-10;i<640;i+=30,j++)
		{
			itoa(j,str,10);
			outtextxy(i+10,246,str);
		}
		for(i=0,j=8;i<480;i+=30,j--)
		{       if(j==0)
			continue;
			if(j<0)
			{
				itoa(j,str,10);
				outtextxy(304,i,str);
			}
			else
			{	itoa(j,str,10);
				outtextxy(312,i,str);
			}
		}
		for(i=-12;i<12;i+=0.0001)
		{
			putpixel(30*i+320,-30*(a+(1/(tan(b*i+c))))+240,15);
		}
		break;
		case 5:
			printf("\n\nEnter the Value of a, b, c:");
scanf("%f%f%f",&a,&b,&c);
 setfillstyle(1,0);
bar(0,0,640,480);
 setcolor(GREEN);
   for(i=0;i<=640;i+=30)
   line(0,i,640,i);
   for(i=0;i<=640;i+=30)
   line(i-10,0,i-10,480);
   setcolor(15);
   line(320,0,320,480);
   line(0,240,640,240);
   for(i=0,j=-10;i<640;i+=30,j++)
   {
	itoa(j,str,10);
	outtextxy(i+10,246,str);}
	for(i=0,j=8;i<480;i+=30,j--)
	{       if(j==0)
	continue;

	if(j<0)
	{
	itoa(j,str,10);
	outtextxy(304,i,str);}
	else
	{itoa(j,str,10);
	outtextxy(312,i,str);
       }	}

for(i=-12;i<12;i+=0.0001)
{
putpixel(30*i+320,-30*(a+(1/(cos(b*i+c))))+240,15);
}
		break;
		case 6:
			printf("\n\nEnter the Value of a, b, c:");
scanf("%f%f%f",&a,&b,&c);
 setfillstyle(1,0);
bar(0,0,640,480);
 setcolor(GREEN);
   for(i=0;i<=640;i+=30)
   line(0,i,640,i);
   for(i=0;i<=640;i+=30)
   line(i-10,0,i-10,480);
   setcolor(15);
   line(320,0,320,480);
   line(0,240,640,240);
   for(i=0,j=-10;i<640;i+=30,j++)
   {
	itoa(j,str,10);
	outtextxy(i+10,246,str);}
	for(i=0,j=8;i<480;i+=30,j--)
	{       if(j==0)
	continue;

	if(j<0)
	{
	itoa(j,str,10);
	outtextxy(304,i,str);}
	else
	{itoa(j,str,10);
	outtextxy(312,i,str);
       }	}

for(i=-12;i<12;i+=0.0001)
{
putpixel(30*i+320,-30*(a+(1/(sin(b*i+c))))+240,15);
}
		break;
		default:
		udefault();
		goto input2;

	}
	break;
	case 2:printf("\n\nSUBMENU:\n\n1.Natural log\n2.User defined base");
	printf("\n\nEnter your choice:");
	input4:
	scanf("%d",&ch3);
	switch(ch3)
	{
	case 1:
	printf("\na+b*log(c*x+d)");
		printf("\n\nEnter the Value of a, b, c, d:");
checkd:
scanf("%f%f%f%f",&a,&b,&c,&d);
if(c<0||(c==0&&d<=0))
{printf("\nDomain Error Enter value of a, b, c, d again:");
 goto checkd;     }
 setfillstyle(1,0);
bar(0,0,640,480);
 setcolor(GREEN);
   for(i=0;i<=640;i+=30)
   line(0,i,640,i);
   for(i=0;i<=640;i+=30)
   line(i-10,0,i-10,480);
   setcolor(15);
   line(320,0,320,480);
   line(0,240,640,240);
   for(i=0,j=-10;i<640;i+=30,j++)
   {
	itoa(j,str,10);
	outtextxy(i+10,246,str);}
	for(i=0,j=8;i<480;i+=30,j--)
	{       if(j==0)
	continue;

	if(j<0)
	{
	itoa(j,str,10);
	outtextxy(304,i,str);}
	else
	{itoa(j,str,10);
	outtextxy(312,i,str);
       }	}
	if(c==0)
	{   for(i=-12;i<12;i+=0.0001)
{
putpixel(30*i+320,-30*(a+(b*log(d+0.0001)))+240,15);
}             }
else
{
for(i=(-d/c);i<12;i+=0.0001)
{
putpixel(30*i+320,-30*(a+(b*log((c*i)+d+0.0001)))+240,15);
}}
break;
case 2:	printf("\na+b*log(c*x+d)");
		printf("\n\nEnter the Value of a, b, c, d and base:");
checkbase:
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
if((c<0||(c==0&&d<=0))||e<=1)
{printf("\nDomain Error Enter value of a, b, c, d and base again:");
 goto checkbase;     }
 setfillstyle(1,0);
bar(0,0,640,480);
 setcolor(GREEN);
   for(i=0;i<=640;i+=30)
   line(0,i,640,i);
   for(i=0;i<=640;i+=30)
   line(i-10,0,i-10,480);
   setcolor(15);
   line(320,0,320,480);
   line(0,240,640,240);
   for(i=0,j=-10;i<640;i+=30,j++)
   {
	itoa(j,str,10);
	outtextxy(i+10,246,str);}
	for(i=0,j=8;i<480;i+=30,j--)
	{       if(j==0)
	continue;

	if(j<0)
	{
	itoa(j,str,10);
	outtextxy(304,i,str);}
	else
	{itoa(j,str,10);
	outtextxy(312,i,str);
       }	}
       if(c==0)
       {
for(i=-12;i<12;i+=0.0001)
{
putpixel(30*i+320,-30*(a+(b*((log(d+0.0001))/(log(e)))))+240,15);
}
    }
else
{
for(i=(-d/c);i<12;i+=0.0001)
{
putpixel(30*i+320,-30*(a+(b*((log((c*i)+d+0.0001))/(log(e)))))+240,15);
}}


break;
default:
udefault();
goto input4;
}
		break;


	case 3:
		printf("\nax^2+bx+c");
		printf("\n\nEnter the Value of a, b, c:");
scanf("%f%f%f",&a,&b,&c);
 setfillstyle(1,0);
bar(0,0,640,480);
 setcolor(GREEN);
   for(i=0;i<=640;i+=30)
   line(0,i,640,i);
   for(i=0;i<=640;i+=30)
   line(i-10,0,i-10,480);
   setcolor(15);
   line(320,0,320,480);
   line(0,240,640,240);
   for(i=0,j=-10;i<640;i+=30,j++)
   {
	itoa(j,str,10);
	outtextxy(i+10,246,str);}
	for(i=0,j=8;i<480;i+=30,j--)
	{       if(j==0)
	continue;

	if(j<0)
	{
	itoa(j,str,10);
	outtextxy(304,i,str);}
	else
	{itoa(j,str,10);
	outtextxy(312,i,str);
       }	}

for(i=-12;i<12;i+=0.0001)
{
putpixel(30*i+320,-30*((a*pow(i,2))+(b*i)+c)+240,15);
}
		break;
	case 5:
	exit(0);
	default:
	udefault();
	goto input1;

   }
   getch();
   closegraph();
   return 0;
}
void udefault(void)
{
printf("\n\nYou Have Entered a Wrong Choice\nEnter Your Choice Again:");
}                                                                    