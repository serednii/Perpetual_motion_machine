void basin() {
  ///CENTER  half
  const int color = 0xdc00ff;
  const int color1 = 0xf0ff00;

  rectfill(bufferBasin, 0, 0, BASIN_WIDTH, basinHeight, 0xdcffff);
  rectfill(bufferBasin, 0, basinHeight - waterLevel, BASIN_WIDTH, basinHeight, 0x4de8ff);

  for (int a = 0; a != 300; a = a + 10) {
    line(bufferBasin, 200 + a, PADDING, 205 + a, PADDING, color);
    line(bufferBasin, 200 + a, PADDING + l_1, 205 + a, PADDING + l_1, color);
  }

    line(bufferBasin, CENTER - half + (BARREL_WIDTH / 2) + 1, PADDING, CENTER - half + (BARREL_WIDTH / 2) + 1, PADDING + l_1, color);
    line(bufferBasin, CENTER + half - (BARREL_WIDTH / 2) - 4, PADDING, CENTER + half - (BARREL_WIDTH / 2) - 4, PADDING + l_1, color);

    line(bufferBasin, CENTER - half - BARREL_WIDTH + (BARREL_WIDTH / 2) - 1, 0, CENTER - half - BARREL_WIDTH + (BARREL_WIDTH / 2) - 1, PADDING + l_1, color1);
    line(bufferBasin, CENTER + half + BARREL_WIDTH - (BARREL_WIDTH / 2) - 1, 0, CENTER + half + BARREL_WIDTH - (BARREL_WIDTH / 2) - 1, PADDING + l_1, color1);
    line(bufferBasin, CENTER + half + BARREL_WIDTH - (BARREL_WIDTH / 2) - 1, 0, CENTER + half + BARREL_WIDTH - (BARREL_WIDTH / 2) - 1, PADDING + l_1, color1);

    for (float t = 3.24; t <= 6.18; t = t + 0.01) {
      float x, y;
      x = 75 * (0.5 + 2 * cos(t));
      y = 75 * (0.5 + 2 * sin(t));
      putpixel(bufferBasin, x + 313, y + PADDING - 20, color1);
    }

    for (float t = 6.18; t <= 6.18 + 3.33; t = t + 0.01) {
      float x, y;
      x = 75 * (0.5 + 2 * cos(t));
      y = 75 * (0.2 + 2 * sin(t));
      putpixel(bufferBasin, x + 313, y + (basinHeight - PADDING), color1);
    }



}