#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
int yo=130;
int x=20,y=80;
int x2=500,a=25,b=15,s=50,e=310,x1=500,x3=500,x4=350,y1=200;
int k=0,j=0,f=0,d=0,c=0,yc1,yc2,yc3,yc=250;
int i,o;
int a1=0,a2=180,r=10;
class player             // the player class 
{
char name[20];
int distance,points;
public:
void accept();
void cloud();
void display();
int score(long int);
int mycopter(int,int);
int dist()              // calculates the distance the copter has travelled
{
 return distance;
}
int getpoints()         //calculates the points according to the distance travelled
{
return points;
}
};
void del()               //this function removes the names of people from the file who are not in top 5
{
fstream fobj("game.dat",ios::binary|ios::in|ios::out);
fstream f1("temp.dat",ios::binary|ios::in|ios::out);
player o;
int i=0;
while(fobj.read((char*)&o,sizeof(o)))
{
 if(i<=4)
 {
  f1.write((char*)&o,sizeof(o));
 }
 i++;
}
f1.close();
fobj.close();
remove("game.dat");
rename("temp.dat","game.dat");
}
void abtg()         //graphics design for about the game
{
  int x=50,y=150,r=20;
 setbkcolor(9);
 setcolor(YELLOW);
 ellipse(340,200-10,198,190,250,140);
 arc(81,195+20,250,0,12);
 arc(93,198+22,206,300,17);


 arc(75,135+55+10,90,180,15);
 arc(25,135+55+10,0,90,15);

 setfillstyle(SOLID_FILL,YELLOW);
 circle(79,120+55+10,3);
 floodfill(79,120+55+10,YELLOW);

 setfillstyle(SOLID_FILL,YELLOW);
 circle(21,120+55+10,3);
 floodfill(21,120+55+10,YELLOW);

 setfillstyle(SOLID_FILL,8);
 circle(40,145+55+13,6);
 floodfill(40,145+55+13,YELLOW);

 setfillstyle(SOLID_FILL,YELLOW);
 circle(40,145+55+13,2);
 floodfill(40,145+55+13,YELLOW);

 setfillstyle(SOLID_FILL,8);
 circle(60,145+55+13,6);
 floodfill(60,145+55+13,YELLOW);

 setfillstyle(SOLID_FILL,YELLOW);
 circle(60,145+55+13,2);
 floodfill(60,145+55+13,YELLOW);

 setfillstyle(SOLID_FILL,YELLOW);
 circle(x,y+55+10,r+3);
 floodfill(x,y+55+10,YELLOW);

 setfillstyle(SOLID_FILL,YELLOW);
 circle(x+2,y+66+55+10,r-4);
 floodfill(x+2,y+66+55+10,YELLOW);

 setfillstyle(SOLID_FILL,YELLOW);
 circle(x+4,y+116+55+10,r-8);
 floodfill(x+4,y+116+55+10,YELLOW);

 setfillstyle(SOLID_FILL,YELLOW);
 circle(x+16,y+150+55+10,r-12);
 floodfill(x+16,y+150+55+10,YELLOW);

 setfillstyle(SOLID_FILL,YELLOW);
 circle(x+36,y+158+55+10,r-15);
 floodfill(x+36,y+158+55+10,YELLOW);

 setfillstyle(SOLID_FILL,YELLOW);
 circle(x+52,y+159+55+10,r-16);
 floodfill(x+52,y+159+55+10,YELLOW);

 setfillstyle(SOLID_FILL,YELLOW);
 circle(x+62,y+159+55+10,r-18);
 floodfill(x+62,y+159+55+10,YELLOW);

 setfillstyle(SOLID_FILL,8);
 circle(x,y+34+55+10,r-2);
 floodfill(x,y+34+55+10,YELLOW);

 setfillstyle(SOLID_FILL,8);
 circle(x+2,y+92+55+10,r-6);
 floodfill(x+2,y+92+55+10,YELLOW);

 setfillstyle(SOLID_FILL,8);
 circle(x+8,y+136+55+10,r-10);
 floodfill(x+8,y+136+55+10,YELLOW);

 setfillstyle(SOLID_FILL,8);
 circle(x+44,y+158+55+10,r-15);
 floodfill(x+44,y+158+55+10,YELLOW);

 setfillstyle(SOLID_FILL,8);
 circle(x+26,y+156+55+10,r-14);
 floodfill(x+26,y+156+55+10,YELLOW);

  setfillstyle(SOLID_FILL,8);
 circle(x+58,y+159+55+10,r-17);
 floodfill(x+58,y+159+55+10,YELLOW);

 setcolor(8);
 arc(50,155+55+10,200,350,10);

 line(41,145+55+13,41,145+55+13);
 line(59,145+55+13,59,145+55+13);

 setcolor(RED);
 settextstyle(SMALL_FONT,HORIZ_DIR,4);
 outtextxy(290,70,"Ha Ha Hi Haa.");
 outtextxy(205,90,"Greetings,You Low Minded Unintelligent Creatures.");
 outtextxy(175,110,"I Dr.Leobovitz Gebceznski Will Seek REVENGE For The Loses");
 outtextxy(155,130 ,"Faced By My Comrades by Avenging The Earth SCUM CAPTAIN KALINGA....");
 outtextxy(115,160,"This GAME Is a Quest For SURVIVAL.Captain KALINGA,is in a Mission Of His LIFE.");
 outtextxy(105,180," Held CAPTIVE is His Beloved Son By Us, The Underground Terror Organisation");
 outtextxy(100,200,"THE PEAKY BLINDERS . We Want The Top Secret Defence Information From The Military.");
 outtextxy(105,220,"Captain KALINGA Has SWORN To Save His Son (In His Dreams...) And Stop The Terror");
 outtextxy(120,240," Once And For ALL.But He Has To Face My Dangerous Attacks Using His Primary");
 outtextxy(140,260," Weapons And in an AGNI-3721 CHOPPER. Will He Reach The Destination?");
 outtextxy(290,300,"Lets Find Out..........");
 outtextxy(270,280,"Muhaha Muhaha Ha Ha.........");
 setcolor(8);
 setcolor(8);
 line(37,204,47,207);
 line(54,207,64,204);
}
void border1()    //graphics code for border
{
 setfillstyle(SOLID_FILL,1);
 int a[]={0,0,50,20,10,40,40,60,10,80,30,100,20,120,60,140,20,160,40,180,20,200,50,220,5,240,25,260,5,280,30,300,10,320,45,340,20,360,35,380,10,400,60,420,20,440,40,460,10,480,55,500,0,520,0,0};
 setcolor(14);
 fillpoly(32,a);
 floodfill(10,10,1);
 int a2[]={640,0,590,20,630,40,600,60,635,80,580,100,625,120,610,140,630,160,595,180,625,200,600,220,635,240,585,260,630,280,605,300,635,320,600,340,630,360,585,380,620,400,590,420,625,440,605,460,635,480,595,500,640,520,640,0};
 fillpoly(28,a2);
 int a3[]={0,0,25,35,50,10,75,35,100,10,125,35,150,10,175,35,200,10,225,35,250,10,275,35,300,10,325,35,350,10,375,35,400,10,425,35,450,10,475,35,500,10,525,35,550,10,575,35,600,10,625,35,650,10,675,0,0,0};
 fillpoly(28,a3);
 int y=470;
 int a4[]={0,y+10,25,y-25,50,y,75,y-25,100,y,125,y-25,150,y,175,y-25,200,y,225,y-25,250,y,275,y-25,300,y,325,y-25,350,y,375,y-25,400,y,425,y-25,450,y,475,y-25,500,y,525,y-25,550,y,575,y-25,600,y,625,y-25,650,y,675,y+10,0,y+10};
 fillpoly(28,a4);
 }
