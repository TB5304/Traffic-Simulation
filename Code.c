#include<stdio.h>
#include<graphics.h>
#include<dos.h>




void Structure(void)
{ 
  //Road Line Horizontal
  setcolor(WHITE);
  line(0,180,639,180);
  setcolor(WHITE);
  line(0,298,639,298);

  //Road Line Verticle
  setcolor(WHITE);
  line(255,0,255,639);
  setcolor(WHITE);
  line(375,0,375,639);

  //Midline Verticle
  setcolor(WHITE);
  line(315,0,315,639);
  //Midline Horizontal
  setcolor(WHITE);
  line(0,239,639,239);   
//Creating Pedestrial

  //left side
 {setcolor(WHITE);
  line(230,231,255,231);
  setcolor(WHITE);
  line(230,221,255,221);
  setcolor(WHITE);
  line(230,212,255,212);
   setcolor(WHITE);
  line(230,203,255,203);
   setcolor(WHITE);
  line(230,194,255,194);
   setcolor(WHITE);
  line(230,185,255,185);
  setcolor(WHITE);
  line(230,248,255,248);
  setcolor(WHITE);
  line(230,257,255,257);
  setcolor(WHITE);
  line(230,266,255,266);
   setcolor(WHITE);
  line(230,275,255,275);
   setcolor(WHITE);
  line(230,284,255,284);
   setcolor(WHITE);
  line(230,293,255,293);
 }
  //Creating Pedestrial For Right Side

 {  setcolor(WHITE);
  line(375,231,400,231);
  setcolor(WHITE);
  line(375,221,400,221);
  setcolor(WHITE);
  line(375,212,400,212);
   setcolor(WHITE);
  line(375,203,400,203);
   setcolor(WHITE);
  line(375,194,400,194);
   setcolor(WHITE);
  line(375,185,400,185);
  setcolor(WHITE);
  line(375,248,400,248);
  setcolor(WHITE);
  line(375,257,400,257);
  setcolor(WHITE);
  line(375,266,400,266);
   setcolor(WHITE);
  line(375,275,400,275);
   setcolor(WHITE);
  line(375,284,400,284);
   setcolor(WHITE);
  line(375,293,400,293);

 }

 //Pedestrial For Top

  setcolor(WHITE);
  line(306,160,306,180);
  setcolor(WHITE);
  line(297,160,297,180);
  setcolor(WHITE);
  line(288,160,288,180);
  setcolor(WHITE);
  line(279,160,279,180);
  setcolor(WHITE);
  line(270,160,270,180);
  setcolor(WHITE);
  line(261,160,261,180);


  setcolor(WHITE);
  line(324,160,324,180);
  setcolor(WHITE);
  line(333,160,333,180);
   setcolor(WHITE);
  line(342,160,342,180);
   setcolor(WHITE);
  line(351,160,351,180);
   setcolor(WHITE);
  line(360,160,360,180);
   setcolor(WHITE);
  line(369,160,369,180);



  //Pedestrial For Base
  setcolor(WHITE);
  line(306,298,306,318);
  setcolor(WHITE);
  line(297,298,297,318);
  setcolor(WHITE);
  line(288,298,288,318);
  setcolor(WHITE);
  line(279,298,279,318);
  setcolor(WHITE);
  line(270,298,270,318);
  setcolor(WHITE);
  line(261,298,261,318);


  setcolor(WHITE);
  line(324,298,324,318);
  setcolor(WHITE);
  line(333,298,333,318);
   setcolor(WHITE);
  line(342,298,342,318);
   setcolor(WHITE);
  line(351,298,351,318);
   setcolor(WHITE);
  line(360,298,360,318);
   setcolor(WHITE);
  line(369,298,369,318);
 //Creating Green Boxes As Public Stop
 //Top 
  setcolor(WHITE);
  rectangle(230,160,255,180);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(231,161,WHITE);
  
  setcolor(WHITE);
  rectangle(225,130,254,160);
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(231,159,WHITE);
  
  //Right Lamp
  setcolor(WHITE);
  rectangle(375,160,400,180);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(377,162,WHITE);
   
  setcolor(WHITE);
  rectangle(400,150,430,180);
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(401,159,WHITE);
  //Left Lamp
  setcolor(WHITE);
  rectangle(230,298,255,318);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(231,299,WHITE);
  
  setcolor(WHITE);
  rectangle(200,298,230,328);
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(201,309,WHITE);
  //Bottom
  setcolor(WHITE);
  rectangle(375,298,400,318);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(377,300,WHITE);
  
  setcolor(WHITE);
  rectangle(375,318,405,348);
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(400,320,WHITE);
  
  
  
  
 //creating 4 Side Rectangles Brown
 { 
   setcolor(WHITE);
   rectangle(0,0,255,180);
   setfillstyle(SOLID_FILL,BROWN);
   floodfill(1,1,WHITE);

  setcolor(WHITE);
  rectangle(0,298,255,478);
  setfillstyle(SOLID_FILL,BROWN);
  floodfill(1,477,WHITE);

  setcolor(WHITE);
  rectangle(375,0,639,180);
  setfillstyle(SOLID_FILL,BROWN);
  floodfill(630,2,WHITE);


  setcolor(WHITE);
  rectangle(375,298,639,478);
  setfillstyle(SOLID_FILL,BROWN);
  floodfill(630,477,WHITE);
 }
 { //Making Structure For LAMP
  //Top Side
   setcolor(YELLOW);
   rectangle(255,130,285,160);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(256,131,YELLOW);
   
   setcolor(BLUE);
   circle(270,145,15);

  //Base Side
   setcolor(YELLOW);
   rectangle(345,318,375,348);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(346,319,YELLOW);
    setcolor(BLUE);
   circle(360,333,15);

   //Right Side
   setcolor(YELLOW);
   rectangle(400,180,430,210);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(401,181,YELLOW);
   setcolor(BLUE);
   circle(415,195,15);


   //Left Side
   setcolor(YELLOW);
   rectangle(200,268,230,298);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(201,281,YELLOW);
   setcolor(BLUE);
   circle(215,283,15);

  }
  
  }
