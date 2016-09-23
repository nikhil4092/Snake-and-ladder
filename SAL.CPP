
#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <time.h>
#include <math.h>

void ladder1();void ladder2();void ladder3();void ladder4();void ladder5();void ladder6();
void snakes();void pawns();void movement1();void movesnake();void board();void movement2();
void movesnake2();void program();void intro();void welcome();
int x=30,y=400,x2=50,y2=400;
int flagcheck=0;
int quit;
int quit2;
int flag13=0;
int flag12=0;
int flag11=0;
int flag7=0;
int flag8=0;
int flag9=0;
int flag10=0;
    int flag5=0;
    int flag1=0;
    int flag2=0;
    int flag3=0;
    int flag21=0;
    int flag22=0;
    int flag23=0;
    int r=0,r2=0;
    char dice[1][10];
    char ch[64][4]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46","47","48","49","50","51","52","53","54","55","56","57","58","59","60","61","62","63","64"};
    int posx[]={180,430,80,330,280,130};
    int posy[]={400,345,290,290,125,70};
    int posx2[]={200,450,100,350,300,150};
    int ctrlx=0,ctrly=0;
    void *bla=malloc(1000);
    void *bla2=malloc(1000);
    void *bla3=malloc(1000);
    void *bla5=malloc(10000);

