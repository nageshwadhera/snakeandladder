#include <graphics.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
/* the names of the fill styles supported */
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int i,j,k,x,y=0,p1,p2,s1=0,s2=0;
   char nw[2],nk[2],rd;
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
	 for(i=40,k=1;i<=400,k<=10;i=i+40,k++)
	 {
	setcolor(15);
	for(j=40;j<=400;j=j+40)
	{
		rectangle(i,j,40+i,40+j);
	}
	 }
	 setcolor(15);
	 /*ladder*/
	 arc(305,418,270,90,3);
	 ellipse(290,415,0,180,15,6);
	 ellipse(290,420,0,180,15,6);
	 ellipse(255,415,180,360,20,5);
	 ellipse(255,420,180,360,20,5);
	 ellipse(210,415,0,180,25,5);
	 ellipse(210,420,0,180,25,5);
	 ellipse(185,410,90,230,5,10);
	 ellipse(188,410,150,230,5,15);
	 /*snake*/
	 for(x=0;x<=200;x=x+225)
	 {
		arc(120+x,110+y,10,85,60);
		arc(258+x,85+y,190,240,80);
		arc(112+x,118+y,10,80,60);
		arc(250+x,93+y,190,290,80);
		arc(275+x,100+y,250,270,70);
		line(250+x,170+y,250+x,165+y);
		line(250+x,165+y,230+x,160+y);
		line(230+x,160+y,218+x,155+y);
		line(130+x,50+y,115+x,47+y);
		line(121+x,59+y,106+x,52+y);
		line(106+x,52+y,114+x,48+y);
		circle(114+x,52+y,1);
	 }
	 /*snake2*/
	 arc(280,70,100,160,30);
	 arc(280,78,100,170,30);
	 delay(1000);
	 while(s1<=100||s2<=100)
	 {
	for(x=1;x<=10;x++)
	{
		p1=random(6);
	}
	for(x=5;x<=10;x++)
	{
		p2=random(6);
	}
		sprintf(nw,"%d",p1+1);
		sprintf(nk,"%d",p2+1);
		s1=p1+s1;
		s2=p2+s2;
		settextstyle(0,0,1);
		outtextxy(460,10,"Player1");
		outtextxy(460,20+y,nw);
		outtextxy(550,10,"Player2");
		outtextxy(550,20+y,nk);
		y=y+10;
		/*player*/
		circle(20,420,10);
		setfillstyle(7,3);
		floodfill(21,419,15);
		xy:
		flushall();
		rd=getch();
		if(rd!='\r')
		{
			if(rd=='e')
			goto abc;
			 goto xy;
				 }
		}
	 abc:
	 delay(100);
	 if(s1>=100)
	 {
		printf("s1 is winner");
	 }
	 else if(s2>=100)
	 {
		printf("s2 is winner");
	 }
	 else
	 {
		printf("exit forcefully");
	 }
	 line(460,20,605,20);
	 line(530,10,530,480);
	 delay(1000);
	 getch();
	 closegraph();
	 return 0;
}