void cloud()      //graphics code for cloud
{
 int w=100,z=50;
 setfillstyle(SOLID_FILL,WHITE);
 setcolor(WHITE);
 arc(w,z,a1,a2,r);
 arc(w+10,z+10,a1+5,a2-90,r);
 arc(w+20,z+20,a1+30,a2-90,r);
 arc(w-10,z+10,a1+90,a2-10,r);
 arc(w-20,z+20,a1+90,a2-40,r);
 arc(w-29,z+25,a1+90,a2-40,r);
 arc(w+29,z+25,a1+30,a2-90,r);
 arc(w+231-200,z+20,180,0,5);
 arc(w+221-200,z+20,180,0,5);
 arc(w+211-200,z+20,180,0,5);
 arc(w+201-200,z+20,180,0,5);
 arc(w+191-200,z+20,180,0,5);
 arc(w+181-200,z+20,180,0,5);
 arc(w+171-200,z+20,140,0,5);
 floodfill(w+10,z+20,WHITE);
 arc(w+200,z,a1,a2,r);
 arc(w+10+200,z+10,a1+5,a2-90,r);
 arc(w+20+200,z+20,a1+30,a2-90,r);
 arc(w-10+200,z+10,a1+90,a2-10,r);
 arc(w-20+200,z+20,a1+90,a2-40,r);
 arc(w-29+200,z+25,a1+90,a2-40,r);
 arc(w+29+200,z+25,a1+30,a2-90,r);
 arc(w+231,z+20,180,0,5);
 arc(w+221,z+20,180,0,5);
 arc(w+211,z+20,180,0,5);
 arc(w+201,z+20,180,0,5);
 arc(w+191,z+20,180,0,5);
 arc(w+181,z+20,180,0,5);
 arc(w+171,z+20,140,0,5);
 floodfill(w+200,z+20,WHITE);
 arc(w+200+200,z,a1,a2,r);
 arc(w+10+200+200,z+10,a1+5,a2-90,r);
 arc(w+20+200+200,z+20,a1+30,a2-90,r);
 arc(w-10+200+200,z+10,a1+90,a2-10,r);
 arc(w-20+200+200,z+20,a1+90,a2-40,r);
 arc(w-29+200+200,z+25,a1+90,a2-40,r);
 arc(w+29+200+200,z+25,a1+30,a2-90,r);
 arc(w+231+200,z+20,180,0,5);
 arc(w+221+200,z+20,180,0,5);
 arc(w+211+200,z+20,180,0,5);
 arc(w+201+200,z+20,180,0,5);
 arc(w+191+200,z+20,180,0,5);
 arc(w+181+200,z+20,180,0,5);
 arc(w+171+200,z+20,140,0,5);
 floodfill(w+200+200,z+20,WHITE);
}

void obs()       //graphics code for obstacles
{
 cloud();
 setfillstyle(SOLID_FILL,RED);
 setcolor(RED);
 ellipse(x2,yc,s,e,a,b);
 fillellipse(x2,yc,a,b);
 ellipse(x2+16,yc,s+218,e-220,a-10,b-5);
 fillellipse(x2+16,yc,a-10,b-5);
 sector(x2+26,yc,s,200-55,b,a-5);
 sector(x2+26,yc+1,200+20,y1+100,b,a-5);
 setcolor(1);
 outtextxy(x2-12,yc-3,"BOOM!");
 yc+=150;
 x2-=150;
 setcolor(RED);
 ellipse(x2,yc,s,e,a,b);
 fillellipse(x2,yc,a,b);
 ellipse(x2+16,yc,s+218,e-220,a-10,b-5);
 fillellipse(x2+16,yc,a-10,b-5);
 sector(x2+26,yc,s,200-55,b,a-5);
 sector(x2+26,yc+1,200+20,y1+100,b,a-5);
 setcolor(1);
 outtextxy(x2-12,yc-3,"BOOM!");
 yc-=250;
 x2+=200;
 setcolor(RED);
 ellipse(x2,yc,s,e,a,b);
 fillellipse(x2,yc,a,b);
 ellipse(x2+16,yc,s+218,e-220,a-10,b-5);
 fillellipse(x2+16,yc,a-10,b-5);
 sector(x2+26,yc,s,200-55,b,a-5);
 sector(x2+26,yc+1,200+20,y1+100,b,a-5);
 setcolor(1);
 outtextxy(x2-12,yc-3,"BOOM!");
}
void copter()       //graphics code for copter
{
 obs();
 int point[]={75+x,204+y,20+x,197+y,20+x,193+y,75+x,195+y,75+x,204+y};
 int p2[]={35+x,193+y,20+x,175+y,20+x,193+y,35+x,193+y};
 int p3[]={82+x,213+y,85+x,213+y,87+x,215+y,118+x,215+y,120+x,213+y,123+x,213+y,121+x,218+y,84+x,218+y,82+x,213+y};
 int p4[]={80+x,170+y,86+x,165+y,100+x,179+y};
 int p5[]={122+x,170+y,116+x,165+y,102+x,179+y};
 int p6[]={80+x,186+y,86+x,191+y,100+x,179+y};
 int p7[]={122+x,186+y,116+x,191+y,102+x,179+y};
 setcolor(BLUE);
 setfillstyle(SOLID_FILL,GREEN);
 fillpoly(3,p4);
 fillpoly(3,p5);
 fillpoly(3,p6);
 fillpoly(3,p7);
 setfillstyle(SOLID_FILL,6);
 fillellipse(100+x,200+y,27,12);
 setcolor(BLUE);
 setfillstyle(SOLID_FILL,GREEN);
 sector(110+x,198+y,0,90,10,6);
 sector(100+x,198+y,180,90,20,6);
 setcolor(BLUE);
 setfillstyle(SOLID_FILL,6);
 fillpoly(5,point);
 setcolor(BLUE);
 setfillstyle(SOLID_FILL,GREEN);
 fillpoly(4,p2);
 setcolor(BLUE);
 line(102+x,188+y,102+x,178+y);
 setcolor(BLUE);
 setfillstyle(SOLID_FILL,GREEN);
 fillellipse(102+x,180+y,2,2);
 setcolor(BLUE);
 line(80+x,170+y,122+x,186+y);
 line(122+x,170+y,80+x,186+y);
 setcolor(BLUE);
 line(92+x,210+y,92+x,215+y);
 line(115+x,210+y,115+x,215+y);
 setfillstyle(SOLID_FILL,GREEN);
 fillpoly(9,p3);
 setcolor(3);
}
void cover()              //design for the front page
{
 setbkcolor(13);
 copter();
 border1();
 setcolor(1);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
 outtextxy(100,140,"B");
 delay(300);
outtextxy(130,150,"L");
delay(300);
outtextxy(160,140,"I");
delay(300);
outtextxy(185,150,"T");
delay(300);
outtextxy(220,140,"Z");
delay(300);
outtextxy(250,150,"K");
delay(300);
outtextxy(280,140,"R");
delay(300);
outtextxy(490,140,"E");
delay(300);
outtextxy(460,150,"N");
delay(300);
outtextxy(430,140,"O");
delay(300);
outtextxy(370,150,"G");
delay(300);
outtextxy(335,140,"E");
delay(300);
outtextxy(310,150,"I");
delay(300);
setcolor(14);
settextstyle(GOTHIC_FONT,HORIZ_DIR,6);
outtextxy(100,180,"~~~~~~~~~~~~~");
outtextxy(100,185,"~~~~~~~~~~~~~");
delay(5000);
cleardevice();
}

