void keyboard() {
  if (key[KEY_ESC])

    int kk = key[KEY_DOWN];

  if (key[KEY_PLUS_PAD]) {
    if (surface < 0.98) {
      surface = surface + 0.002;
      waterLevel = basinHeight * surface;
      basin();
    }
  }

  if (key[KEY_MINUS_PAD]) {
    if (surface > 0.05) {
      surface = surface - 0.002;
      waterLevel = basinHeight * surface;
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

  if (key[KEY_7_PAD]) {

    numberTanks = numberTanks + 2;
    basinHeight = basinHeight + 73.4;
    ust();
    for (int i = 0; i != 10000000; i++) {
      i = i;
    }
  }

  if (key[KEY_1_PAD]) {
    for (int i = 0; i != 10000000; i++) {
      i = i;
    }

    numberTanks = numberTanks - 2;
    basinHeight = basinHeight - 73.4;
    ust();
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

  if (key[KEY_9_PAD]) {
    for (int i = 0; i != 10000000; i++) {
      i = i;
    }
    basinHeight = basinHeight + 0.3;
    ust1();
  }

  if (key[KEY_3_PAD]) {

    for (int i = 0; i != 10000000; i++) {
      i = i;
    }

    basinHeight = basinHeight - 0.3;
    ust1();
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