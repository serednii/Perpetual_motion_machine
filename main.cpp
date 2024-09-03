#include <iostream>
#include <allegro.h>
#include <cstdlib>
#include <stdio.h>
#include <winalleg.h>
#include <cmath>
#include <string>
#include <sstream>

#define ancho 1200 //1200
#define alto 1600  //800

using namespace std;
int circle_x=200, circle_y=200, circle_r=100;
int camera_x = 0, camera_y = 0;
bool paus = false;

int centr=350;

float rrr=65;
float xxx = 2030;
float yyy = 1;
int kll = 0;
int odstup_horu_nuzu=300;
float kol_bak=16+13;///30+1
int vusota_bocka = 80;
float koof_dla_odstup_mij_bocka = 0.5;
float odstup_mij_bockamu = vusota_bocka * koof_dla_odstup_mij_bocka;
float l_1 = ((kol_bak-1-12)/2*vusota_bocka)*(koof_dla_odstup_mij_bocka+1);
float l_2 = l_1;
float vusota_basein= l_1+odstup_horu_nuzu+odstup_horu_nuzu;

int hurina_basein = 700;
float pol_basein = 0;
float hladina = 0.95;
float uroven_vody = vusota_basein * hladina;



int hurina_bocka = vusota_bocka*0.6;
float rob_vusota = vusota_bocka*0.8;
float y_vusota=vusota_bocka*0.2;
float pol_porch = 0.2;//�� 0 �� 1s
float numbers[100];
int arr_nom_boc[150];
float  tt;

float r_1 = vusota_bocka*(koof_dla_odstup_mij_bocka+1)*6;
float radius = r_1/(3.14);//float r_1 = 3.14*75*1.8;
float r_2 = r_1;
int dov_kruga =  l_1+l_2+r_1+r_2;
int polovuna=radius+hurina_bocka/2;
int num=0;
float LL=vusota_bocka*(koof_dla_odstup_mij_bocka+1);//*63.917419;

void ust();
void ust1();


BITMAP *buffer;
BITMAP * buffer_basein;
BITMAP *buffer_bocka[3];
BITMAP *buffer_text;


int marcador,marcador1;

void drawCircle(int x0, int y0, int radius) {

	int x = x0;
	int y = y0;
	int g = 2*3.14/360;
	int r1;

	for (int r = 0; r<=360; r++) {
        r1 = r * g;
        x=x+200+(x0*cos(r1)-y0*sin(r1));
        y=y+200+(x0*sin(r1)-y0*cos(r1));
        _putpixel(buffer_basein, x, y, 0x000000);
	}
}





volatile int timer;
void incrementa_timer() { timer++; }
END_OF_FUNCTION(incrementa_timer)
void pausems(int a)
{
    ///////////////////////////////////////////////////////////
jjj:
if(timer - marcador1 >= a )
                {
                    //masked_blit(buffer, screen, camera_x, camera_y, 0, 0, ancho, alto);
                   marcador1 = timer;
                goto klk;
                }else goto jjj;

klk:
  return;
///////////////////////////////////////////////////////////
}
//void   generator();

void barrel();

#include "include/barrel.h"
#include "include/basin.h"
#include "include/keyboard.h"


