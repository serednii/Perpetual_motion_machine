void keyboard() {
  if (key[KEY_ESC])

    int kk = key[KEY_DOWN];

  if (key[KEY_PLUS_PAD]) {
    if (SURFACE_LEVEL < 0.98) {
      SURFACE_LEVEL = SURFACE_LEVEL + 0.002;
      waterLevel = basinHeight * SURFACE_LEVEL;
      basin();
    }
  }

  if (key[KEY_MINUS_PAD]) {
    if (SURFACE_LEVEL > 0.05) {
      SURFACE_LEVEL = SURFACE_LEVEL - 0.002;
      waterLevel = basinHeight * SURFACE_LEVEL;
      basin();
    }
  }

  if (key[KEY_UP]) {
    if (basinBottom < 0) {
      basinBottom = basinBottom + 12;
    }
  }

  if (key[KEY_DOWN]) {
    if ((alto - basinHeight) < basinBottom) {
      basinBottom = basinBottom - 12;
    }
  }




  if (key[KEY_8_PAD]) {
    for (int i = 0; i != 100000; i++) {
      i = i;
    }
    LL = LL + 0.01;
  }

  if (key[KEY_2_PAD]) {
    for (int i = 0; i != 100000; i++) {
      i = i;
    }
    LL = LL - 0.01;
  }




  if (key[KEY_O]) {
    if (pause) {
      pause = false;
    }

  }

  if (key[KEY_P]) {
    if (!pause) {
      pause = true;
    }

  }

}