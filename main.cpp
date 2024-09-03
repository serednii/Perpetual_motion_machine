#include <iostream>

#include <allegro.h>

#include <cstdlib>

#include <stdio.h>

#include <winalleg.h>

#include <cmath>

#include <string>

#include <sstream>

#define ancho 1200 //1200
#define alto 1600 //800

using namespace std;

const int circle_x = 200,
  circle_y = 200,
  circle_r = 100;
const int center = 350;
const float y = 1;
const int paddingTopBottom = 300;
const int barrelHeight = 80;
const float coefficientForTheIndentationBetweenBarrels = 0.5;
const float indentationBetweenBarrels = barrelHeight * coefficientForTheIndentationBetweenBarrels;
const int basinWidth = 700;
const int barrelWidth = barrelHeight * 0.6;
const float workingHeight = barrelHeight * 0.8;
const float yHeight = barrelHeight * 0.2;
const float halfPiston = 0.2; //�� 0 �� 1s

int camera_x = 0, camera_y = 0;
bool pause = false;
float numberTanks = 16 + 13; ///30+1
float l_1 = ((numberTanks - 1 - 12) / 2 * barrelHeight) * (coefficientForTheIndentationBetweenBarrels + 1);
float l_2 = l_1;
float basinHeight = l_1 + paddingTopBottom + paddingTopBottom;

float basinBottom = 0;
float surface = 0.95;
float waterLevel = basinHeight * surface;

float numbers[100];
int arrayNumberBarrel[150];
float temp;

float r_1 = barrelHeight * (coefficientForTheIndentationBetweenBarrels + 1) * 6;
const float radius = r_1 / (3.14); //float r_1 = 3.14*75*1.8;
float r_2 = r_1;
int circleLength = l_1 + l_2 + r_1 + r_2;
const int half = radius + barrelWidth / 2;
int num = 0;
float LL = barrelHeight * (coefficientForTheIndentationBetweenBarrels + 1); //*63.917419;

void ust();
void ust1();

BITMAP * buffer;
BITMAP * bufferBasin;
BITMAP * bufferBarrel[3];
BITMAP * buffer_text;

void drawCircle(int x0, int y0, int radius) {

  int x = x0;
  int y = y0;
  int g = 2 * 3.14 / 360;
  int r1;

  for (int r = 0; r <= 360; r++) {
    r1 = r * g;
    x = x + 200 + (x0 * cos(r1) - y0 * sin(r1));
    y = y + 200 + (x0 * sin(r1) - y0 * cos(r1));
    _putpixel(bufferBasin, x, y, 0x000000);
  }
}

volatile int timer;
void increment_timer() {
  timer++;
}
END_OF_FUNCTION(increment_timer)
void pauseMs(int a) {
  int timerCounter = 0;
  repeatCycle:
    if (timer - timerCounter >= a) {
      //masked_blit(buffer, screen, camera_x, camera_y, 0, 0, ancho, alto);
      timerCounter = timer;
      goto endCycle;
    } else goto repeatCycle;
  endCycle:
    return;
}

//void   generator();

void barrel();

#include "include/barrel.h"

#include "include/basin.h"

#include "include/keyboard.h"