int main()
{

    cout<<"== "<<endl;
	allegro_init();
	install_keyboard();
    //install_timer();

  //timer = 0;
  //LOCK_FUNCTION(incrementa_timer);
  //LOCK_VARIABLE(timer);
  //install_int_ex(incrementa_timer, MSEC_TO_TIMER(1));

set_color_depth(32);
set_gfx_mode(GFX_AUTODETECT_WINDOWED, ancho, alto, 0, 0);
buffer = create_bitmap(ancho, alto);
buffer_basein = create_bitmap(hurina_basein, vusota_basein);
buffer_bocka[1] = create_bitmap(hurina_bocka, vusota_bocka);
//buffer_bocka_vuxod = create_bitmap(hurina_bocka/3, vusota_bocka*0.2);
buffer_text = create_bitmap(400, 800);
boccka boc[135];

///************************************************************************************************
{
int b=1;
for (int a=0; a<= dov_kruga+70; a=a+odstup_mij_bockamu+vusota_bocka)
{
    numbers[b]=a;
    arr_nom_boc[b] = b;
    // cout<<"numbers[b] = "<<numbers[b-1]<<"  "<<b<<"  "<<endl;
    cout<<"arr_nom_boc[b] = "<<arr_nom_boc[b]<<endl;
    b++;
}
}
///************************************************************************************************

basin();
//***************************************************************
clear_to_color(buffer, 0xdddddd);

while (!key[KEY_ESC])
    {

keyboard();
 //**************************************

//uroven_vody = vusota_basein *0.75;
 barrel();
basin();
//************************************************************************************************
//************************************************************************************************
//************************************************************************************************
//************************************************************************************************
{

    for (int a=0; a!=kol_bak; a++)
    {
    num =a;
    barrel();
for (int u=0; u!=20; u++){
    u=u;
}
clear_to_color(buffer_text, 0xdddddd);
///************************************************************************************************
        if (numbers[a]<l_1 && numbers[1] > 0){
            rotate_sprite(buffer_basein,buffer_bocka[1],centr-polovuna-(hurina_bocka/2)-4,vusota_basein-odstup_horu_nuzu-numbers[a],0);
        }
///************************************************************************************************

///************************************************************************************************
        if (numbers[a]<l_1+r_1 && numbers[a]>l_1){//ĳ������
                      float l = (numbers[a] - l_1);

                        float t=3.14+l*(3.15/r_1);//2.95

                      float x,y,x1,y1;

                      float rad = polovuna;
                      x=(rad*(cos(t)));///68
                      y=(rad*(sin(t)));///80
                      float rlk=t-1.5;

                        ///line x,y,x1,y1
                        ///line x1,y1,x1+20*sin(r),y1+20*cos(r)

int   kutt=0;
                      ///if (l>vusota_bocka){
                         kutt = 8400000/r_1*l;
                      ///}

rotate_sprite(buffer_basein,buffer_bocka[1],x+centr+25*cos(rlk)-(hurina_bocka/2),y+odstup_horu_nuzu+25*sin(rlk)-(vusota_bocka/2),kutt);



line(buffer_basein, centr, odstup_horu_nuzu, x+centr, y+odstup_horu_nuzu, 0xff0000);
line(buffer_basein, x+centr, y+odstup_horu_nuzu, x+centr+25*cos(rlk), y+odstup_horu_nuzu+25*sin(rlk), 0xff0000);


                }
///************************************************************************************************




///************************************************************************************************

        if (numbers[a]<l_1+r_1+l_2 && numbers[a]>l_1+r_1){
            rotate_sprite(buffer_basein,buffer_bocka[1],centr+polovuna-(hurina_bocka/2)+1,vusota_basein-odstup_horu_nuzu+numbers[a]-l_1-r_1-l_2-(vusota_bocka),8400000);

        }
///************************************************************************************************



///************************************************************************************************
        if (numbers[a]<l_1+r_1+l_2+r_2 && numbers[a]>l_1+r_1+l_2){//ĳ������

                      float l = (numbers[a] -  l_1-r_1-l_2);

                        float t=l*(3.15/r_2);//2.95

                      float x,y;

                      float rad = polovuna;
                      x=(rad*(cos(t)));///68
                      y=(rad*(sin(t)));///80
                      float rlk=t-1.5+3.14;

                        ///line x,y,x1,y1
                        ///line x1,y1,x1+20*sin(r),y1+20*cos(r)
                      int   kutt = 8400000/r_2*l;
rotate_sprite(buffer_basein,buffer_bocka[1],x+centr-25*cos(rlk)-(hurina_bocka/2),y+odstup_horu_nuzu+l_1-25*sin(rlk)-(vusota_bocka/2),kutt-8400000);
line(buffer_basein, centr, odstup_horu_nuzu+l_1, x+centr, y+odstup_horu_nuzu+l_1, 0xff0000);
line(buffer_basein, x+centr, y+odstup_horu_nuzu+l_1, x+centr-25*cos(rlk), y+odstup_horu_nuzu+l_1-25*sin(rlk), 0xff0000);
                }
///************************************************************************************************
    }
}



//{
   // if (kll<=16800000){
    //    kll=kll+36800;
   // }
   // else{kll=0;
   // }
  //  rotate_sprite(buffer_basein,buffer_bocka[1],150,150,kll);
  //  line(buffer_basein, 150, 0, 150, 300, 0x5c8fff);
  //  line(buffer_basein, 0, 150, 300, 150, 0x5c8fff);
//}
//drawCircle(0,100,150);




//************************************************************************************************

//if (numbers[0]<(vusota_bocka-1)){
{
if (!paus)
       {
for (int a=0; a!=kol_bak; a++){
if (numbers[a]>(kol_bak-1)*LL  ){///2030
    numbers[a]=0;
    }
    else{
            numbers[a]=numbers[a]+yyy;
    }
    if (numbers[a]<0 ){
    numbers[a]=(kol_bak+1)*LL ;
    }
}
}
}
//}
//************************************************************************************************
//************************************************************************************************
//************************************************************************************************
//************************************************************************************************



 draw_sprite (buffer,buffer_basein,400,pol_basein);//kopy_buffer0<buffer0//�������� ����� � ��������� �����





textprintf_ex(buffer_text, font, 10, 10, makecol(255, 100, 200),-1, "odstup_mij_bockamu: %d", odstup_mij_bockamu);
textprintf_ex(buffer_text, font, 10, 20, makecol(255, 100, 200),-1, "vusota_basein: %d", vusota_basein);
textprintf_ex(buffer_text, font, 10, 30, makecol(255, 100, 200),-1, "uroven_vody: %d", uroven_vody);
textprintf_ex(buffer_text, font, 10, 40, makecol(255, 100, 200),-1, "vusota_basein-uroven_vody: %d", vusota_basein-uroven_vody);
textprintf_ex(buffer_text, font, 10, 60, makecol(255, 100, 200),-1, "rob_vusota: %d", rob_vusota);
textprintf_ex(buffer_text, font, 10, 70, makecol(255, 100, 200),-1, "y_vusota: %d", y_vusota);
textprintf_ex(buffer_text, font, 10, 80, makecol(255, 100, 200),-1, "dov_kruga: %d", dov_kruga);
textprintf_ex(buffer_text, font, 10,100, makecol(255, 100, 200),-1, "r_2: %f", r_2);
textprintf_ex(buffer_text, font, 10, 110, makecol(255, 100, 200),-1, "kol_bak: %f", kol_bak-1);
textprintf_ex(buffer_text, font, 10, 120, makecol(255, 100, 200),-1, "vusota_basein: %f", vusota_basein);
textprintf_ex(buffer_text, font, 10, 130, makecol(255, 100, 200),-1, "l_1: %f", l_1);
textprintf_ex(buffer_text, font, 10, 140, makecol(255, 100, 200),-1, "r_1: %f", r_1);
textprintf_ex(buffer_text, font, 10, 150, makecol(255, 100, 200),-1, "radius: %f", radius);
textprintf_ex(buffer_text, font, 10, 160, makecol(255, 100, 200),-1, "vusota_bocka: %d", vusota_bocka);
textprintf_ex(buffer_text, font, 10, 170, makecol(255, 100, 200),-1, "hurina_bocka: %d", hurina_bocka);

        textprintf_ex(buffer_text, font, 10, 190, makecol(255, 100, 200),-1, "t: %f", tt);

        for (int a=0; a<=50;a++){                                                                               ///2.05+l*(3.15/r_2)
                 if (numbers[a]<l_1+r_1+l_2+r_2 && numbers[a]>l_1+r_1+l_2){
        textprintf_ex(buffer_text, font, 10, 200+(a*10), makecol(255, 100, 200),-1, "numbers[R2]:%f", 2.05+(numbers[a]-l_1-r_1-l_2)*(3.15/r_2));
        }else{
            if (numbers[a]<l_1+r_1 && numbers[a]>l_1){
        textprintf_ex(buffer_text, font, 10, 200+(a*10), makecol(255, 100, 200),-1, "numbers[R1]:%f", 2.05+(numbers[a]-l_1)*(3.15/r_2));
        }else{
            if (numbers[a]<l_1 && numbers[1] > 0){
        textprintf_ex(buffer_text, font, 10, 200+(a*10), makecol(255, 100, 200),-1, "numbers[L1]:%f", (numbers[a]));
        }else{if (numbers[a]<l_1+r_1+l_2 && numbers[a]>l_1+r_1){
        textprintf_ex(buffer_text, font, 10, 200+(a*10), makecol(255, 100, 200),-1, "numbers[L2]:%f", (numbers[a]-l_1-r_1-l_2));
        }else{
        textprintf_ex(buffer_text, font, 10, 200+(a*10), makecol(255, 100, 200),-1, "numbers[]:%f", numbers[a]);
        }
        }
        }
        }
        }

draw_sprite(buffer, buffer_text, 0,0);



masked_blit(buffer, screen, camera_x, camera_y, 0, 0, ancho, alto);

    }
  // liberamos memoria

	destroy_bitmap(buffer);
destroy_bitmap(buffer_basein);
destroy_bitmap(buffer_bocka[1]);
destroy_bitmap(buffer_text);
















return 0;
/*while(!key[KEY_ESC])
    {
        int b = 0;
int h=0;
for (int angle=0; angle!=360; angle++){
        if (key[KEY_ESC]){
            return 0;
        }
        clear_to_color(buffer_text, 0xd0d00d);
        textprintf_ex(buffer_text, font, 20, 10, makecol(255, 100, 200),-1, "angle: %d", angle);
        b = angle*46666,6666;
        rectfill(buffer_basein, 0, 0, hurina_basein, vusota_basein, 0xdcffff);
        cout<< "angle = "<< angle<< endl;
        rotate_sprite(buffer_basein,buffer_bocka[1],(700/2),(900/2),b);
        //show_mouse(buffer_basein);
        draw_sprite(buffer_basein, buffer_text, 200,300);
        blit(buffer_basein,screen,0,0,0,0,700, 900);



                for (int c=0; c!=9996546; c ++)
                {
                    h=h+c;
                }

        }
    }*/


}

