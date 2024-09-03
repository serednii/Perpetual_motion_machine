void fullTerm() {

  int y, m;
  for (y = kil_kubik_vusota; y >= 1; y--) {

    if (perevirka_stroku(y) == true) {
      //sop=true;
      play_sample(sonido2, volume, pan, pitch, false);
      ohustka_stroku(y);
      m = y;

      stretch_blit(kopy_buffer0, kopy_buffer1, KLITUNKA, KLITUNKA, hurina + KLITUNKA, KLITUNKA * m - KLITUNKA, KLITUNKA, KLITUNKA, hurina + KLITUNKA, KLITUNKA * m - KLITUNKA);
      stretch_blit(kopy_buffer1, kopy_buffer0, KLITUNKA, KLITUNKA, hurina + KLITUNKA, KLITUNKA * m - KLITUNKA, KLITUNKA, KLITUNKA * 2, hurina + KLITUNKA, KLITUNKA * m - KLITUNKA);
      draw_sprite(buffer0, kopy_buffer0, 0, 0); //buffer0<kopy_buffer0
      counter += 100;

      //rectfill(buffer0, KLITUNKA, KLITUNKA, hurina+KLITUNKA, KLITUNKA*25, 0xa000ed);
      //rectfill(buffer0, KLITUNKA, KLITUNKA*2, hurina+KLITUNKA, KLITUNKA*2*25, 0x2000ed);

      //clear_to_color(buffer, 0xdddddd);

      //draw_sprite(buffer, kopy_buffer0, xx1,yy1);

      //draw_sprite(buffer, buffer0, 300,yy1);

      //draw_sprite(buffer, kopy_buffer1, 550,yy1);
      //masked_blit(buffer, screen, camera_x, camera_y, 0, 0, ancho, alto);

      // ohustka_stroku11(1);
      y++;
    }

  }

}

bool perevirka_stroku(int y) {
  int x;
  for (x = 1; x <= kil_kubik_hurina; x++) {
    if (getpixel(kopy_buffer0, x * KLITUNKA + (KLITUNKA / 2), y * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded) {
      return false;
    }
  }
  return true;
}

void ohustka_stroku(int y) {
  const int HURUNA_ELEMENTA = KLITUNKA - 4;
  int x, z;
  y = 2 + (KLITUNKA * y);
  for (x = 1; x <= kil_kubik_hurina; x++) {
    z = 2 + (KLITUNKA * x);

    rectfill(kopy_buffer0, z, y, z + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0xa0fded);
    draw_sprite(buffer0, kopy_buffer0, 0, 0); //buffer0<kopy_buffer0
    draw_sprite(buffer, kopy_buffer0, xx1, yy1);
    masked_blit(buffer, screen, camera_x, camera_y, 0, 0, ancho, alto);
    pauseMs(15);
  }

  //rectfill(kopy_buffer0, x, y, (2+(KLITUNKA*x))+KLITUNKA-4, (2+(KLITUNKA*y))+KLITUNKA-4, 0xa0fded);

}

void ohustka_stroku11(int y) {
  const int HURUNA_ELEMENTA = KLITUNKA - 4;
  //y=1;
  //pole = 1;

  int x, z;
  y = 2 + (KLITUNKA * y);

  for (x = 1; x <= kil_kubik_hurina; x++) {
    z = 2 + (KLITUNKA * x);

    rectfill(buffer0, z, y, z + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0xa0fded);

  }

  //rectfill(kopy_buffer0, x, y, (2+(KLITUNKA*x))+KLITUNKA-4, (2+(KLITUNKA*y))+KLITUNKA-4, 0xa0fded);

  //draw_sprite(buffer0,kopy_buffer0,0,0);//buffer0<kopy_buffer0
}