int main() {

  cout << "== " << endl;
  allegro_init();
  install_keyboard();

  set_color_depth(32);
  set_gfx_mode(GFX_AUTODETECT_WINDOWED, ancho, alto, 0, 0);
  buffer = create_bitmap(ancho, alto);
  bufferBasin = create_bitmap(basinWidth, basinHeight);
  bufferBarrel[1] = create_bitmap(barrelWidth, barrelHeight);
  //bufferBarrel_vuxod = create_bitmap(barrelWidth/3, barrelHeight*0.2);
  buffer_text = create_bitmap(400, 800);
  //boccka boc[135];

  {
    int b = 1;
    for (int a = 0; a <= circleLength + 70; a = a + indentationBetweenBarrels + barrelHeight) {
      numbers[b] = a;
      arrayNumberBarrel[b] = b;
      // cout<<"numbers[b] = "<<numbers[b-1]<<"  "<<b<<"  "<<endl;
      cout << "arrayNumberBarrel[b] = " << arrayNumberBarrel[b] << endl;
      b++;
    }
  }

  basin();

  clear_to_color(buffer, 0xdddddd);

  while (!key[KEY_ESC]) {

    keyboard();

    //waterLevel = basinHeight *0.75;
    barrel();
    basin();

    {

      for (int a = 0; a != numberTanks; a++) {
        num = a;
        barrel();
        for (int u = 0; u != 20; u++) {
          u = u;
        }
        clear_to_color(buffer_text, 0xdddddd);

        if (numbers[a] < l_1 && numbers[1] > 0) {
          rotate_sprite(bufferBasin, bufferBarrel[1], center - half - (barrelWidth / 2) - 4, basinHeight - paddingTopBottom - numbers[a], 0);
        }
        if (numbers[a] < l_1 + r_1 && numbers[a] > l_1) { //ĳ������
          float l = (numbers[a] - l_1);

          float t = 3.14 + l * (3.15 / r_1); //2.95

          float x, y, x1, y1;

          float rad = half;
          x = (rad * (cos(t))); ///68
          y = (rad * (sin(t))); ///80
          float rlk = t - 1.5;

          ///line x,y,x1,y1
          ///line x1,y1,x1+20*sin(r),y1+20*cos(r)

          int kutt = 0;

          kutt = 8400000 / r_1 * l;

          rotate_sprite(bufferBasin, bufferBarrel[1], x + center + 25 * cos(rlk) - (barrelWidth / 2), y + paddingTopBottom + 25 * sin(rlk) - (barrelHeight / 2), kutt);

          line(bufferBasin, center, paddingTopBottom, x + center, y + paddingTopBottom, 0xff0000);
          line(bufferBasin, x + center, y + paddingTopBottom, x + center + 25 * cos(rlk), y + paddingTopBottom + 25 * sin(rlk), 0xff0000);

        }

        if (numbers[a] < l_1 + r_1 + l_2 && numbers[a] > l_1 + r_1) {
          rotate_sprite(bufferBasin, bufferBarrel[1], center + half - (barrelWidth / 2) + 1, basinHeight - paddingTopBottom + numbers[a] - l_1 - r_1 - l_2 - (barrelHeight), 8400000);

        }

        if (numbers[a] < l_1 + r_1 + l_2 + r_2 && numbers[a] > l_1 + r_1 + l_2) { //ĳ������

          float l = (numbers[a] - l_1 - r_1 - l_2);

          float t = l * (3.15 / r_2); //2.95

          float x, y;

          float rad = half;
          x = (rad * (cos(t))); ///68
          y = (rad * (sin(t))); ///80
          float rlk = t - 1.5 + 3.14;

          ///line x,y,x1,y1
          ///line x1,y1,x1+20*sin(r),y1+20*cos(r)
          int kutt = 8400000 / r_2 * l;
          rotate_sprite(bufferBasin, bufferBarrel[1], x + center - 25 * cos(rlk) - (barrelWidth / 2), y + paddingTopBottom + l_1 - 25 * sin(rlk) - (barrelHeight / 2), kutt - 8400000);
          line(bufferBasin, center, paddingTopBottom + l_1, x + center, y + paddingTopBottom + l_1, 0xff0000);
          line(bufferBasin, x + center, y + paddingTopBottom + l_1, x + center - 25 * cos(rlk), y + paddingTopBottom + l_1 - 25 * sin(rlk), 0xff0000);
        }
        ///************************************************************************************************
      }
    }

    //************************************************************************************************

    //if (numbers[0]<(barrelHeight-1)){
    {
      if (!pause) {
        for (int a = 0; a != numberTanks; a++) {
          if (numbers[a] > (numberTanks - 1) * LL) {
            numbers[a] = 0;
          } else {
            numbers[a] = numbers[a] + y;
          }
          if (numbers[a] < 0) {
            numbers[a] = (numberTanks + 1) * LL;
          }
        }
      }
    }
    //}

    draw_sprite(buffer, bufferBasin, 400, basinBottom); //kopy_buffer0<buffer0//�������� ����� � ��������� �����

    textprintf_ex(buffer_text, font, 10, 10, makecol(255, 100, 200), -1, "indentationBetweenBarrels: %d", indentationBetweenBarrels);
    textprintf_ex(buffer_text, font, 10, 20, makecol(255, 100, 200), -1, "basinHeight: %d", basinHeight);
    textprintf_ex(buffer_text, font, 10, 30, makecol(255, 100, 200), -1, "waterLevel: %d", waterLevel);
    textprintf_ex(buffer_text, font, 10, 40, makecol(255, 100, 200), -1, "basinHeight-waterLevel: %d", basinHeight - waterLevel);
    textprintf_ex(buffer_text, font, 10, 60, makecol(255, 100, 200), -1, "workingHeight: %d", workingHeight);
    textprintf_ex(buffer_text, font, 10, 70, makecol(255, 100, 200), -1, "yHeight: %d", yHeight);
    textprintf_ex(buffer_text, font, 10, 80, makecol(255, 100, 200), -1, "circleLength: %d", circleLength);
    textprintf_ex(buffer_text, font, 10, 100, makecol(255, 100, 200), -1, "r_2: %f", r_2);
    textprintf_ex(buffer_text, font, 10, 110, makecol(255, 100, 200), -1, "numberTanks: %f", numberTanks - 1);
    textprintf_ex(buffer_text, font, 10, 120, makecol(255, 100, 200), -1, "basinHeight: %f", basinHeight);
    textprintf_ex(buffer_text, font, 10, 130, makecol(255, 100, 200), -1, "l_1: %f", l_1);
    textprintf_ex(buffer_text, font, 10, 140, makecol(255, 100, 200), -1, "r_1: %f", r_1);
    textprintf_ex(buffer_text, font, 10, 150, makecol(255, 100, 200), -1, "radius: %f", radius);
    textprintf_ex(buffer_text, font, 10, 160, makecol(255, 100, 200), -1, "barrelHeight: %d", barrelHeight);
    textprintf_ex(buffer_text, font, 10, 170, makecol(255, 100, 200), -1, "barrelWidth: %d", barrelWidth);
    textprintf_ex(buffer_text, font, 10, 190, makecol(255, 100, 200), -1, "t: %f", temp);

    for (int a = 0; a <= 50; a++) { ///2.05+l*(3.15/r_2)
      if (numbers[a] < l_1 + r_1 + l_2 + r_2 && numbers[a] > l_1 + r_1 + l_2) {
        textprintf_ex(buffer_text, font, 10, 200 + (a * 10), makecol(255, 100, 200), -1, "numbers[R2]:%f", 2.05 + (numbers[a] - l_1 - r_1 - l_2) * (3.15 / r_2));
      } else {
        if (numbers[a] < l_1 + r_1 && numbers[a] > l_1) {
          textprintf_ex(buffer_text, font, 10, 200 + (a * 10), makecol(255, 100, 200), -1, "numbers[R1]:%f", 2.05 + (numbers[a] - l_1) * (3.15 / r_2));
        } else {
          if (numbers[a] < l_1 && numbers[1] > 0) {
            textprintf_ex(buffer_text, font, 10, 200 + (a * 10), makecol(255, 100, 200), -1, "numbers[L1]:%f", (numbers[a]));
          } else {
            if (numbers[a] < l_1 + r_1 + l_2 && numbers[a] > l_1 + r_1) {
              textprintf_ex(buffer_text, font, 10, 200 + (a * 10), makecol(255, 100, 200), -1, "numbers[L2]:%f", (numbers[a] - l_1 - r_1 - l_2));
            } else {
              textprintf_ex(buffer_text, font, 10, 200 + (a * 10), makecol(255, 100, 200), -1, "numbers[]:%f", numbers[a]);
            }
          }
        }
      }
    }

    draw_sprite(buffer, buffer_text, 0, 0);

    masked_blit(buffer, screen, camera_x, camera_y, 0, 0, ancho, alto);

  }
  // liberamos memoria

  destroy_bitmap(buffer);
  destroy_bitmap(bufferBasin);
  destroy_bitmap(bufferBarrel[1]);
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
          rectfill(bufferBasin, 0, 0, basinWidth, basinHeight, 0xdcffff);
          cout<< "angle = "<< angle<< endl;
          rotate_sprite(bufferBasin,bufferBarrel[1],(700/2),(900/2),b);
          //show_mouse(bufferBasin);
          draw_sprite(bufferBasin, buffer_text, 200,300);
          blit(bufferBasin,screen,0,0,0,0,700, 900);
                  for (int c=0; c!=9996546; c ++)
                  {
                      h=h+c;
                  }

          }
      }*/
}