void border()
{
setcolor(GREEN);
for(int i=0;i<680;i+=40)
{
setfillstyle(SOLID_FILL,13);
fillellipse(i,10,3,3);
fillellipse(i+5,10,2,2);
fillellipse(i-5,10,2,2);
fillellipse(i,5,2,2);
fillellipse(i,15,2,2);
setfillstyle(SOLID_FILL,14);
fillellipse(i+20,10,3,3);
fillellipse(i+5+20,10,2,2);
fillellipse(i-5+20,10,2,2);
fillellipse(i+20,5,2,2);
fillellipse(i+20,15,2,2);
}
for(int z=20;z<500;z+=100)
{
arc(-13,z,320,50,35);
arc(-12,z,320,50,35);
arc(-11,z,320,50,35);
arc(-10,z,320,50,35);
arc(32,z+50,120,230,32);
arc(33,z+50,120,230,32);
arc(34,z+50,120,230,32);
arc(35,z+50,120,230,32);
arc(-13+615,z,320,50,35);
arc(-12+615,z,320,50,35);
arc(-11+615,z,320,50,35);
arc(-10+615,z,320,50,35);
arc(32+615,z+50,120,230,32);
arc(33+615,z+50,120,230,32);
arc(34+615,z+50,120,230,32);
arc(35+615,z+50,120,230,32);
}
for( z=20;z<500;z+=100)
{

arc(32,z,120,230,32);
arc(33,z,120,230,32);
arc(34,z,120,230,32);
arc(35,z,120,230,32);
arc(-13,z+50,320,50,35);
arc(-12,z+50,320,50,35);
arc(-11,z+50,320,50,35);
arc(-10,z+50,320,50,35);

arc(32+615,z,120,230,32);
arc(33+615,z,120,230,32);
arc(34+615,z,120,230,32);
arc(35+615,z,120,230,32);
arc(-13+615,z+50,320,50,35);
arc(-12+615,z+50,320,50,35);
arc(-11+615,z+50,320,50,35);
arc(-10+615,z+50,320,50,35);
}
int z1=0,x1=0;
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(18+x1,22+z1,3,3);
setcolor(12);
setfillstyle(SOLID_FILL,12);
fillellipse(12+x1,22+z1,2,2);
fillellipse(19+x1,15+z1,2,2);
fillellipse(19+x1,29+z1,2,2);
fillellipse(14+x1,17+z1,2,2);
fillellipse(14+x1,27+z1,2,2);
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(5+x1,72+z1,3,3);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(12+x1,72+z1,2,2);
fillellipse(9+x1,67+z1,2,2);
fillellipse(9+x1,77+z1,2,2);
fillellipse(3+x1,78+z1,2,2);
fillellipse(3+x1,66+1,2,2);
z1+=100;
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(18+x1,22+z1,3,3);
setcolor(12);
setfillstyle(SOLID_FILL,12);
fillellipse(12+x1,22+z1,2,2);
fillellipse(19+x1,15+z1,2,2);
fillellipse(19+x1,29+z1,2,2);
fillellipse(14+x1,17+z1,2,2);
fillellipse(14+x1,27+z1,2,2);
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(5+x1,72+z1,3,3);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(12+x1,72+z1,2,2);
fillellipse(9+x1,67+z1,2,2);
fillellipse(9+x1,77+z1,2,2);
fillellipse(3+x1,78+z1,2,2);
fillellipse(3+x1,66+1,2,2);
z1+=100;
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(18+x1,22+z1,3,3);
setcolor(12);
setfillstyle(SOLID_FILL,12);
fillellipse(12+x1,22+z1,2,2);
fillellipse(19+x1,15+z1,2,2);
fillellipse(19+x1,29+z1,2,2);
fillellipse(14+x1,17+z1,2,2);
fillellipse(14+x1,27+z1,2,2);
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(5+x1,72+z1,3,3);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(12+x1,72+z1,2,2);
fillellipse(9+x1,67+z1,2,2);
fillellipse(9+x1,77+z1,2,2);
fillellipse(3+x1,78+z1,2,2);
fillellipse(3+x1,66+1,2,2);
z1+=100;
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(18+x1,22+z1,3,3);
setcolor(12);
setfillstyle(SOLID_FILL,12);
fillellipse(12+x1,22+z1,2,2);
fillellipse(19+x1,15+z1,2,2);
fillellipse(19+x1,29+z1,2,2);
fillellipse(14+x1,17+z1,2,2);
fillellipse(14+x1,27+z1,2,2);
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(5+x1,72+z1,3,3);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(12+x1,72+z1,2,2);
fillellipse(9+x1,67+z1,2,2);
fillellipse(9+x1,77+z1,2,2);
fillellipse(3+x1,78+z1,2,2);
fillellipse(3+x1,66+1,2,2);
z1+=100;
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(18+x1,22+z1,3,3);
setcolor(12);
setfillstyle(SOLID_FILL,12);
fillellipse(12+x1,22+z1,2,2);
fillellipse(19+x1,15+z1,2,2);
fillellipse(19+x1,29+z1,2,2);
fillellipse(14+x1,17+z1,2,2);
fillellipse(14+x1,27+z1,2,2);
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(5+x1,72+z1,3,3);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(12+x1,72+z1,2,2);
fillellipse(9+x1,67+z1,2,2);
fillellipse(9+x1,77+z1,2,2);
fillellipse(3+x1,78+z1,2,2);
fillellipse(3+x1,66+1,2,2);
z1+=100;
z1=0,x1=615;
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(18+x1,22+z1,3,3);
setcolor(12);
setfillstyle(SOLID_FILL,12);
fillellipse(12+x1,22+z1,2,2);
fillellipse(19+x1,15+z1,2,2);
fillellipse(19+x1,29+z1,2,2);
fillellipse(14+x1,17+z1,2,2);
fillellipse(14+x1,27+z1,2,2);
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(5+x1,72+z1,3,3);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(12+x1,72+z1,2,2);
fillellipse(9+x1,67+z1,2,2);
fillellipse(9+x1,77+z1,2,2);
fillellipse(3+x1,78+z1,2,2);
fillellipse(3+x1,66+1,2,2);
z1+=100;
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(18+x1,22+z1,3,3);
setcolor(12);
setfillstyle(SOLID_FILL,12);
fillellipse(12+x1,22+z1,2,2);
fillellipse(19+x1,15+z1,2,2);
fillellipse(19+x1,29+z1,2,2);
fillellipse(14+x1,17+z1,2,2);
fillellipse(14+x1,27+z1,2,2);
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(5+x1,72+z1,3,3);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(12+x1,72+z1,2,2);
fillellipse(9+x1,67+z1,2,2);
fillellipse(9+x1,77+z1,2,2);
fillellipse(3+x1,78+z1,2,2);
fillellipse(3+x1,66+1,2,2);
z1+=100;
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(18+x1,22+z1,3,3);
setcolor(12);
setfillstyle(SOLID_FILL,12);
fillellipse(12+x1,22+z1,2,2);
fillellipse(19+x1,15+z1,2,2);
fillellipse(19+x1,29+z1,2,2);
fillellipse(14+x1,17+z1,2,2);
fillellipse(14+x1,27+z1,2,2);
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(5+x1,72+z1,3,3);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(12+x1,72+z1,2,2);
fillellipse(9+x1,67+z1,2,2);
fillellipse(9+x1,77+z1,2,2);
fillellipse(3+x1,78+z1,2,2);
fillellipse(3+x1,66+1,2,2);
z1+=100;
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(18+x1,22+z1,3,3);
setcolor(12);
setfillstyle(SOLID_FILL,12);
fillellipse(12+x1,22+z1,2,2);
fillellipse(19+x1,15+z1,2,2);
fillellipse(19+x1,29+z1,2,2);
fillellipse(14+x1,17+z1,2,2);
fillellipse(14+x1,27+z1,2,2);
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(5+x1,72+z1,3,3);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(12+x1,72+z1,2,2);
fillellipse(9+x1,67+z1,2,2);
fillellipse(9+x1,77+z1,2,2);
fillellipse(3+x1,78+z1,2,2);
fillellipse(3+x1,66+1,2,2);
z1+=100;
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(18+x1,22+z1,3,3);
setcolor(12);
setfillstyle(SOLID_FILL,12);
fillellipse(12+x1,22+z1,2,2);
fillellipse(19+x1,15+z1,2,2);
fillellipse(19+x1,29+z1,2,2);
fillellipse(14+x1,17+z1,2,2);
fillellipse(14+x1,27+z1,2,2);
setcolor(14);
setfillstyle(SOLID_FILL,14);
fillellipse(5+x1,72+z1,3,3);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(12+x1,72+z1,2,2);
fillellipse(9+x1,67+z1,2,2);
fillellipse(9+x1,77+z1,2,2);
fillellipse(3+x1,78+z1,2,2);
fillellipse(3+x1,66+1,2,2);
z1+=100;
}
void menu()              //displays the game menu and accepts choice
{
int x=20,y=10;
setcolor(8);
setbkcolor(3);
setfillstyle(SOLID_FILL,RED);
rectangle(0,468,40,478);
floodfill(20,470,8);
setfillstyle(SOLID_FILL,6);
rectangle(40,468,80,478);
floodfill(60,470,8);
setfillstyle(SOLID_FILL,RED);
rectangle(80,468,120,478);
floodfill(100,470,8);
setfillstyle(SOLID_FILL,6);
rectangle(120,468,160,478);
floodfill(140,470,8);
setfillstyle(SOLID_FILL,RED);
rectangle(160,468,200,478);
floodfill(180,470,8);
setfillstyle(SOLID_FILL,6);
rectangle(200,468,240,478);
floodfill(220,470,8);
setfillstyle(SOLID_FILL,RED);
rectangle(240,468,280,478);
floodfill(260,470,8);
setfillstyle(SOLID_FILL,6);
rectangle(280,468,320,478);
floodfill(300,470,8);
setfillstyle(SOLID_FILL,RED);
rectangle(320,468,360,478);
floodfill(340,470,8);
setfillstyle(SOLID_FILL,6);
rectangle(360,468,400,478);
floodfill(380,470,8);
setfillstyle(SOLID_FILL,RED);
rectangle(400,468,440,478);
floodfill(420,470,8);
setfillstyle(SOLID_FILL,6);
rectangle(440,468,480,478);
floodfill(460,470,8);
setfillstyle(SOLID_FILL,RED);
rectangle(480,468,520,478);
floodfill(500,470,8);
setfillstyle(SOLID_FILL,6);
rectangle(520,468,560,478);
floodfill(540,470,8);
setfillstyle(SOLID_FILL,RED);
rectangle(560,468,600,478);
floodfill(580,470,8);
setfillstyle(SOLID_FILL,6);
rectangle(600,468,640,478);
floodfill(620,470,8);

setfillstyle(SOLID_FILL,RED);
rectangle(0-x,468-y,40-x,478-y);
floodfill(20-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(40-x,468-y,80-x,478-y);
floodfill(60-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(80-x,468-y,120-x,478-y);
floodfill(100-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(120-x,468-y,160-x,478-y);
floodfill(140-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(160-x,468-y,200-x,478-y);
floodfill(180-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(200-x,468-y,240-x,478-y);
floodfill(220-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(240-x,468-y,280-x,478-y);
floodfill(260-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(280-x,468-y,320-x,478-y);
floodfill(300-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(320-x,468-y,360-x,478-y);
floodfill(340-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(360-x,468-y,400-x,478-y);
floodfill(380-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(400-x,468-y,440-x,478-y);
floodfill(420-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(440-x,468-y,480-x,478-y);
floodfill(460-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(480-x,468-y,520-x,478-y);
floodfill(500-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(520-x,468-y,560-x,478-y);
floodfill(540-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(560-x,468-y,600-x,478-y);
floodfill(580-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(600-x,468-y,640-x,478-y);
floodfill(620-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(620,458,640,468);
floodfill(630,460,8);

y+=10;
setfillstyle(SOLID_FILL,RED);
rectangle(0,468-y,40,478-y);
floodfill(20,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(40,468-y,80,478-y);
floodfill(60,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(80,468-y,120,478-y);
floodfill(100,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(120,468-y,160,478-y);
floodfill(140,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(160,468-y,200,478-y);
floodfill(180,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(200,468-y,240,478-y);
floodfill(220,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(240,468-y,280,478-y);
floodfill(260,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(280,468-y,320,478-y);
floodfill(300,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(320,468-y,360,478-y);
floodfill(340,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(360,468-y,400,478-y);
floodfill(380,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(400,468-y,440,478-y);
floodfill(420,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(440,468-y,480,478-y);
floodfill(460,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(480,468-y,520,478-y);
floodfill(500,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(520,468-y,560,478-y);
floodfill(540,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(560,468-y,600,478-y);
floodfill(580,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(600,468-y,640,478-y);
floodfill(620,470-y,8);

y+=10;
setfillstyle(SOLID_FILL,RED);
rectangle(0-x,468-y,40-x,478-y);
floodfill(20-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(40-x,468-y,80-x,478-y);
floodfill(60-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(80-x,468-y,120-x,478-y);
floodfill(100-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(120-x,468-y,160-x,478-y);
floodfill(140-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(160-x,468-y,200-x,478-y);
floodfill(180-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(200-x,468-y,240-x,478-y);
floodfill(220-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(240-x,468-y,280-x,478-y);
floodfill(260-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(280-x,468-y,320-x,478-y);
floodfill(300-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(320-x,468-y,360-x,478-y);
floodfill(340-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(360-x,468-y,400-x,478-y);
floodfill(380-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(400-x,468-y,440-x,478-y);
floodfill(420-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(440-x,468-y,480-x,478-y);
floodfill(460-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(480-x,468-y,520-x,478-y);
floodfill(500-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(520-x,468-y,560-x,478-y);
floodfill(540-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(560-x,468-y,600-x,478-y);
floodfill(580-x,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(600-x,468-y,640-x,478-y);
floodfill(620-x,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(620,438,640,448);
floodfill(630,440,8);
y+=10;
setfillstyle(SOLID_FILL,RED);
rectangle(0,468-y,40,478-y);
floodfill(20,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(40,468-y,80,478-y);
floodfill(60,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(80,468-y,120,478-y);
floodfill(100,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(120,468-y,160,478-y);
floodfill(140,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(160,468-y,200,478-y);
floodfill(180,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(200,468-y,240,478-y);
floodfill(220,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(240,468-y,280,478-y);
floodfill(260,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(280,468-y,320,478-y);
floodfill(300,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(320,468-y,360,478-y);
floodfill(340,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(360,468-y,400,478-y);
floodfill(380,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(400,468-y,440,478-y);
floodfill(420,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(440,468-y,480,478-y);
floodfill(460,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(480,468-y,520,478-y);
floodfill(500,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(520,468-y,560,478-y);
floodfill(540,470-y,8);
setfillstyle(SOLID_FILL,RED);
rectangle(560,468-y,600,478-y);
floodfill(580,470-y,8);
setfillstyle(SOLID_FILL,6);
rectangle(600,468-y,640,478-y);
floodfill(620,470-y,8);

setbkcolor(3);
setcolor(24);
int y1=25;
int x1=70;
setfillstyle(SOLID_FILL,24);
arc(50+10-x1,400-y1,330,30,100);
arc(275+10-x1,400-y1,150,210,100);
arc(163+10-x1,395-y1,240,-60,60);
arc(163+10-x1,295-y1,240,-60,60);
floodfill(160+10-x1,400-y1,24);
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
arc(200-x1,200+150-y1,0,130,10);
arc(186-x1,201+150-y1,50,180,10);
arc(173-x1,209+150-y1,80,210,10);
arc(174-x1,219+150-y1,140,290,10);
arc(186-x1,225+150-y1,190,350,10);
arc(205-x1,225+150-y1,210,370,10);
arc(215-x1,217+150-y1,250,400,10);
arc(213-x1,205+150-y1,320,470,10);
floodfill(200-x1,350-y1,GREEN);
arc(200-50-x1,200+150-y1,0,130,10);
arc(186-50-x1,201+150-y1,50,180,10);
arc(173-50-x1,209+150-y1,80,210,10);
arc(174-50-x1,219+150-y1,140,290,10);
arc(186-50-x1,225+150-y1,190,350,10);
arc(205-50-x1,225+150-y1,210,370,10);
arc(215-50-x1,217+150-y1,250,400,10);
arc(213-50-x1,205+150-y1,320,470,10);
floodfill(200-50-x1,350-y1,GREEN);
arc(200-25-x1,200+117-y1,0,130,10);
arc(186-25-x1,201+117-y1,50,180,10);
arc(173-25-x1,209+117-y1,80,210,10);
arc(174-25-x1,219+117-y1,140,290,10);
arc(186-25-x1,225+117-y1,190,350,10);
arc(205-25-x1,225+117-y1,210,370,10);
arc(215-25-x1,217+117-y1,250,400,10);
arc(213-25-x1,205+117-y1,320,470,10);
floodfill(200-25-x1,350-33-y1,GREEN);
setfillstyle(SOLID_FILL,RED);
fillellipse(205-25-x1,220+117-y1,4,4);
fillellipse(200-25-x1,240+117-y1,4,4);
fillellipse(215-25-x1,225+117-y1,4,4);
fillellipse(220-25-x1,210+117-y1,4,4);
fillellipse(205-25-x1,260+117-y1,4,4);
fillellipse(180-25-x1,220+117-y1,4,4);
fillellipse(180-25-x1,260+117-y1,4,4);
fillellipse(160-25-x1,240+117-y1,4,4);
fillellipse(230-25-x1,245+117-y1,4,4);
setcolor(24);
setfillstyle(SOLID_FILL,24);
x1-=400;
arc(50+10-x1,400-y1,330,30,100);
arc(275+10-x1,400-y1,150,210,100);
arc(163+10-x1,395-y1,240,-60,60);
arc(163+10-x1,295-y1,240,-60,60);
floodfill(160+10-x1,400-y1,24);
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
arc(200-x1,200+150-y1,0,130,10);
arc(186-x1,201+150-y1,50,180,10);
arc(173-x1,209+150-y1,80,210,10);
arc(174-x1,219+150-y1,140,290,10);
arc(186-x1,225+150-y1,190,350,10);
arc(205-x1,225+150-y1,210,370,10);
arc(215-x1,217+150-y1,250,400,10);
arc(213-x1,205+150-y1,320,470,10);
floodfill(200-x1,350-y1,GREEN);
arc(200-50-x1,200+150-y1,0,130,10);
arc(186-50-x1,201+150-y1,50,180,10);
arc(173-50-x1,209+150-y1,80,210,10);
arc(174-50-x1,219+150-y1,140,290,10);
arc(186-50-x1,225+150-y1,190,350,10);
arc(205-50-x1,225+150-y1,210,370,10);
arc(215-50-x1,217+150-y1,250,400,10);
arc(213-50-x1,205+150-y1,320,470,10);
floodfill(200-50-x1,350-y1,GREEN);
arc(200-25-x1,200+117-y1,0,130,10);
arc(186-25-x1,201+117-y1,50,180,10);
arc(173-25-x1,209+117-y1,80,210,10);
arc(174-25-x1,219+117-y1,140,290,10);
arc(186-25-x1,225+117-y1,190,350,10);
arc(205-25-x1,225+117-y1,210,370,10);
arc(215-25-x1,217+117-y1,250,400,10);
arc(213-25-x1,205+117-y1,320,470,10);
floodfill(200-25-x1,350-33-y1,GREEN);
setfillstyle(SOLID_FILL,RED);
fillellipse(205-25-x1,220+117-y1,4,4);
fillellipse(200-25-x1,240+117-y1,4,4);
fillellipse(215-25-x1,225+117-y1,4,4);
fillellipse(220-25-x1,210+117-y1,4,4);
fillellipse(205-25-x1,260+117-y1,4,4);
fillellipse(180-25-x1,220+117-y1,4,4);
fillellipse(180-25-x1,260+117-y1,4,4);
fillellipse(160-25-x1,240+117-y1,4,4);
fillellipse(230-25-x1,245+117-y1,4,4);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
border();
setcolor(RED);
setcolor(14);
setbkcolor(3);
}
void showdata()              //shows the top 5 scores
{
cleardevice();
yo=130;
ifstream f2("game.dat",ios::binary);
player obj;
menu();
setbkcolor(6);
setcolor(12);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
outtextxy(150,50,"H L  O  F M ");
outtextxy(150,60," A L  F  A E");
setcolor(10);
outtextxy(150,100,"~~~~~~~~~~~~~~~");
while(f2.read((char*)&obj,sizeof(obj)))
{
obj.display();
}
f2.close();
}
void credits()
{
menu();
setbkcolor(6);
setcolor(10);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(230,20,"C E I S");
outtextxy(230,30," R D T ");
setcolor(12);
outtextxy(230,60,"**********");
setcolor(14);
settextstyle(SMALL_FONT,HORIZ_DIR,5);
setcolor(14);
outtextxy(70,90,"GAME CREATORS");
outtextxy(70,100,"----------------");
setcolor(12);
outtextxy(70,115,"L.S.SUBRAJAA AND AKANKSHA SINHA");
setcolor(14);
outtextxy(390,90,"COPTER DESIGNER");
outtextxy(390,100,"-------------------");
setcolor(12);
outtextxy(390,115,"AKANKSHA SINHA");
setcolor(14);
outtextxy(70,130,"OBSTACLE DESIGNER");
outtextxy(70,140,"-----------------------");
setcolor(12);
outtextxy(70,155,"L.S.SUBRAJAA ");
setcolor(14);
outtextxy(390,130,"BACKGROUND DESIGNER");
outtextxy(390,140,"------------------------");
setcolor(12);
outtextxy(390,155,"AKANKSHA SINHA AND L.S.SUBRAJAA");
setcolor(14);
outtextxy(70,170,"STORYLINE CREATOR");
outtextxy(70,180,"-----------------------");
setcolor(12);
outtextxy(70,195,"L.S.SUBRAJAA ");
setcolor(14);
outtextxy(390,170,"PROGRAMMING LANGUAGE");
outtextxy(390,180,"-----------------------");
setcolor(12);
outtextxy(390,195,"C++");
setcolor(10);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(80,230,"WE SINCERELY THANK OUR COMPUTER SCIENCE MA'AM MRS RADHIKA BABU");
outtextxy(80,250,"WHO REALLY SHOWERED CONSTRUCTIVE FEEDBACKS AND SUGGESTIONS.");
delay(5000);
}

void inst()        //the game instuctions
{
 setcolor(12);
 setbkcolor(9);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
 outtextxy(50,30,"GAME INSTRUCTIONS");
 setcolor(10);
 outtextxy(50,55,"************************");
 setcolor(RED);
 settextstyle(SMALL_FONT,HORIZ_DIR,5);
 outtextxy(90,100,"*");
 outtextxy(90,130,"*");
 outtextxy(90,160,"*");
 outtextxy(90,220,"*");
 outtextxy(90,280,"*");
 setcolor(BLUE);
 outtextxy(100,100,"THE COPTER MOVES HORIZONTALLY AND VERTICALLY DOWNWARDS BY DEFAULT.");
 outtextxy(100,130,"YOU MAY PRESS ANY KEY TO MOVE THE COPTER UP.");
 outtextxy(100,160,"AT TIMES,THE COPTER PASSES OVER THE OBSTACLE WITHOUT HITTING IT");
 outtextxy(100,190,"IN THAT CASE,PLAYER CONTINUES TO PLAY THE GAME.");
 outtextxy(100,220,"SCORES ARE PROVIDED TO THE PLAYER ON THE BASIS OF THE DISTANCE");
 outtextxy(100,250,"COVERED BY THE COPTER");
 outtextxy(100,280,"IF COPTER HITS THE MISSILE,THE GAME IS OVER");
 delay(5000);
}
void sort()           //sorts the data in descending order
{
 fstream fobj("game.dat",ios::binary|ios::in|ios::out);
 player obj[15],o;
 int i=0,j,n;
 while(fobj.read((char*)&o,sizeof(o)))
 {
  obj[i]=o;
  i++;
 }
 n=i;
 i=0;j=0;
 for(i=0;i<n;i++)
 for(j=0;j<n-i-1;j++)
 {
 if(obj[j+1].dist()>obj[j].dist())
 {
  o=obj[j];
  obj[j]=obj[j+1];
  obj[j+1]=o;
 }
 }
 fobj.close();
 fobj.open("game.dat",ios::binary|ios::out);
 for(i=0;i<n;i++)
 fobj.write((char*)&obj[i],sizeof(obj[i]));
 fobj.close();
}
void player::accept()
{
 cleardevice();
 menu();
 setbkcolor(11);
 setcolor(RED);
 outtextxy(100,100,"ENTER YOUR NAME:");
 cin>>name;
 outtextxy(270,100,name);
 delay(500);
}
void player::display()
{
 setcolor(14);
 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
 outtextxy(200,yo,name);
 char ch[10];
 itoa(points,ch,10);
 outtextxy(380,yo,ch);
 yo+=30;
}

void player::cloud()
{
 int w=100,z=50;
 setfillstyle(SOLID_FILL,WHITE);
 setcolor(WHITE);
 arc(w,z,a1,a2,r);
 arc(w+10,z+10,a1+5,a2-90,r);
 arc(w+20,z+20,a1+30,a2-90,r);
 arc(w-10,z+10,a1+90,a2-10,r);
 arc(w-20,z+20,a1+90,a2-40,r);
 arc(w-29,z+25,a1+90,a2-40,r);
 arc(w+29,z+25,a1+30,a2-90,r);
 arc(w+231-200,z+20,180,0,5);
 arc(w+221-200,z+20,180,0,5);
 arc(w+211-200,z+20,180,0,5);
 arc(w+201-200,z+20,180,0,5);
 arc(w+191-200,z+20,180,0,5);
 arc(w+181-200,z+20,180,0,5);
 arc(w+171-200,z+20,140,0,5);
 floodfill(w+10,z+20,WHITE);
 arc(w+200,z,a1,a2,r);
 arc(w+10+200,z+10,a1+5,a2-90,r);
 arc(w+20+200,z+20,a1+30,a2-90,r);
 arc(w-10+200,z+10,a1+90,a2-10,r);
 arc(w-20+200,z+20,a1+90,a2-40,r);
 arc(w-29+200,z+25,a1+90,a2-40,r);
 arc(w+29+200,z+25,a1+30,a2-90,r);
 arc(w+231,z+20,180,0,5);
 arc(w+221,z+20,180,0,5);
 arc(w+211,z+20,180,0,5);
 arc(w+201,z+20,180,0,5);
 arc(w+191,z+20,180,0,5);
 arc(w+181,z+20,180,0,5);
 arc(w+171,z+20,140,0,5);
 floodfill(w+200,z+20,WHITE);
 arc(w+200+200,z,a1,a2,r);
 arc(w+10+200+200,z+10,a1+5,a2-90,r);
 arc(w+20+200+200,z+20,a1+30,a2-90,r);
 arc(w-10+200+200,z+10,a1+90,a2-10,r);
 arc(w-20+200+200,z+20,a1+90,a2-40,r);
 arc(w-29+200+200,z+25,a1+90,a2-40,r);
 arc(w+29+200+200,z+25,a1+30,a2-90,r);
 arc(w+231+200,z+20,180,0,5);
 arc(w+221+200,z+20,180,0,5);
 arc(w+211+200,z+20,180,0,5);
 arc(w+201+200,z+20,180,0,5);
 arc(w+191+200,z+20,180,0,5);
 arc(w+181+200,z+20,180,0,5);
 arc(w+171+200,z+20,140,0,5);
 floodfill(w+200+200,z+20,WHITE);
}

int player::score(long int m)
{
 points=0;
 for(int i=0;i<m;i+=5)
 points+=1;
 distance=m;
 return points;
}


int player::mycopter(int x,int y)
{
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
int pt[]={x2-27,yc,x2-27,yc-2,x2-26,yc-4,x2-25,yc-6,x2-23,yc-8,x2-21,yc-10,x2-19,yc-12,x2-15,yc-14,x2-9,yc-16,x2-4,yc-17,x2-1,yc-17,x2,yc-17,x2+2,yc-17,x2+4,yc-17,x2+7,yc-16,x2+11,yc-15,x2+13,yc-15,x2+15,yc-17,x2+17,yc-18,x2+19,yc-20,x2+21,yc-21,x2+23,yc-22,x2+25,yc-22,x2+27,yc-22,x2+29,yc-22,x2+31,yc-21,x2+33,yc-20,x2+35,yc-19,x2+38,yc-16,x2+37,yc-14,x2+36,yc-12,x2+34,yc-11,x2+34,yc-10,x2+33,yc-10,x2+31,yc-6,x2+32,yc-4,x2+33,yc-1,x2+33,yc+2,x2+32,yc+4,x2+31,yc+7,x2+32,yc+11,x2+33,yc+14,x2+35,yc+17,x2+34,yc+21,x2+30,yc+22,x2+27,yc+23,x2+24,yc+23,x2+21,yc+22,x2+18,yc+21,x2+16,yc+19,x2+13,yc+16,x2+10,yc+16,x2+6,yc+17,x2+3,yc+17,x2,yc+17,x2-3,yc+17,x2-6,yc+17,x2-10,yc+16,x2-14,yc+15,x2-18,yc+13,x2-22,yc+10,x2-26,yc+6,x2-27,yc+3,x2-27,yc};
int pt1[]={x1-27,yc1,x1-27,yc1-2,x1-26,yc1-4,x1-25,yc1-6,x1-23,yc1-8,x1-21,yc1-10,x1-19,yc1-12,x1-15,yc1-14,x1-9,yc1-16,x1-4,yc1-17,x1-1,yc1-17,x1,yc1-17,x1+2,yc1-17,x1+4,yc1-17,x1+7,yc1-16,x1+11,yc1-15,x1+13,yc1-15,x1+15,yc1-17,x1+17,yc1-18,x1+19,yc1-20,x1+21,yc1-21,x1+23,yc1-22,x1+25,yc1-22,x1+27,yc1-22,x1+29,yc1-22,x1+31,yc1-21,x1+33,yc1-20,x1+35,yc1-19,x1+38,yc1-16,x1+37,yc1-14,x1+36,yc1-12,x1+34,yc1-11,x1+34,yc1-10,x1+33,yc1-10,x1+31,yc1-6,x1+32,yc1-4,x1+33,yc1-1,x1+33,yc1+2,x1+32,yc1+4,x1+31,yc1+7,x1+32,yc1+11,x1+33,yc1+14,x1+35,yc1+17,x1+34,yc1+21,x1+30,yc1+22,x1+27,yc1+23,x1+24,yc1+23,x1+21,yc1+22,x1+18,yc1+21,x1+16,yc1+19,x1+13,yc1+16,x1+10,yc1+16,x1+6,yc1+17,x1+3,yc1+17,x1,yc1+17,x1-3,yc1+17,x1-6,yc1+17,x1-10,yc1+16,x1-14,yc1+15,x1-18,yc1+13,x1-22,yc1+10,x1-26,yc1+6,x1-27,yc1+3,x1-27,yc1};
int pt2[]={x3-27,yc2,x3-27,yc2-2,x3-26,yc2-4,x3-25,yc2-6,x3-23,yc2-8,x3-21,yc2-10,x3-19,yc2-12,x3-15,yc2-14,x3-9,yc2-16,x3-4,yc2-17,x3-1,yc2-17,x3,yc2-17,x3+2,yc2-17,x3+4,yc2-17,x3+7,yc2-16,x3+11,yc2-15,x3+13,yc2-15,x3+15,yc2-17,x3+17,yc2-18,x3+19,yc2-20,x3+21,yc2-21,x3+23,yc2-22,x3+25,yc2-22,x3+27,yc2-22,x3+29,yc2-22,x3+31,yc2-21,x3+33,yc2-20,x3+35,yc2-19,x3+38,yc2-16,x3+37,yc2-14,x3+36,yc2-12,x3+34,yc2-11,x3+34,yc2-10,x3+33,yc2-10,x3+31,yc2-6,x3+32,yc2-4,x3+33,yc2-1,x3+33,yc2+2,x3+32,yc2+4,x3+31,yc2+7,x3+32,yc2+11,x3+33,yc2+14,x3+35,yc2+17,x3+34,yc2+21,x3+30,yc2+22,x3+27,yc2+23,x3+24,yc2+23,x3+21,yc2+22,x3+18,yc2+21,x3+16,yc2+19,x3+13,yc2+16,x3+10,yc2+16,x3+6,yc2+17,x3+3,yc2+17,x3,yc2+17,x3-3,yc2+17,x3-6,yc2+17,x3-10,yc2+16,x3-14,yc2+15,x3-18,yc2+13,x3-22,yc2+10,x3-26,yc2+6,x3-27,yc2+3,x3-27,yc2};
int pt3[]={x4-27,yc3,x4-27,yc3-2,x4-26,yc3-4,x4-25,yc3-6,x4-23,yc3-8,x4-21,yc3-10,x4-19,yc3-12,x4-15,yc3-14,x4-9,yc3-16,x4-4,yc3-17,x4-1,yc3-17,x4,yc3-17,x4+2,yc3-17,x4+4,yc3-17,x4+7,yc3-16,x4+11,yc3-15,x4+13,yc3-15,x4+15,yc3-17,x4+17,yc3-18,x4+19,yc3-20,x4+21,yc3-21,x4+23,yc3-22,x4+25,yc3-22,x4+27,yc3-22,x4+29,yc3-22,x4+31,yc3-21,x4+33,yc3-20,x4+35,yc3-19,x4+38,yc3-16,x4+37,yc3-14,x4+36,yc3-12,x4+34,yc3-11,x4+34,yc3-10,x4+33,yc3-10,x4+31,yc3-6,x4+32,yc3-4,x4+33,yc3-1,x4+33,yc3+2,x4+32,yc3+4,x4+31,yc3+7,x4+32,yc3+11,x4+33,yc3+14,x4+35,yc3+17,x4+34,yc3+21,x4+30,yc3+22,x4+27,yc3+23,x4+24,yc3+23,x4+21,yc3+22,x4+18,yc3+21,x4+16,yc3+19,x4+13,yc3+16,x4+10,yc3+16,x4+6,yc3+17,x4+3,yc3+17,x4,yc3+17,x4-3,yc3+17,x4-6,yc3+17,x4-10,yc3+16,x4-14,yc3+15,x4-18,yc3+13,x4-22,yc3+10,x4-26,yc3+6,x4-27,yc3+3,x4-27,yc3};
if(x4==350)
k=x4;
 if(c==0&&x4==350)
 {
  x4=0;c++;
 }
 if(k>=350)
 {
 setfillstyle(SOLID_FILL,RED);
 setcolor(RED);
 ellipse(x1,yc1,s,e,a,b);
 fillellipse(x1,yc1,a,b);
 ellipse(x1+16,yc1,s+218,e-220,a-10,b-5);
 fillellipse(x1+16,yc1,a-10,b-5);
 sector(x1+26,yc1,s,y1-55,b,a-5);
 sector(x1+26,yc1+1,y1+20,y1+100,b,a-5);
 setcolor(1);
 outtextxy(x1-12,yc1-3,"BOOM!");
 k++;
 x1-=5;
 }
 if(x1==350)
 j=x1;
 if(j>=350)
 {
 setfillstyle(SOLID_FILL,RED);
 setcolor(RED);
 ellipse(x2,yc,s,e,a,b);
 fillellipse(x2,yc,a,b);
 ellipse(x2+16,yc,s+218,e-220,a-10,b-5);
 fillellipse(x2+16,yc,a-10,b-5);
 sector(x2+26,yc,s,y1-55,b,a-5);
 sector(x2+26,yc+1,y1+20,y1+100,b,a-5);
 setcolor(1);
 outtextxy(x2-12,yc-3,"BOOM!");
 j++;
 x2-=5;
 }
 if(x2==350)
 f=x2;
 if(f>=350)
 {
 setfillstyle(SOLID_FILL,RED);
 setcolor(RED);
 ellipse(x3,yc2,s,e,a,b);
 fillellipse(x3,yc2,a,b);
 ellipse(x3+16,yc2,s+218,e-220,a-10,b-5);
 fillellipse(x3+16,yc2,a-10,b-5);
 sector(x3+26,yc2,s,y1-55,b,a-5);
 sector(x3+26,yc2+1,y1+20,y1+100,b,a-5);
 setcolor(1);
 outtextxy(x3-12,yc2-3,"BOOM!");
 f++;
 x3-=5;
 }
 if(x3==350)
 d=x3;
 if(d>=350)
 {
 setfillstyle(SOLID_FILL,RED);
 setcolor(RED);
 ellipse(x4,yc3,s,e,a,b);
 fillellipse(x4,yc3,a,b);
 ellipse(x4+16,yc3,s+218,e-220,a-10,b-5);
 fillellipse(x4+16,yc3,a-10,b-5);
 sector(x4+26,yc3,s,y1-55,b,a-5);
 sector(x4+26,yc3+1,y1+20,y1+100,b,a-5);
 setcolor(1);
 outtextxy(x4-12,yc3-3,"BOOM!");
 d++;
 x4-=5;
 }
int point[]={75+x,204+y,20+x,197+y,20+x,193+y,75+x,195+y,75+x,204+y};
int p2[]={35+x,193+y,20+x,175+y,20+x,193+y,35+x,193+y};
int p3[]={82+x,213+y,85+x,213+y,87+x,215+y,118+x,215+y,120+x,213+y,123+x,213+y,121+x,218+y,84+x,218+y,82+x,213+y};
int p4[]={80+x,170+y,86+x,165+y,100+x,179+y};
int p5[]={122+x,170+y,116+x,165+y,102+x,179+y};
int p6[]={80+x,186+y,86+x,191+y,100+x,179+y};
int p7[]={122+x,186+y,116+x,191+y,102+x,179+y};
setbkcolor(9);
setcolor(BLUE);
setfillstyle(SOLID_FILL,GREEN);
fillpoly(3,p4);
fillpoly(3,p5);
fillpoly(3,p6);
fillpoly(3,p7);
setfillstyle(SOLID_FILL,6);
fillellipse(100+x,200+y,27,12);
setcolor(BLUE);
setfillstyle(SOLID_FILL,GREEN);
sector(110+x,198+y,0,90,10,6);
sector(100+x,198+y,180,90,20,6);
setcolor(BLUE);
setfillstyle(SOLID_FILL,6);
fillpoly(5,point);
setcolor(BLUE);
setfillstyle(SOLID_FILL,GREEN);
fillpoly(4,p2);
setcolor(BLUE);
line(102+x,188+y,102+x,178+y);
setcolor(BLUE);
setfillstyle(SOLID_FILL,GREEN);
fillellipse(102+x,180+y,2,2);
setcolor(BLUE);
line(80+x,170+y,122+x,186+y);
line(122+x,170+y,80+x,186+y);
setcolor(BLUE);
setcolor(BLUE);
line(92+x,210+y,92+x,215+y);
line(115+x,210+y,115+x,215+y);
setfillstyle(SOLID_FILL,GREEN);
fillpoly(9,p3);
setcolor(3);
int outline[]={100+x,200+y,18+x,y+199,18+x,y+197,x+18,y+194,18+x,195+y,18+x,196+y,x+18,y+193,x+18,y+192,x+18,y+191,x+18,y+175,x+18,y+174,x+18,y+173,x+18,y+172,x+18,y+171,x+18,y+170,x+36,y+191,x+37,y+191,x+38,y+191,x+39,y+191,x+40,y+191,x+41,y+191,x+42,y+191,x+43,y+191,x+44,y+191,x+45,
y+191,x+46,y+191,x+47,y+191,x+48,y+191,x+49,y+191,x+50,y+191,x+71,y+193,x+82,y+190,x+78,y+186,x+78,y+185,x+78,y+184,x+78,y+183,x+78,y+182,x+78,y+181,x+78,y+180,x+78,y+176,
x+78,y+175,x+78,y+174,x+78,y+173,x+178,y+172,x+78,y+171,x+78,y+170,x+78,y+168,x+86,y+163,x+87,y+163,x+88,y+163,x+89,y+163,x+90,y+163,x+91,y+163,x+92,y+163,x+93,y+163,x+94,y+163,x+95,y+163,x+96,y+163,x+97,y+163,x+98,y+163,x+99,y+163,x+100,y+163,x+101,y+163,x+102,y+163,x+105,y+163,x+108,y+163,x+112,y+163,x+116,y+163,x+124,y+170,x+124,y+175,x+124,y+178,x+124,y+182,x+124,y+186,x+120,y+188,x+130,y+198,x+125,y+218,x+127,y+218,x+125,y+220,x+124,y+220,x+123,y+220,x+122,y+220,x+121,y+220,x+120,y+220,x+119,y+220,x+118,y+220,x+117,y+220,x+116,y+220,x+115,y+220,x+114,y+220,x+113,y+220,x+112,y+220,x+111,y+220,110+x,y+220,x+109,y+220,x+108,y+220,x+107,y+220,x+106,y+220,x+105,y+220,x+104,y+220,x+103,y+220,x+102,y+220,x+101,y+220,x+100,y+220,x+99,y+220,x+98,y+220,x+97,y+220,x+96,y+220,x+95,y+220,x+94,y+220,x+93,y+220,x+92,y+220,x+91,y+220,x+90,y+220,x+89,y+220,x+88,y+220,x+87,y+220,x+86,y+220,x+85,y+220,x+84,y+220,x+83,y+220,x+82,y+220,x+81,y+220,x+80,y+220,x+79,y+220,x+78,y+220,x+77,y+220,x+76,y+215,
x+82,y+220,x+75,y+208,x+74,y+208,x+73,y+207,x+72,y+207,x+71,y+207,x+70,y+207,x+65,y+206,x+60,y+205,x+55,y+204,x+50,y+203,x+45,y+202,x+40,y+201,x+35,y+200,18+x,199+y,82+x,213+y,85+x,213+y,87+x,215+y,118+x,215+y,120+x,213+y,123+x,213+y,121+x,218+y,84+x,218+y,82+x,213+y,100+x,200+y,110+x,198+y,100+x,198+y};
for(int i=0;i<140;i+=2)
for(int j=0;j<66;j+=2)
if(outline[i]==pt[j]&&outline[i+1]==pt[j+1])
return 1;
for( i=0;i<140;i+=2)
for( j=0;j<66;j+=2)
if(outline[i]==pt1[j]&&outline[i+1]==pt1[j+1])
return 1;
for( i=0;i<140;i+=2)
for( j=0;j<66;j+=2)
if(outline[i]==pt2[j]&&outline[i+1]==pt2[j+1])
return 1;
for( i=0;i<140;i+=2)
for( j=0;j<66;j+=2)
if(outline[i]==pt3[j]&&outline[i+1]==pt3[j+1])
return 1;
return 0;
}

void getchoice()       //gets the choice from the player
{
cloud();
setcolor(14);
int choice;
settextstyle(SMALL_FONT,HORIZ_DIR,5);
outtextxy(220,100,"1.NEW GAME");
outtextxy(220,130,"2.HALL OF FAME");
outtextxy(220,160,"3.GAME INSTRUCTIONS");
outtextxy(220,190,"4.ABOUT THE GAME");
outtextxy(220,220,"5.CREDITS");
outtextxy(220,250,"6.EXIT");
setcolor(5);
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(150,320,"(ENTER THE CHOICE AND PRESS ENTER TO SEE YOUR CHOICE)");
setcolor(RED);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(190,290,"ENTER YOUR CHOICE:");
cin>>choice;
o=choice;
char ch[10];
itoa(choice,ch,10);
outtextxy(370,290,ch);
delay(2000);
}

void main()
{
 clrscr();
 long int m=0;
 int gm=DETECT,gd,i,x1=400;
 initgraph(&gm,&gd,"c:\\turboc3\\bgi");
 cover();
 o=1;
 while(o==1||o==2||o==3||o==4||o==5)
 {
  cleardevice();
  menu();
  getchoice();
  while(o==1)
  {
   cleardevice();
   player obj;
   obj.accept();
   ofstream f1("game.dat",ios::binary|ios::app);
   x=20,y=80;
   ::x2=500,::a=25,::b=15,::s=50,::e=310,::x1=500,::x3=500,::x4=350,::y1=200;
   ::k=0,::j=0,::f=0,::d=0,::c=0,::yc1,::yc2,::yc3,::yc=250;
   randomize();
   yc1=50+random(100);
   yc=150+random(200);
   yc2=50+random(300);
   yc3=100+random(200);
   cleardevice();
   obj.mycopter(x,y);
   char abc='y';
   setcolor(RED);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
   outtextxy(160,200,"PRESS Y TO START!!!!");
   cin>>abc;
   if(abc=='y'||abc=='Y')
   {
   while(y<260&&y>-170)
   {
    if(::x1==0)
    {
     ::x1=500;
     randomize();
     yc1=50+random(200);
     k=0;
    }
    if(::x2==0)
    {
     ::x2=500;
     randomize();
     yc=150+random(200);
     j=0;
    }
    if(::x3==0)
    {
     ::x3=500;
     randomize();
     yc2=200+random(200);
     f=0;
    }
    if(::x4==0)
    {
     ::x4=500;
     randomize();
     yc3=300+random(200);
     d=0;
    }
    if(x==400)
    {
     x=0;
     x1=::i;
     ::x1+=200;
     ::x2+=200;
     ::x3+=200;
     ::x4+=200;
     yc1=50+random(200);
     yc=150+random(200);
     yc2=200+random(200);
     yc3=300+random(200);
    }
    if(!kbhit())
    {
     x+=2;
     y+=5;
     if(obj.mycopter(x,y)==1)
     break;
    }
    else
    {
     getch();
     cleardevice();
     x+=2;
     y-=8;
     if(obj.mycopter(x,y)==1)
     break;
     delay(20);
    }
    delay(20);
    ::i=x1-x;
    cleardevice();
    m++;
   }
   char ch[20];
   obj.score(m);
   m=0;
   f1.write((char*)&obj,sizeof(obj));
   itoa(obj.getpoints(),ch,10);
   obj.cloud();
   obj.mycopter(x,y);
   setcolor(15);
   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
   outtextxy(180,100,"GAME OVER!!!!");
   outtextxy(180,200,"SCORE:");
   outtextxy(320,200,ch);
   delay(5000);
   cleardevice();
   obj.cloud();
   obj.mycopter(x,y);
   f1.close();
   sort();
   del();
   cleardevice();
   }
   cleardevice();
   menu();
   getchoice();
  }
  while(o==2)
  {
   cleardevice();
   showdata();
   delay(10000);
   cleardevice();
   menu();
   getchoice();
  }
 while(o==3)
 {
  cleardevice();
  menu();
  inst();
  delay(10000);
  cleardevice();
  menu();
  getchoice();
 }
 while(o==4)
 {
  cleardevice();
  abtg();
  delay(20000);
  cleardevice();
  menu();
  getchoice();
 }
 while(o==5)
 {
 cleardevice();
 credits();
 delay(10000);
 cleardevice();
 menu();
 getchoice();
 }
 }
 if(o==6)
 exit(0);
 delay(1000);
 getch();
 closegraph();
 getch();
}
