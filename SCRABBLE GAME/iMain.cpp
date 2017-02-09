#include "iGraphics.h"
#include<iostream>
#include<cstdio>
//#include"filetask.h"
//#include"fileworks.h"
using namespace std;
int i;
int j;
int t;
int click_x,curx,cury;
int click_y;
//char *filestr;
/*
	function iDraw() is called again and again by the system.
*/
char show[15][15][5]= {"0"};

void iDraw()
{
    iSetcolor(1,0,0);
    iFilledRectangle(0,0,800,600);
    iSetcolor(0,0,0);
    for(i=1; i<=12; i++)
    {
        int p=0;
        for(j=1; j<=12; j++)
            iRectangle((i-1)*50,(j-1)*50,45,45);


    }
for(i=1; i<=12; i++)
        {
            for(j=1; j<=12; j++)
            {
                char nnn[2]="";
                // nnn[0]=i+64;
                //nnn[1]='\0';
                //strcpy(show[i][j],nnn);
                iText(i*50-35,j*50-35,show[i][j],GLUT_BITMAP_TIMES_ROMAN_24);
			}


}
}



/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
    //place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.

*/

void iMouse(int button, int state, int mx, int my)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {

        click_x=mx;
        click_y=my;
        //t=search(click_x,click_y);
        //if(t==1)
        {
            //gets(filestr);
            cury=mx/50+1;
            curx=11-(my/50+1);
            cout<<mx<<" "<<curx<<" "<<my<<" "<<cury<<endl;
        }

    }
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
    }
}


/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/




void iKeyboard(unsigned char key)
{
    if(key == '}')
    {

                exit(0);
            }

            char NN[3];
            NN[0]=key;
            NN[1]='\0';
            strcpy(show[cury][11-curx],NN);
            //iSetcolor(1,0,0);



            //place your codes for other keys here
        }





int main()
{
    //place your own initialization codes here.
    iInitialize(600, 500, "SCRABBLE WORD");
    return 0;
}
