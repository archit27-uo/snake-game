#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<process.h>
#include<time.h>
int food(int,int);
int f=1;
int fx, fy;
int main(void)
{

   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "//turboc3//bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
//MAIN PROGRAM START HERE
int x=0, y=0,i, r=4;
  char z;
  char xs;
  char arc[20];
  randomize ();
    fx=random(239);
    fy=random(279);
    sprintf(arc, "Q");


  for (i=1; i<=85; i++)
  {
    delay(60);
  if(kbhit()==0 && r!=1)
  {
clearviewport ();
outtextxy(fx, fy,arc);
moveto(x, y);
outtext("O");

x=x+1;
  }

  else
  { z=getche();

  switch (z)
 {
 case 'w':
  x=getx();
  y=gety();
 for(int m=0; m<190; m++)
  {
  delay(15);
  clearviewport();

  outtextxy(fx, fy,arc);
  moveto(x, y);
  food (x, y);
  outtext("O");
  int sy=y;
  for(int c=1; c<=f; c++)
{
if(f>1)
{
sy=y-((c-1)*6);
moveto(x, sy);
outtext("O");
   }
   }
  y=y-1;
  z=kbhit();
  if(kbhit()!=0)
  break;
  }

  r=1;
  break;
  case 'a':
  x=getx();
  for(int k=0; k<190; k++)
  {
  delay(15);
  clearviewport();
  outtextxy(fx, fy,arc);
  moveto(x, y);
  food (x, y);
  for(int b=1; b<=f; b++)
  {
  outtext("O");
  }

  x=x-1;
  z=kbhit();
  if(kbhit()!=0)
  break;
  }
  r=1;
  break;
  case 'd':
  x=getx();
  y=gety();
  for(int n=0; n<190; n++)
  {
  delay(15);
  clearviewport();
  outtextxy(fx, fy,arc);
  moveto(x, y);
  food (x, y);
  for(int d=1; d<=f; d++)
  {
  outtext("O");
   }
  x=x+1;
  z=kbhit();
  if(kbhit()!=0)
  break;
  }

  r=1;
  break;
  case 's':
  x=getx();
  for(int l=1; l<190; l++)
  {
  if(1==f)
  {
  delay(15);
  }
  else
  {
  delay(47*f*2);
   }
  y=y+1;
  clearviewport();
  outtextxy(fx, fy,arc);
  moveto(x,y);
  food (x, y);
  outtext("O");
   int wy=y;
  for(int e=1; e<=f; e++)
{
if(f>1)
{
wy=y+((e-1)*6);
moveto(x,wy);
outtext("O");
   }
   }

  y=gety();
  z=kbhit();
  if(kbhit()!=0)
  break;
  }
  r=1;
  break;
  case 'p':
  exit(1);
  break;
  }
   }

  x=getx();
  y=gety();
      }
   getch();

   }

   int food(int cox, int coy)
   {
   if ((cox-3)<=fx && (cox+3)>=fx)
   {
   if((coy-3)<=fy && (coy+3)>=fy)
   {
   randomize();
   fx=random(339);
   randomize();
   fy=random(276);
   f=f+1;
   }
   }
   }