END_OF_MAIN();

void ust(){
///********************************************
uroven_vody = vusota_basein *hladina;
l_1 = vusota_basein-odstup_horu_nuzu-odstup_horu_nuzu;
l_2 = l_1;
r_1 = 3.14*75*1.8;
r_2 = r_1;
dov_kruga =  l_1+l_2+r_1+r_2;
buffer_basein = create_bitmap(hurina_basein, vusota_basein);
{
int b=1;
for (int a=0; a<= dov_kruga+70; a=a+68)
{
    numbers[b]=a;
    arr_nom_boc[b] = b;
   // cout<<"numbers[b] = "<<numbers[b-1]<<"  "<<b<<"  "<<endl;
    cout<<"arr_nom_boc[b] = "<<arr_nom_boc[b]<<endl;
    b++;
}
}
///********************************************
}


void ust1(){
///********************************************
uroven_vody = vusota_basein *hladina;
l_1 = vusota_basein-odstup_horu_nuzu-odstup_horu_nuzu;
l_2 = l_1;
r_1 = 3.14*75*1.8;
r_2 = r_1;
dov_kruga =  l_1+l_2+r_1+r_2;
///buffer_basein = create_bitmap(hurina_basein, vusota_basein);
{
int b=1;
for (int a=0; a<= dov_kruga+70; a=a+68)
{
    numbers[b]=a;
    arr_nom_boc[b] = b;
   // cout<<"numbers[b] = "<<numbers[b-1]<<"  "<<b<<"  "<<endl;
    cout<<"arr_nom_boc[b] = "<<arr_nom_boc[b]<<endl;
    b++;
}
}
///********************************************
}


