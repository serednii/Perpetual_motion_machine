      for (int a = 0; a != numberTanks; a++) {
        num = a;
        barrel();
        clear_to_color(buffer_text, 0xdddddd);
      //left vertical
        if (numbers[a] < l_1 && numbers[1] > 0) {
          rotate_sprite(bufferBasin, bufferBarrel[1], CENTER - half - (BARREL_WIDTH / 2) - 4, basinHeight - PADDING - numbers[a], 0);
        }
        //top circle
        if (numbers[a] < l_1 + r_1 && numbers[a] > l_1) {
          float l = (numbers[a] - l_1);
          float t = 3.14 + l * (3.15 / r_1); //2.95
          float x, y, x1, y1;
          float rad = half;
          x = (rad * (cos(t))); ///68
          y = (rad * (sin(t))); ///80
          float rlk = t - 1.5;
          int angle = 0;
          angle = 8400000 / r_1 * l;
          rotate_sprite(bufferBasin, bufferBarrel[1], x + CENTER + 25 * cos(rlk) - (BARREL_WIDTH / 2), y + PADDING + 25 * sin(rlk) - (BARREL_HEIGHT / 2), angle);
          line(bufferBasin, CENTER, PADDING, x + CENTER, y + PADDING, 0xff0000);
          line(bufferBasin, x + CENTER, y + PADDING, x + CENTER + 25 * cos(rlk), y + PADDING + 25 * sin(rlk), 0xff0000);
        }
        // right vertical
        if (numbers[a] < l_1 + r_1 + l_2 && numbers[a] > l_1 + r_1) {
          rotate_sprite(bufferBasin, bufferBarrel[1], CENTER + half - (BARREL_WIDTH / 2) + 1, basinHeight - PADDING + numbers[a] - l_1 - r_1 - l_2 - (BARREL_HEIGHT), 8400000);
        }
        //bottom
        if (numbers[a] < l_1 + r_1 + l_2 + r_2 && numbers[a] > l_1 + r_1 + l_2) {
          float l = (numbers[a] - l_1 - r_1 - l_2);
          float t = l * (3.15 / r_2); //2.95
          float x, y;
          float rad = half;
          x = (rad * (cos(t))); ///68
          y = (rad * (sin(t))); ///80
          float rlk = t - 1.5 + 3.14;
          int angle = 8400000 / r_2 * l;
          rotate_sprite(bufferBasin, bufferBarrel[1], x + CENTER - 25 * cos(rlk) - (BARREL_WIDTH / 2), y + PADDING + l_1 - 25 * sin(rlk) - (BARREL_HEIGHT / 2), angle - 8400000);
          line(bufferBasin, CENTER, PADDING + l_1, x + CENTER, y + PADDING + l_1, 0xff0000);
          line(bufferBasin, x + CENTER, y + PADDING + l_1, x + CENTER - 25 * cos(rlk), y + PADDING + l_1 - 25 * sin(rlk), 0xff0000);
        }
      }

      //displacement of barrels in the massif

      if (!pause) {
        for (int a = 0; a != numberTanks; a++) {
          if (numbers[a] > (numberTanks - 1) * LL) {
            numbers[a] = 0;
          } else {
            numbers[a] = numbers[a] + Y;
          }
          if (numbers[a] < 0) {
            numbers[a] = (numberTanks + 1) * LL;
          }
        }
      }