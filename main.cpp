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
#include "include/const.h"
#include "include/variable.h"


BITMAP * buffer;
BITMAP * bufferBasin;
BITMAP * bufferBarrel[3];
BITMAP * buffer_text;



volatile int timer;
void increment_timer() {
  timer++;
}
END_OF_FUNCTION(increment_timer)

#include "include/pause_ms.h"
#include "include/barrel.h"
#include "include/basin.h"
#include "include/keyboard.h"


int main() {

  allegro_init();
  install_keyboard();
  set_color_depth(32);
  set_gfx_mode(GFX_AUTODETECT_WINDOWED, ancho, alto, 0, 0);

  buffer = create_bitmap(ancho, alto);
  bufferBasin = create_bitmap(BASIN_WIDTH, basinHeight);
  bufferBarrel[1] = create_bitmap(BARREL_WIDTH, BARREL_HEIGHT);
  buffer_text = create_bitmap(400, 800);


#include "include/create_barrels.h"

  clear_to_color(buffer, 0xdddddd);

  while (!key[KEY_ESC]) {

    keyboard();
    //waterLevel = basinHeight *0.75;
    basin();

    #include "include/main_loop.h"

    draw_sprite(buffer, bufferBasin, 400, basinBottom);
    #include "include/print_info.h"
    masked_blit(buffer, screen, camera_x, camera_y, 0, 0, ancho, alto);

  }

  destroy_bitmap(buffer);
  destroy_bitmap(bufferBasin);
  destroy_bitmap(bufferBarrel[1]);
  destroy_bitmap(buffer_text);

  return 0;
}

END_OF_MAIN();
