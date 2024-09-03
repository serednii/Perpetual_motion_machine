void grid() {
  int setka_x = KLITUNKA, setka_y = KLITUNKA;
  int kolir_setka = 0x000000;
  for (int a = setka_x + KLITUNKA; a <= setka_x + hurina - KLITUNKA; a += KLITUNKA) {
    vline(buffer0, a, setka_y, setka_y + vusota, kolir_setka);
  }

  for (int a = setka_y + KLITUNKA; a <= setka_y + vusota - KLITUNKA; a += KLITUNKA) {
    hline(buffer0, setka_x, a, setka_x + hurina, kolir_setka);
  }
  rect(buffer0, setka_x, setka_y, setka_x + hurina, setka_y + vusota, 0x000000);

  for (int a = xx2 + KLITUNKA; a <= xx2 + hurina1 - KLITUNKA; a += KLITUNKA) {
    vline(buffer, a, yy1, yy1 + vusota1, kolir_setka);
  }

  for (int a = yy2 + KLITUNKA; a <= yy2 + vusota1 - KLITUNKA; a += KLITUNKA) {
    hline(buffer, xx2, a, xx2 + hurina1, kolir_setka);
  }
  rect(buffer, xx2, yy2, xx2 + hurina1, yy2 + vusota1, 0x000000);
}