END_OF_MAIN();

void ust() {
  waterLevel = basinHeight * surface;
  l_1 = basinHeight - paddingTopBottom - paddingTopBottom;
  l_2 = l_1;
  r_1 = 3.14 * 75 * 1.8;
  r_2 = r_1;
  circleLength = l_1 + l_2 + r_1 + r_2;
  bufferBasin = create_bitmap(basinWidth, basinHeight);
  {
    int b = 1;
    for (int a = 0; a <= circleLength + 70; a = a + 68) {
      numbers[b] = a;
      arrayNumberBarrel[b] = b;
      // cout<<"numbers[b] = "<<numbers[b-1]<<"  "<<b<<"  "<<endl;
      cout << "arrayNumberBarrel[b] = " << arrayNumberBarrel[b] << endl;
      b++;
    }
  }
}

void ust1() {
  waterLevel = basinHeight * surface;
  l_1 = basinHeight - paddingTopBottom - paddingTopBottom;
  l_2 = l_1;
  r_1 = 3.14 * 75 * 1.8;
  r_2 = r_1;
  circleLength = l_1 + l_2 + r_1 + r_2;
  ///bufferBasin = create_bitmap(basinWidth, basinHeight);
  {
    int b = 1;
    for (int a = 0; a <= circleLength + 70; a = a + 68) {
      numbers[b] = a;
      arrayNumberBarrel[b] = b;
      // cout<<"numbers[b] = "<<numbers[b-1]<<"  "<<b<<"  "<<endl;
      cout << "arrayNumberBarrel[b] = " << arrayNumberBarrel[b] << endl;
      b++;
    }
  }
}
