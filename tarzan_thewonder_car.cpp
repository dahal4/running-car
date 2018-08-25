#include<math.h>
#include<graphics.h>
#define N getmaxy()
#define Radius 17
 main()
 {
   //graphics variables
   int gd=DETECT,gm;

   //xc,yc coordinate of center
   //i for loop iteration
   int i,xc,yc,xc1,yc1,rx1,ry1,sep; //rx1,ry1,sep used for wheel's cross




   //change bgi directory according to your's
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");

   //initialise yc it is constant
   yc=370;
   yc1=370;
   i=0;

   //loop stops when keyboard key down or i>=N
   //kbhit checks whether keyboard pressed or not
   for(;i<N;i++)
   {

   //increment xc for moving the wheel
   xc=110+i;
   xc1=240+i;
   delay(50);

   //clear previous screen
  // clearviewport();
  cleardevice();

   //draw wheel
   circle(xc,yc,Radius);
setfillstyle(SOLID_FILL,BLACK);

    line(xc1+Radius,370,300+i,370);
    line(300+i,370,300+i,350);
    line(300+i,350,240+i,330);
    line(240+i,330,200+i,300);
    line(200+i,300,110+i,300);
    line(110+i,300,80+i,330);
    line(80+i,330,50+i,340);
    line(50+i,340,50+i,370);
    line(50+i,370,xc-Radius,370);
    line(xc+Radius,yc,xc1+Radius,yc1);
    circle(xc1,yc1,Radius);
    line(220+i,370,220+i,352);
    line(220+i,352,260+i,352);
    line(260+i,352,260+i,370);

    line(90+i,370,90+i,352);
    line(90+i,352,130+i,352);
    line(130+i,352,130+i,370);

    floodfill(90,372,WHITE);

    setcolor(WHITE);
            setfillstyle(3,WHITE);
            int aa[]={165+i,305,165+i,330,230+i,330,195+i,305,165+i,305};
            fillpoly(5,aa);
            int ab[]={160+i,305,160+i,330,95+i,330,120+i,305,160+i,305};
            fillpoly(5,ab);
            line(180+i,305,182+i,330);
            //manche
            circle(190+i,315,8);
            line(190+i,323,190+i,330);
            line(190+i,323,200+i,330);

   //following if else block draws
   //wheel cross in two arrangments shows alternatively
   if(i%2==0)
   {
     line(xc,yc+Radius,xc,yc-Radius);
     line(xc-Radius,yc,xc+Radius,yc);

     line(xc1,yc1+Radius,xc1,yc1-Radius);
     line(xc1-Radius,yc1,xc1+Radius,yc1);
   }
   else
   {
     rx1=xc-(Radius/sqrt(2));
     ry1=yc-(Radius/sqrt(2));
     sep=sqrt(2)*Radius;
     line(rx1,ry1,rx1+sep,ry1+sep);
     line(rx1,ry1+sep,rx1+sep,ry1);

     rx1=xc1-(Radius/sqrt(2));
     ry1=yc1-(Radius/sqrt(2));
     sep=sqrt(2)*Radius;
     line(rx1,ry1,rx1+sep,ry1+sep);
     line(rx1,ry1+sep,rx1+sep,ry1);
   }




  }

}

