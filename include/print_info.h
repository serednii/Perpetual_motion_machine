    const int TEXT_X_START = 10;
    int textY = 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "INDENTATION_BETWEEN_BARRELS: %d", INDENTATION_BETWEEN_BARRELS);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "basinHeight: %d", basinHeight);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "waterLevel: %d", waterLevel);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "basinHeight-waterLevel: %d", basinHeight - waterLevel); 
     textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "WORKING_HEIGHT: %d", WORKING_HEIGHT);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "Y_Height: %d", Y_Height);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "circleLength: %d", circleLength);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "r_2: %f", r_2);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "numberTanks: %f", numberTanks - 1);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "basinHeight: %f", basinHeight);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "l_1: %f", l_1);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "r_1: %f", r_1);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "radius: %f", radius);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "BARREL_HEIGHT: %d", BARREL_HEIGHT);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "BARREL_WIDTH: %d", BARREL_WIDTH);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "t: %f", temp);
      textY += 10;
    textprintf_ex(buffer_text, font, TEXT_X_START, textY, makecol(255, 100, 200), -1, "LL: %f", LL);
      textY += 20;
    for (int a = 0; a <= 50; a++) { ///2.05+l*(3.15/r_2)
      if (numbers[a] < l_1 + r_1 + l_2 + r_2 && numbers[a] > l_1 + r_1 + l_2) {
        textprintf_ex(buffer_text, font, TEXT_X_START, 200 + (a * 10), makecol(255, 100, 200), -1, "numbers[R2]:%f", 2.05 + (numbers[a] - l_1 - r_1 - l_2) * (3.15 / r_2));
      } else {
        if (numbers[a] < l_1 + r_1 && numbers[a] > l_1) {
          textprintf_ex(buffer_text, font, TEXT_X_START, 200 + (a * 10), makecol(255, 100, 200), -1, "numbers[R1]:%f", 2.05 + (numbers[a] - l_1) * (3.15 / r_2));
        } else {
          if (numbers[a] < l_1 && numbers[1] > 0) {
            textprintf_ex(buffer_text, font, TEXT_X_START, 200 + (a * 10), makecol(255, 100, 200), -1, "numbers[L1]:%f", (numbers[a]));
          } else {
            if (numbers[a] < l_1 + r_1 + l_2 && numbers[a] > l_1 + r_1) {
              textprintf_ex(buffer_text, font, TEXT_X_START, 200 + (a * 10), makecol(255, 100, 200), -1, "numbers[L2]:%f", (numbers[a] - l_1 - r_1 - l_2));
            } else {
              textprintf_ex(buffer_text, font, TEXT_X_START, 200 + (a * 10), makecol(255, 100, 200), -1, "numbers[]:%f", numbers[a]);
            }
          }
        }
      }
    }

    draw_sprite(buffer, buffer_text, 0, 0);