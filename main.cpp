#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void man(int i);
void maan(int i);
void full();
void car();
void air();

int main()
{
int gd=DETECT,gm,i,j,x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 full();
 car();
	for(i=1;i<=600;i++)
	{
	
		line(0,400,700,400);
	   if(i%2==0)
	   {
	     man(i);
	   }
	   else
	   {
	     maan(i);
	   }
	   delay(100);
	   cleardevice();
	  }
  //getch();
  //closegraph();
air();

delay(15);
cleardevice();
}


void man(int i)
{
	full();
	
  circle(100+i,310,12);
  line(100+i,322,100+i,360);

    //legs
  line(100+i,360,90+i,400);
  line(100+i,360,110+i,400);

    //hands
  line(100+i,335,110+i,350);
  line(110+i,350,120+i,340);
  line(100+i,335,90+i,360);

    //flag
  line(120+i,200,120+i,390);

 	setcolor(GREEN);
	rectangle(120+i,200,190+i,245);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(121+i,201,GREEN);

setcolor(RED);
  circle(157+i,222,10);
  setfillstyle(1,RED);
  floodfill(157+i,222,RED);
  setcolor(WHITE);




}
void maan(int i)
{
	full();
	
  //man
  circle(100+i,310,12);
  line(100+i,322,100+i,360);

    //legs
  line(100+i,360,95+i,400);
  line(100+i,360,105+i,400);

    //hands
  line(100+i,335,110+i,350);
  line(110+i,350,120+i,340);
  line(100+i,335,98+i,360);

    //flag
  line(120+i,200,120+i,390);
  
  	setcolor(GREEN);
	rectangle(120+i,200,190+i,245);
	setfillstyle(1,GREEN);
	floodfill(121+i,201,GREEN);
  
 
  setcolor(RED);
  circle(157+i,222,10);
  setfillstyle(1,RED);
  floodfill(157+i,222,RED);
  setcolor(WHITE);

}

void full()
{
 //two line
 line(1,150,800,150);
 line(1,380,800,380);

 //1st mountain
 line(100,70,1,150);
 line(100,70,200,150);

 //2nd mountain
 line(300,70,200,150);
 line(300,70,400,150);

 //3rd mountain
 line(500,70,400,150);
 line(500,70,600,150);

 //void space
 line(600,150,700,1);

 //sun
 ellipse(200,130,20,160,50,50);
}

void car()
{
	int i;
	for(i=1;i<600;i++)
	{
	full();
	
	 line(100+i,350,100+i,370);
	 line(100+i,350,110+i,350);
	 line(110+i,350,130+i,325);
	 line(130+i,325,190+i,325);
	 line(190+i,325,210+i,350);
	 line(210+i,350,240+i,350);
	 line(240+i,350,240+i,370);
	
	 //adjust whele
	 line(100+i,370,110+i,370);
	 line(130+i,370,210+i,370);
	 line(230+i,370,240+i,370);
	
	 //middle window
	 line(120+i,350,135+i,330);
	 line(120+i,350,160+i,350);
	 line(160+i,350,160+i,330);
	 line(160+i,330,135+i,330);
	
	 //right window
	 line(165+i,350,165+i,330);
	 line(188+i,330,205+i,350);
	 line(165+i,350,205+i,350);
	 line(165+i,330,188+i,330);
	
	 circle(120+i,370,10);
	 circle(220+i,370,10);
	
	 //right whele
	 pieslice(120+i,370,0-i,1-i,10);
	
	 pieslice(120+i,370,90-i,91-i,10);
	
	 pieslice(120+i,370,180-i,181-i,10);
	
	 pieslice(120+i,370,270-i,271-i,10);
	
	 //right whele
	 pieslice(220+i,370,0-i,1-i,10);
	
	 pieslice(220+i,370,90-i,91-i,10);
	
	 pieslice(220+i,370,180-i,181-i,10);
	
	 pieslice(220+i,370,270-i,271-i,10);
	
	 delay(15);
	 cleardevice();
	}

}
void air(){
	
	int i;
	for(i=1;i<600;i++){
		setcolor(WHITE);
	full();		
		//head of heli
		setcolor(WHITE);
	ellipse(300+i,100,-90,-270,20,25);
	//up down line
	line(300+i,75,260+i,75);
	line(300+i,125,260+i,125);
	//back head of heli
	ellipse(260+i,100,90,130,20,25);
	ellipse(260+i,100,230,270,20,25);
	//back line
	line(150+i,100,247+i,120);
	line(150+i,100,247+i,80);
	//fan
	pieslice(150+i,100,0+i,2+i,25);
	pieslice(150+i,100,90+i,92+i,25);
	pieslice(150+i,100,180+i,182+i,25);
	pieslice(150+i,100,270+i,272+i,25);
	//down stand
	line(275+i,125,270+i,150);
	line(285+i,125,290+i,150);
	line(260+i,150,300+i,150);
	//up line(fan)
	line(280+i,50,280+i,75);
	line(260+i,50,300+i,50);
	//middle set
	line(290+i,85,290+i,110);
	line(290+i,110,310+i,110);
	setcolor(WHITE);
	line(220+i,200,260+i,130-3);
	line(330+i,200,307+i,130-4);

	
	  setcolor(GREEN);
	  rectangle(220+i,200,330+i,245);
	  setfillstyle(SOLID_FILL,GREEN);
	  floodfill(221+i,201,GREEN);
		
		
		
	 setcolor(RED);
	  circle(280+i,222,7);
	  setfillstyle(1,RED);
	  floodfill(277+i,222,RED);
	  
	  delay(15);
	 cleardevice();
	}
	
}