int main()
{
     /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "F:\tc\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */

   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

  welcome();
  intro();
  return 0;
}
   void welcome()
{  int z,k,x[10],y[10];
    int xi3=0;
    setcolor(4);
    for(int xi2=500;xi2>250;xi2--)
    {

	setcolor(xi2);
	outtextxy(xi2-20,10,"Game starts now......");
	outtextxy(xi2,60,"Game starts now......");
	outtextxy(xi2-20,110,"Game starts now......");
	outtextxy(xi2,160,"Game starts now......");
	outtextxy(xi2-20,210,"Game starts now......");
	outtextxy(xi2,260,"Game starts now......");
	outtextxy(xi2-20,310,"Game starts now......");
	outtextxy(xi2,360,"Game starts now......");
	outtextxy(xi2-20,410,"Game starts now......");
	outtextxy(xi2,460,"Game starts now......");
	outtextxy(xi3+20,35,"Game starts now......");
	outtextxy(xi3,85,"Game starts now......");
	outtextxy(xi3+20,135,"Game starts now......");
	outtextxy(xi3,185,"Game starts now......");
	outtextxy(xi3+20,235,"Game starts now......");
	outtextxy(xi3,285,"Game starts now......");
	outtextxy(xi3+20,335,"Game starts now......");
	outtextxy(xi3,385,"Game starts now......");
	outtextxy(xi3+20,435,"Game starts now......");
	outtextxy(xi3,485,"Game starts now......");
	delay(1);
	cleardevice();
	xi3++;
    }

    setcolor(10);
  for(int d=0;d<3;d++)
  {  int   x_center = 90, y_center = 90, rad = 80;     //crystal
    for (int i=0;i<10;i++)
    {  setcolor(i);
       x[i]=(x_center+d*200)+rad*cos(36*i*3.14159/180);
       y[i]=(y_center)+rad*sin(36*i*3.14159/180);
    }

    int count=1;
    for (i=0;i<10;i++)
    for (k=0;k<10;k++)

		   {	if(count%16==0)
			count++;
			setcolor(count);
			delay(10);
			line(x[i],y[i],x[k],y[k]);
			count++;
		   }
  }
  for(d=0;d<2;d++)
  {  int  x_center = 140, y_center = 90, rad = 80;     //crystal
    for (int i=0;i<10;i++)
    {  setcolor(i);
       x[i]=(x_center+d*300)+rad*cos(36*i*3.14159/180);
       y[i]=(y_center+150)+rad*sin(36*i*3.14159/180);
    }

    int count=1;
    for (i=0;i<10;i++)
    for (k=0;k<10;k++)

		   {	if(count%16==0)
			count++;
			setcolor(count);
			delay(10);
			line(x[i],y[i],x[k],y[k]);
			count++;
		   }
  }
  for(d=0;d<3;d++)
  {  int   x_center = 90, y_center = 90, rad = 80;     //crystal
    for (int i=0;i<10;i++)
    {  setcolor(i);
       x[i]=(x_center+d*200)+rad*cos(36*i*3.14159/180);
       y[i]=(y_center+300)+rad*sin(36*i*3.14159/180);
    }

    int count=1;
    for (i=0;i<10;i++)
    for (k=0;k<10;k++)

		   {	if(count%16==0)
			count++;
			setcolor(count);
			delay(10);
			line(x[i],y[i],x[k],y[k]);
			count++;
		   }
  }

   setcolor(199);
   for(int h=0;h<500;h++)               //bar3d
   {

       setfillstyle(random(12),random(15) );
       bar3d(random(540),random(480),random(640),random(480),random(530),random(518));
   }

   cleardevice();


    xi3=0;
    setcolor(4);
    for(xi2=500;xi2>250;xi2--)
    {

	setcolor(xi2);
	outtextxy(xi2-20,10,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi2,60,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi2-20,110,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi2,160,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi2-20,210,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi2,260,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi2-20,310,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi2,360,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi2-20,410,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi2,460,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi3+20,35,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi3,85,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi3+20,135,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi3,185,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi3+20,235,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi3,285,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi3+20,335,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi3,385,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi3+20,435,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(xi3,485,"WELCOME TO SNAKES AND LADDERS");
	delay(1);
	cleardevice();
	xi3++;
    }
  delay(500);

  setcolor(getmaxcolor());
  setfillstyle(1,getmaxcolor());

}
void intro()

  { int flag9=0;
    int flag10=0;
    int xmax=getmaxx();
    int ymax=getmaxy();
  for(;;)
    {
	setfillstyle(1,getmaxcolor());
	rectangle(1,1,xmax,10);
	floodfill(2,5,15);
	rectangle(xmax-10,1,xmax,ymax);
	floodfill(xmax-1,15,15);
	rectangle(1,ymax-10,xmax,ymax);
	floodfill(2,ymax-5,15);
	rectangle(1,1,10,ymax);
	floodfill(3,50,15);
	setfillstyle(1,getmaxcolor());
	outtextxy(220,15,"WELCOME TO SNAKES AND LADDERS");
	outtextxy(220,20,"-----------------------------");
	outtextxy(40,30,"MENU");
	outtextxy(40,35,"----");
	rectangle(40,60,50,70);
	setfillstyle(6,5);
	floodfill(41,61,15);
	outtextxy(55,60,"P-PLAY");
	rectangle(40,90,50,100);
	setfillstyle(9,2);
	floodfill(41,91,15);
	outtextxy(55,90,"C-CREDITS");
	rectangle(40,120,50,130);
	setfillstyle(11,3);
	floodfill(41,121,15);
	outtextxy(55,120,"E-EXIT");
	rectangle(40,150,50,160);
	setfillstyle(9,4);
	floodfill(41,151,15);
	outtextxy(55,150,"H-HELP");
  if(flag5==1)
   {	rectangle(40,180,50,190);
	setfillstyle(6,7);
	floodfill(41,181,15);
	outtextxy(55,180,"R-RESUME");}
   int count=0;
   int k2=1;
   for(int i2=1;i2<=8;i2++)
   for(int j=1;j<=8;j++)
   {

	if(count%2==0)
	setfillstyle(1,GREEN);
	else
	setfillstyle(1,RED);
	if(k2%16==0)
	k2++;
	bar(120+j*40,60+i2*40,160+j*40,(100+i2*40));
	k2++;delay(10);
	count++;
	if(j==8)
	count=count+1;
   }
   setcolor(getmaxcolor());
   setfillstyle(1,getmaxcolor());
 flag11=0;
 while(flag11!=1)
 {  int ch=getch();
   if(ch=='p'||ch=='P')
   {  cleardevice();
      setcolor(13);

 setcolor(BLUE);
 rectangle(119,199,421,231);
 rectangle(118,198,422,230);
 for(int i4=120;i4<420;i4++)
 {
  if(i4%2==0)
  {
    setcolor(4);
    outtextxy(268,160,"LOADING");
  }
  else
  {
    setcolor(0);
    outtextxy(268,160,"LOADING");
  }
  setcolor(4);

  line(i4,200,i4,230);
  delay(20);
}
  cleardevice();


     flag11=1;
     x=30,y=400,x2=50,y2=400;
     flag1=0;
     flag2=0;
     flag3=0;
     flag21=0;
     flag22=0;
     flag23=0;
     r=0,r2=0;
     flag5=1;
     cleardevice();
     program();
     break;
   }
   else if(ch=='E'||ch=='e')
   {
	flag11=1;
	setcolor(BLUE);
	rectangle(200,200,470,300);
	setcolor(getmaxcolor());
	setfillstyle(1,1);
	floodfill(230,240,1);
	setfillstyle(1,getmaxcolor());
	outtextxy(250,250,"DO U WANT TO QUIT?(Y/N)");
      do
      {
	quit2=getch();
	if(quit2=='y'||quit2=='Y')
       {
		flag9=1;
		cleardevice();
		outtextxy(250,250,"THANK YOU :D");
		delay(800);
		exit(0);
       }
   else if(quit2=='n'||quit2=='N')
   {
     flag9=1;
     cleardevice();
     intro();
   }
   }while(flag9!=1);
 }

  else if(ch=='c'||ch=='C')
  {
   flag11=1;
   for(int xi2=500;xi2>4;xi2--)
    {
	setcolor(xi2);
	outtextxy(xi2+30,230,"DONE BY");
	outtextxy(xi2,240,"NIKHIL AND RAMA");
	outtextxy(xi2+30,250,"GUIDED BY");
	outtextxy(xi2+20,260,"MRS.M ARUNA");
	delay(5);
	cleardevice();
    }

    delay(1);

  setcolor(getmaxcolor());
  intro();
  }
  else if(ch=='h'||ch=='H')
  { flag11=1;
    int ch2;
    cleardevice();
    outtextxy(10,10,"INSTRUCTIONS");
    outtextxy(10,30,"1.The objective of the game is to get the coins to the last block");
    outtextxy(10,50,"2.You can move it by simply rolling the dice");
    outtextxy(10,70,"3.Wen you encounter ladders you go upto the ending of the ladder");
    outtextxy(10,90,"4.Wen you encounter a snake you go down to the tail");
    outtextxy(10,110,"* You can press the appropriate buttons as given, to run the program");
    outtextxy(10,130,"* The right bottom corner gives u the valuse of the dice roll");
    outtextxy(10,150,"* The Winner Box Gives You The Winner At The End Of The Game");
    outtextxy(10,170,"* The Keys To Be Used Are Given In The Game Screen");
    outtextxy(10,190,"* The pause and main menu options are available only after 1move for each coin");
    outtextxy(20,200,"is done or no moves are made");
    outtextxy(10,220,"CAUTION:-Dont press any button more than once!");
    outtextxy(10,250,"PRESS M FOR MAIN MENU");
    outtextxy(10,270,"PRESS Q TO QUIT GAME");
    ch2=getch();

    if(ch2=='m'||ch2=='M')
    {

     cleardevice();
     intro();
    }

    if(ch2=='q'||ch2=='Q')
    {
	setcolor(BLUE);
	rectangle(200,200,470,300);
	setcolor(getmaxcolor());
	setfillstyle(1,1);
	floodfill(230,240,1);
	setfillstyle(1,getmaxcolor());
	outtextxy(250,250,"DO U WANT TO QUIT?(Y/N)");
     do
     {
	quit2=getch();
	if(quit2=='y'||quit2=='Y')
       {
		flag10=1;
		cleardevice();
		outtextxy(250,250,"THANK YOU :D");
		delay(800);
		exit(0);
       }
    else if(quit2=='n'||quit2=='N')
    {
	flag10=1;
	cleardevice();
	intro();
    }
   }while(flag10!=1);
  }

}

   if(flag5==1)
   { if(ch=='r'||ch=='R')
    {
     cleardevice();
     program();
    }
   }
  }
 }
}
void program()
{
   int flag,c;
   for(;;)
   { flag9=0;
     flag10=0;
     flag7=0;
     flag8=0;
     getimage(500,370,580,390,bla3);
     putimage(500,370,bla3,1);
     board();
     ladder1();
     ladder2();
     ladder3();
     ladder4();
     ladder5();
     ladder6();
     snakes();
     pawns();
    do
    {
     c=getch();
     if(c=='q')
     {
	flag7=1;
	setcolor(BLUE);
	rectangle(200,200,470,300);
	setcolor(getmaxcolor());
	setfillstyle(1,1);
	floodfill(230,240,1);
	setfillstyle(1,getmaxcolor());
	outtextxy(250,250,"DO U WANT TO QUIT?(Y/N)");

      while(flag9!=1)
      {
	quit=getch();
	if(quit=='y'||quit=='Y')
	{flag9=1;
	exit(0);}

	else if(quit=='n'||quit=='N')
	{flag9=1;
	program();}
       }

     }
   if(c=='R')
   {
	flag7=1;
	cleardevice();
	x=30,y=400,x2=50,y2=400;
	flag1=0;
	flag2=0;
	flag3=0;
	flag21=0;
	flag22=0;
	flag23=0;
	r=0,r2=0;
	program();
   }
   if(c=='m'||c=='M')
  {
     flag7=1;
     flag5=0;
     x=30,y=400,x2=50,y2=400;
     flag1=0;
     flag2=0;
     flag3=0;
     flag21=0;
     flag22=0;
     flag23=0;
     r=0,r2=0;
     cleardevice();
     intro();
  }
  if(c=='p')
  {
   flag7=1;
   cleardevice();
   intro();
  }
   if(c=='r')
   {
       flag7=1;
       srand(time(NULL));
      r=(rand()%6)+1;
      switch(r)
    {
      case 1:outtextxy(520,380,"1");break;
      case 2:outtextxy(520,380,"2");break;
      case 3:outtextxy(520,380,"3");break;
      case 4:outtextxy(520,380,"4");break;
      case 5:outtextxy(520,380,"5");break;
      case 6:outtextxy(520,380,"6");break;
    }

      delay(800);
      movement1();

    if((x==posx[0])&&(y==posy[0]))
      {delay(800);
      r=10;
      movement1();
      }
    if((x==posx[1])&&(y==posy[1]))
      { delay(800);
      r=14;
      movement1();
      }
    if((x==posx[2])&&(y==posy[2]))
      {delay(800);
      r=15;
      movement1();
      }
    if((x==posx[3])&&(y==posy[3]))
      { delay(800);
      r=15;
      movement1();
      }
    if((x==posx[4])&&(y==posy[4]))
      {delay(800);
      r=10;
      movement1();
      }
    if((x==posx[5])&&(y==posy[5]))
      {delay(800);
      r=13;
      movement1();
      }
    if((x==230)&&(y==235))
      {delay(800);
      r=26;
      movesnake();
      }if((x==80)&&(y==180))
      {delay(800);
      r=32;
      movesnake();
      }if((x==430)&&(y==70))
      {delay(800);
      r=19;
      movesnake();
      }
      if((x==80)&&(y==15))
      {delay(800);
      r=13;
      movesnake();
      }
    }

   }while(flag7!=1);
   putimage(510,90,bla5,1);
  do
  {
   c=getch();
   if(c=='q')
    {   flag8=1;
	setcolor(BLUE);
	rectangle(200,200,470,300);
	setcolor(getmaxcolor());
	setfillstyle(1,1);
	floodfill(230,240,1);
	setfillstyle(1,getmaxcolor());
	outtextxy(250,250,"DO U WANT TO QUIT?(Y/N)");
     while(flag10!=1)
     {
	quit=getch();
	if(quit=='y'||quit=='Y')
	{flag10=1;exit(0);}
	else if(quit=='n'||quit=='N')
	{flag10=1;program();}

      }
 }
   if(c=='R')
   { flag8=1;
     cleardevice();
     x=30,y=400,x2=50,y2=400;
     flag1=0;
     flag2=0;
     flag3=0;
     flag21=0;
     flag22=0;
     flag23=0;
     r=0,r2=0;
     program();
   }

   else if(c=='r')
  {    flag8=1;
       srand(time(NULL));
       r2=(rand()%6)+1;
       switch(r2)
    {
      case 1:outtextxy(570,380,"1");break;
      case 2:outtextxy(570,380,"2");break;
      case 3:outtextxy(570,380,"3");break;
      case 4:outtextxy(570,380,"4");break;
      case 5:outtextxy(570,380,"5");break;
      case 6:outtextxy(570,380,"6");break;
    }

      delay(800);
      movement2();
    if((x2==posx2[0])&&(y2==posy[0]))
      {delay(800);
      r2=10;
      movement2();
      }
    if((x2==posx2[1])&&(y2==posy[1]))
      {delay(800);
      r2=14;
      movement2();
      }
    if((x2==posx2[2])&&(y2==posy[2]))
      {delay(800);
      r2=15;
      movement2();
      }
    if((x2==posx2[3])&&(y2==posy[3]))
      {delay(800);
      r2=15;
      movement2();
      }
    if((x2==posx2[4])&&(y2==posy[4]))
      {delay(800);
      r2=10;
      movement2();
      }
    if((x2==posx2[5])&&(y2==posy[5]))
      {delay(800);
      r2=13;
      movement2();
      }
    if((x2==250)&&(y2==235))
      {delay(800);
      r2=26;
      movesnake2();
      }
      if((x2==100)&&(y2==180))
      {delay(800);
      r2=32;
      movesnake2();
      }
      if((x2==450)&&(y2==70))
      {delay(800);
      r2=19;
      movesnake2();
      }
      if((x2==100)&&(y2==15))
      {delay(800);
      r2=13;
      movesnake2();
      }
     }
    }while(flag8!=1);
     delay(100);

   if((x==30)&&(y==15))
   {
	putimage(520,320,bla,1);
	outtextxy(530,325,"-YOU WIN");
	delay(300);
	setcolor(BLUE);
	rectangle(200,200,470,300);
	setcolor(getmaxcolor());
	setfillstyle(1,1);
	floodfill(230,240,1);
	setfillstyle(1,getmaxcolor());
	outtextxy(210,210,"M-MENU");
	outtextxy(210,230,"P-PLAY AGAIN");
	outtextxy(210,250,"Q-QUIT");
  while(flag12!=1)
 {	int op=getch();
	if(op=='m'||op=='M')
	{       flag12=1;
		flag5=0;
		cleardevice();
		x=30,y=400,x2=50,y2=400;
		flag1=0;
		flag2=0;
		flag3=0;
		flag21=0;
		flag22=0;
		flag23=0;
		r=0,r2=0;
		intro();
	}
   if(op=='p'||op=='P')
   { flag12=1;
   cleardevice();
      setcolor(13);

 setcolor(BLUE);
 rectangle(119,199,421,231);
 rectangle(118,198,422,230);
 for(int i4=120;i4<420;i4++)
 {
  if(i4%2==0)
  {
    setcolor(4);
    outtextxy(268,160,"LOADING");
  }
  else
  {
    setcolor(0);
    outtextxy(268,160,"LOADING");
  }
  setcolor(4);

  line(i4,200,i4,230);
  delay(20);
}
  cleardevice();
     cleardevice();
     x=30,y=400,x2=50,y2=400;
     flag1=0;
     flag2=0;
     flag3=0;
     flag21=0;
     flag22=0;
     flag23=0;
     r=0,r2=0;
     program();
   }
   else if(op=='q'||op=='Q')
     {
     flag12=1;
     cleardevice();
     outtextxy(250,250,"THANK YOU :D");
     delay(600);
     exit(0);
     }
}
}

   if((x2==50)&&(y2==15))
   {
	putimage(520,320,bla2,1);
	outtextxy(530,325,"-YOU WIN");
	delay(300);
	setcolor(BLUE);
	rectangle(200,200,470,300);
	setcolor(getmaxcolor());
	setfillstyle(1,1);
	floodfill(230,240,1);
	setfillstyle(1,getmaxcolor());
	outtextxy(210,210,"M-MENU");
	outtextxy(210,230,"P-PLAY AGAIN");
	outtextxy(210,250,"Q-QUIT");
while(flag13!=1)
 {	int op=getch();
     if(op=='m'||op=='M')
     {  flag13=1;
	cleardevice();
	flag5=0;
	x=30,y=400,x2=50,y2=400;
	flag1=0;
	flag2=0;
	flag3=0;
	flag21=0;
	flag22=0;
	flag23=0;
	r=0,r2=0;
	intro();
     }
   if(op=='p'||op=='P')
     {  cleardevice();
	setcolor(13);

 setcolor(BLUE);
 rectangle(119,199,421,231);
 rectangle(118,198,422,230);
 for(int i4=120;i4<420;i4++)
 {
  if(i4%2==0)
  {
    setcolor(4);
    outtextxy(268,160,"LOADING");
  }
  else
  {
    setcolor(0);
    outtextxy(268,160,"LOADING");
  }
  setcolor(4);

  line(i4,200,i4,230);
  delay(20);
}
  cleardevice();
	flag13=1;
	cleardevice();
	x=30,y=400,x2=50,y2=400;
	flag1=0;
	flag2=0;
	flag3=0;
	flag21=0;
	flag22=0;
	flag23=0;
	r=0,r2=0;
	program();
     }
    else if(op=='q'||op=='Q')
     {
     flag13=1;
     cleardevice();
     outtextxy(250,250,"THANK YOU :D");
     delay(600);
     exit(0);
     }

   }
  };
}
}
void board()
{
   setcolor(getmaxcolor());
   rectangle(20,450,70,395);
   int poly1[8];
   poly1[0] = 20;        /* 1st vertex */
   poly1[1] = 450;

   poly1[2] = 70; /* 2nd */
   poly1[3] = 450;

   poly1[4] = 70; /* 3rd */
   poly1[5] = 395;

/*
   4th vertex. fillpoly automatically
   closes the polygon.
*/
   poly1[6] = 20;
   poly1[7] = 395;

   setfillstyle(1, 1);
   fillpoly(4, poly1);
   setcolor(3);
   setfillstyle(1,BLACK);
   floodfill(40,400,15);
   outtextxy(25,420,"START");
   setcolor(getmaxcolor());
   for(int i=0;i<9;i++)
   {
    line(70+50*i,10,70+i*50,450);
   }
    for(int j=0;j<9;j++)
   {
    line(70,10+j*55,470,10+j*55);
   }


   int poly[9];
   for(int k=0;k<8;k++)
{  for(int l=0;l<8;l++)
   {poly[0] = 70+k*50;

   poly[1] = 10+l*55;

   poly[2] = 120+k*50; /* 2nd */
   poly[3] = 10+l*55;

   poly[4] = 120+k*50; /* 3rd */
   poly[5] = 65+l*55;

   poly[6] = 70+k*50;
   poly[7] = 65+l*55;

   poly[8] = poly[0];
   poly[9] = poly[1];


      /* draw a filled polygon */
      if((l+k)%2==0)
      {
      setfillstyle(1, 2);
      fillpoly(4,poly);
      }
      if((l+k)%2!=0)
      {
      setfillstyle(1, 4);
      fillpoly(4,poly);
      }
   rectangle(20,10,70,65);
   setfillstyle(1,9);
   floodfill(21,11,15);
   setcolor(RED);
   outtextxy(22,15,"FINISH");
   setcolor(getmaxcolor());
   rectangle(480,10,490,450);
   setfillstyle(1,getmaxcolor());
   floodfill(485,60,15);
   rectangle(490,10,510,20);
   floodfill(491,11,15);
   outtextxy(513,10,"INSTRUCTIONS");
   rectangle(610,10,635,20);
   floodfill(611,11,15);
   rectangle(625,20,635,450);
   floodfill(626,21,15);
   rectangle(490,440,625,450);
   floodfill(491,441,15);
   outtextxy(510,30,"r-ROLL DICE");
   outtextxy(510,50,"q-QUIT");
   outtextxy(510,70,"R-RESET");
   outtextxy(510,90,"M-MAIN MENU");
   outtextxy(510,110,"p-PAUSE TO");
   outtextxy(520,120,"MAIN MENU");
   getimage(510,90,600,140,bla5);
   rectangle(490,350,520,360);
   floodfill(491,351,15);
   outtextxy(523,350,"DICE ROLL");
   rectangle(600,350,635,360);
   floodfill(611,351,15);
   rectangle(490,300,625,310);
   floodfill(491,301,15);
   outtextxy(530,289,"WINNER");
   outtextxy(500,370,"FIRST");
   outtextxy(550,370,"SECOND");
}}
     int count=0;
     int x=105;
     int y=395;

     for(int a=0;a<9;a++)
     { if(a%2==0)
       {
       for(int b=0;b<8;b++)
	{
	  x=105+(b*50);
	  y=395-(a*55);
	  outtextxy(x,y,ch[count++]);
	}
	}
	else
	{
	for(int b=0;b<8;b++)
	{
	  x=455-(b*50);
	  y=395-(a*55);
	  outtextxy(x,y,ch[count++]);
	}
	}
     }
}
void ladder1()
{
  line(190,430,240,370);
  line(210,430,260,370);
  line(195,425,215,425);
  line(203,415,223,415);
  line(212,405,232,405);
  line(228,385,248,385);
  line(235,375,255,375);
}
void ladder2()
{
  line(440,370,390,320);
  line(460,370,410,320);
  line(435,365,455,365);
  line(424,355,444,355);
  line(414,345,434,345);
  line(405,335,425,335);
  line(395,325,415,325);
}
void ladder3()
{
  line(110,320,110,260);
  line(90,320,90,260);
  line(90,310,110,310);
  line(90,300,110,300);
  line(90,290,110,290);
  line(90,280,110,280);
  line(90,270,110,270);
}
void ladder4()
{
  line(340,320,290,220);
  line(360,320,310,220);
  line(336,310,356,310);
  line(330,300,349,300);
  line(320,280,340,280);
  line(325,290,345,290);
  line(320,280,340,280);
  line(315,270,335,270);
  line(310,260,330,260);
  line(305,250,325,250);
  line(300,240,320,240);
  line(292,222,310,222);

}
void ladder5()
{
  line(135,80,135,50);
  line(155,80,155,50);
  line(135,75,155,75);
  line(135,55,155,55);
}
void ladder6()
{
  line(290,140,340,90);
  line(310,140,360,90);
  line(300,130,320,130);
  line(320,110,340,110);
  line(330,100,350,100);
}
void snakes()
{
/* SNAKE1 */
	arc(255,118,320,0,170);
	arc(265,118,305,0,170);
	line(384,229,361,260);
	line(425,120,429,105);
	line(428,105,435,120);
	line(428,105,429,100);
	circle(430,115,1);


   /* SNAKE2 */
	arc(130,220,150,180,40);
	arc(130,220,180,253,40);
	arc(105,328,273,80,70);
	arc(143,220,150,180,40);
	arc(143,215,180,230,40);
	arc(112,328,265,50,75);
	arc(80,354,45,72,115);
	line(102,400,104,402);
	line(102,400,107,399);
	line(95,200,110,185);
	line(110,185,109,200);
	line(110,185,111,182);
	circle(104,198,1);



     /* SNAKE3
		arc(120,110,10,85,60);
		arc(258,85,190,240,80);
		arc(112,118,10,80,60);
		arc(250,93,190,290,80);
		arc(275,100,250,270,70);
		line(250,165,230,160);
		line(230,160,218,155);
		line(130,50,115,47);
		line(121,59,106,52);
		line(106,52,114,48);
		circle(114,52,1);   */


     /* SNAKE4*/
		arc(245,340,10,85,60);
		arc(383,315,190,240,80);
		arc(237,348,10,80,60);
		arc(375,323,190,290,80);
		arc(400,330,250,270,70);
		line(375,395,355,390);
		line(355,390,343,385);
		line(255,280,240,277);
		line(246,289,231,282);
		line(231,282,239,278);
		circle(239,282,1);
}
void pawns()
{
	setfillstyle(5,4);
	rectangle(x,y,x+10,y+15);
	floodfill(x+5,y+10,15);
	setfillstyle(7,5);
	rectangle(x2,y2,x2+10,y2+15);
	floodfill(x2+5,y2+5,15);
	setcolor(getmaxcolor());

}
void movement1()
{

    getimage(x,y,x+10,y+15,bla);
    int c;
    int flag4=0;
    for(int i=0;i<r;i++)
    {
      if((x-(50*i)==30)&&(y==15))
	flag4=1;
    }
    if(flag4==0)
    {
    for(int k=0;k<r;k++)
    {
     flag1=0;
     if(flag3==0)
     {
      if(x==430)
	{
	  flag1=1;
	  flag2=1;
	  flag3=1;
	}
     }
     else
     {
     if(y==15)
     {
       if(x==30)
	{
	  flag1=1;
	  flag2=0;
	  flag3=0;
	}
     }
     else
     {
       if(x==80)
	{
	  flag1=1;
	  flag2=0;
	  flag3=0;
	}
     }
     }
     if(flag1==1)
     {
     for(int l=0;l<1;l++)
     {
       for( int j=0;j<55;j++)
	 {
	   putimage(x,y,bla,1);
	   y--;
	   putimage(x,y,bla,1);
	   delay(5);
	 }
     }
    }
    else if(flag1==0)
    {

      for(int i=0;i<50;i++)
      {
      putimage(x,y,bla,1);
      if(flag2==0)
	x++;
      else
	x--;
      putimage(x,y,bla,1);
      delay(5);
      }

    }
 }
}

}
void movesnake()
{
  {

    int c;
    int flag4=0;

    for(int i=0;i<r;i++)
    {
      if((x-(50*i)==30)&&(y==15))
	flag4=1;
    }
    if(flag4==0)
    {
    for(int k=0;k<r;k++)
    {
     flag1=0;
     if(flag3==0)
     {
      if(x==430)
	{
	  flag1=1;
	  flag2=1;
	  flag3=1;
	}
     }
     else
     {
     if(y==15)
     {
       if(x==30)
	{
	  flag1=1;
	  flag2=0;
	  flag3=0;
	}
     }
     else
     {
       if(x==80)
	{
	  flag1=1;
	  flag2=0;
	  flag3=0;
	}
     }
     }
     if(flag1==1)
     {
     for(int l=0;l<1;l++)
     {
       for( int j=0;j<55;j++)
	 {
	   putimage(x,y,bla,1);
	   y++;
	   putimage(x,y,bla,1);
	   delay(1);
	 }
     }
    }
    else if(flag1==0)
    {

      for(int i=0;i<50;i++)
      {
      putimage(x,y,bla,1);
      if(flag2==0)
	x++;
      else
	x--;
      putimage(x,y,bla,1);
      delay(1);
      }

    }
 }
}

}
}
void movement2()
{

getimage(x2,y2,x2+10,y2+15,bla2);

    int c;
    int flag4=0;

    for(int i=0;i<r2;i++)
    {
      if((x2-(50*i)==50)&&(y2==15))
	flag4=1;
    }
    if(flag4==0)
    {
    for(int k=0;k<r2;k++)
    {
     flag21=0;
     if(flag23==0)
     {
      if(x2==450)
	{
	  flag21=1;
	  flag22=1;
	  flag23=1;
	}
     }
     else
     {
     if(y2==15)
     {
       if(x2==50)
	{
	  flag21=1;
	  flag22=0;
	  flag23=0;
	}
     }
     else
     {
       if(x2==100)
	{
	  flag21=1;
	  flag22=0;
	  flag23=0;
	}
     }
     }
     if(flag21==1)
     {
     for(int l=0;l<1;l++)
     {
       for( int j=0;j<55;j++)
	 {
	   putimage(x2,y2,bla2,1);
	   y2--;
	   putimage(x2,y2,bla2,1);
	   delay(5);
	 }
     }
    }
    else if(flag21==0)
    {

      for(int i=0;i<50;i++)
      {
      putimage(x2,y2,bla2,1);
      if(flag22==0)
	x2++;
      else
	x2--;
      putimage(x2,y2,bla2,1);
      delay(5);
      }

    }
  }
 }

}
void movesnake2()
{
  {

    int c;
    int flag4=0;

    for(int i=0;i<r2;i++)
    {
      if((x2-(50*i)==50)&&(y2==15))
	flag4=1;
    }
    if(flag4==0)
    {
    for(int k=0;k<r2;k++)
    {
     flag21=0;
     if(flag23==0)
     {
      if(x2==450)
	{
	  flag21=1;
	  flag22=1;
	  flag23=1;
	}
     }
     else
     {
     if(y2==15)
     {
       if(x2==50)
	{
	  flag21=1;
	  flag22=0;
	  flag23=0;
	}
     }
     else
     {
       if(x2==100)
	{
	  flag21=1;
	  flag22=0;
	  flag23=0;
	}
     }
     }
     if(flag21==1)
     {
     for(int l=0;l<1;l++)
     {
       for( int j=0;j<55;j++)
	 {
	   putimage(x2,y2,bla2,1);
	   y2++;
	   putimage(x2,y2,bla2,1);
	   delay(1);
	 }
     }
    }
    else if(flag21==0)
    {

      for(int i=0;i<50;i++)
      {
      putimage(x2,y2,bla2,1);
      if(flag22==0)
	x2++;
      else
	x2--;
      putimage(x2,y2,bla2,1);
      delay(1);
      }

    }
  }
 }

 }
}
