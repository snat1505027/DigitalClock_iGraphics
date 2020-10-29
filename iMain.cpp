#include "iGraphics.h"
#include<stdio.h>
#include <time.h>

int x = 650, y = 395, r = 40,k=10;
int tim[3]={};

void gettime(int tim[])
{
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    tim[0] = current->tm_hour;
    tim[1] = current->tm_min;
    tim[2] = current->tm_sec;
}


void iDraw() {
	//place your drawing codes here
	iClear();
    gettime(tim);

	int len,i,t=100,t1,num=0,l=0,con=0;
	double x=100;
	double y=165;
	double xa1[6];
	double ya1[6];
	double xa2[6];
	double ya2[6];
	double xa3[6];
	double ya4[6];
    double ya5[6];
    double ya7[6];

    if((tim[0]/12)==1)
    {
        iSetColor(250, 0, 0);
        iText(690,275,"PM",GLUT_BITMAP_HELVETICA_18);
        iText(95,90,__DATE__,GLUT_BITMAP_TIMES_ROMAN_24);
    }
    else
    {
        iSetColor(250, 0, 0);
        iText(690,275,"AM",GLUT_BITMAP_HELVETICA_18);
        iText(95,90,__DATE__,GLUT_BITMAP_TIMES_ROMAN_24);
    }
    tim[0]=tim[0]%12;
    if(tim[0]==0)
    {
       tim[0]=12;
    }
	for(i=0;i<3;i++)
    {

        t1=tim[i];
        num=0;
        while(num<2)
        {
       double xa1[]={x+1,x+6,x+52,x+57,x+52,x+6};
	   double ya1[]={y,y-5,y-5,y,y+5,y+5};
	   double xa2[]={x-5,x,x+5,x+15,x+10,x+5};
       double xa4[]={x+11,x+16,x+62,x+67,x+63,x+17};
	   double ya2[]={y+5,y,y+5,y+55,y+60,y+55};
	   double xa3[]={x+53,x+58,x+63,x+73,x+68,x+63};
       double xa7[]={x+22,x+27,x+73,x+78,x+73,x+27};
       double ya4[]={y+60,y+55,y+55,y+60,y+65,y+65};
       double xa5[]={x+6,x+11,x+16,x+26,x+21,x+16};
       double xa6[]={x+64,x+69,x+74,x+84,x+79,x+74};
       double ya5[]={y+65,y+61,y+65,y+115,y+120,y+115};
       double ya7[]={y+120,y+115,y+115,y+120,y+125,y+125};
        t=t1/10;
        t1=(t1%10)*10;
        num++;

    if((t==2)||(t==3)||(t==5)||(t==6)||(t==8)||(t==9)||(t==0))
       iSetColor(210, 0, 0);
    else
       iSetColor(50, 0, 0);
	iFilledPolygon(xa1, ya1, 6);

	if((t==2)||(t==6)||(t==8)||(t==0))
	   iSetColor(210, 0, 0);
    else
       iSetColor(50, 0, 0);
    iFilledPolygon(xa2, ya2, 6);
    if((t==1)||(t==3)||(t==5)||(t==4)||(t==6)||(t==7)||(t==8)||(t==9)||(t==0))
       iSetColor(210, 0, 0);
    else
       iSetColor(50, 0, 0);
    iFilledPolygon(xa3, ya2, 6);
    if((t==2)||(t==3)||(t==4)||(t==5)||(t==6)||(t==8)||(t==9))
       iSetColor(210, 0, 0);
    else
       iSetColor(50, 0, 0);
        iFilledPolygon(xa4, ya4, 6);
    if((t==4)||(t==5)||(t==6)||(t==8)||(t==9)||(t==0))
       iSetColor(210, 0, 0);
    else
       iSetColor(50, 0, 0);
       iFilledPolygon(xa5, ya5, 6);
    if((t==1)||(t==2)||(t==3)||(t==4)||(t==7)||(t==8)||(t==9)||(t==0))
       iSetColor(210, 0, 0);
    else
       iSetColor(50, 0, 0);
    iFilledPolygon(xa6, ya5, 6);
    if((t==2)||(t==3)||(t==5)||(t==6)||(t==7)||(t==8)||(t==9)||(t==0))
       iSetColor(210, 0,0);
    else
       iSetColor(50, 0, 0);
      iFilledPolygon(xa7, ya7, 6);

    if((t%2)==0)
    {
        iSetColor(350, 0, 0);
       con=1;
   }
    else
    {
        iSetColor(70, 0, 0);
        con=0;
    }
    iFilledCircle(484,200,7);
    iFilledCircle(494,250,7);
    iFilledCircle(284,200,7);
    iFilledCircle(294,250,7);

    x=x+100;
    }
    num=0;
}
 if(con==0)
    {
        iSetColor(250, 0, 0);
       con=1;
   }
    else
    {
        iSetColor(70, 0, 0);
        con=0;
    }
	iSetColor(20, 200, 0);
	iText(40, 40, "Hi, I am iGraphics");
}

void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		x -= 10;
		y -= 10;
	}
}

void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
}
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
}


int main() {
    iInitialize(800, 400, "demo");
	return 0;
}