void REDM(void)
{  
  { Structure();
    {
	  setfillstyle(SOLID_FILL,RED);
      floodfill(271,146,BLUE);
      setfillstyle(SOLID_FILL,RED);
      floodfill(360,333,BLUE);
      setfillstyle(SOLID_FILL,GREEN);
      floodfill(415,195,BLUE);
      setfillstyle(SOLID_FILL,GREEN);
      floodfill(215,283,BLUE);
    }
  }
  // delay(10);
 }

 void YELLOWM(void)
{
 {Structure();
      //3rd View
      setfillstyle(SOLID_FILL,YELLOW);
      floodfill(271,146,BLUE);
      setfillstyle(SOLID_FILL,YELLOW);
      floodfill(360,333,BLUE);
      setfillstyle(SOLID_FILL,YELLOW);
      floodfill(415,195,BLUE);
      setfillstyle(SOLID_FILL,YELLOW);
      floodfill(215,283,BLUE);
      }
   // delay(10);
   
}
 

void GREENM(void)
{
   Structure();//Creating Basic MAP Structure
     {//1st View
      setfillstyle(SOLID_FILL,GREEN);
      floodfill(271,146,BLUE);
      setfillstyle(SOLID_FILL,GREEN);
      floodfill(360,333,BLUE);
      setfillstyle(SOLID_FILL,RED);
      floodfill(415,195,BLUE);
      setfillstyle(SOLID_FILL,RED);
      floodfill(215,283,BLUE);
     }
   //delay(10);
 }



int main()
{ int i,a,a1,k,m,j,s;
      
  
   initwindow(650,490,"");
   { 
  
   for(a=0;a<=639;a+=10)
    {
	 REDM();
	 
	 
	 
    //Left To Right Vehicle
     setcolor(BLUE);
     rectangle(0+a,200,60+a,230);
     setcolor(BLUE);
     rectangle(60+a,215,80+a,230);
     setcolor(BLUE);
     circle(30+a,231,5);
     setfillstyle(SOLID_FILL,WHITE);
     floodfill(30+a,228,BLUE);
     setfillstyle(SOLID_FILL,WHITE);
     floodfill(30+a,232,BLUE);
     circle(70+a,231,5);
     setfillstyle(SOLID_FILL,WHITE);
     floodfill(70+a,228,BLUE);
     setfillstyle(SOLID_FILL,WHITE);
     floodfill(70+a,232,BLUE);

     setfillstyle(SOLID_FILL,BLUE);
     floodfill(2+a,222,BLUE);
     setfillstyle(SOLID_FILL,BLUE);
     floodfill(62+a,222,BLUE);

     //Right To Left Side Vehicle
      setcolor(BLUE);
      rectangle(579-a,248,639-a,278);
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(580-a,277,BLUE);
      setcolor(BLUE);
      rectangle(559-a,263,579-a,278);
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(560-a,277,BLUE);
      setcolor(BLUE);
      circle(609-a,278,5);
      setfillstyle(SOLID_FILL,WHITE);
      floodfill(609-a,277,BLUE);
      setfillstyle(SOLID_FILL,WHITE);
      floodfill(609-a,279,BLUE);
      setcolor(BLUE);
      circle(569-a,278,5);
      setfillstyle(SOLID_FILL,WHITE);
      floodfill(569-a,278,BLUE);
      setfillstyle(SOLID_FILL,WHITE);
      floodfill(569-a,279,BLUE);

      //Top To Bottom
      a1=a;
     if(a1>=100)
      {
      	a1=100;
	  }
      setcolor(WHITE);
      rectangle(335,0+(a1),365,60+(a1));
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(336,1+(a1),WHITE);


      //Bottom To Top
      setcolor(WHITE);
      rectangle(270,418-(a1),300,478-(a1));
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(271,419-(a1),WHITE);

      delay(500);
     
      
     cleardevice();
     
   }//loopbreak
   for(s=0;s<=20;s+=10)
   {REDM();
    
   
     //Top To Bottom
      setcolor(YELLOW);
      rectangle(335,100,365,160);
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(336,101,YELLOW);


     //Bottom To Top
      setcolor(YELLOW);
      rectangle(270,318,300,378);
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(271,319,YELLOW);
          
     
      delay(500);
      cleardevice();
     
   }
   for(m=0;m<=20;m+=4)
    {YELLOWM();
      
     //Top To Bottom
      setcolor(YELLOW);
      rectangle(335,100,365,160);
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(336,101,YELLOW);


     //Bottom To Top
      setcolor(YELLOW);
      rectangle(270,318,300,378);
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(271,319,YELLOW);
      delay(500);
      cleardevice();
    }
    
   for(k=0;k<=378;k+=10)
    {  GREENM();
     
	 //Top To Bottom
      setcolor(YELLOW);
      rectangle(335,100+k,365,160+k);
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(336,101+k,YELLOW);
     //Bottom To Top
      setcolor(YELLOW);
      rectangle(270,318-k,300,378-(k));
      setfillstyle(SOLID_FILL,BLUE);
      floodfill(271,319-(k),YELLOW);
      delay(600);
      cleardevice();
      }
   }
 return 0;
}
