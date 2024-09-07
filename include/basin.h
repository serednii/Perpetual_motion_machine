

void basin() {
  ///center  half
  const int color = 0xdc00ff;
  const int color1 = 0xf0ff00;

  rectfill(bufferBasin, 0, 0, basinWidth, basinHeight, 0xdcffff);
  rectfill(bufferBasin, 0, basinHeight - waterLevel, basinWidth, basinHeight, 0x4de8ff);

  for (int a = 0; a != 300; a = a + 10) {
    line(bufferBasin, 200 + a, paddingTopBottom, 205 + a, paddingTopBottom, color);
    line(bufferBasin, 200 + a, paddingTopBottom + l_1, 205 + a, paddingTopBottom + l_1, color);
  }

    line(bufferBasin, center - half + (barrelWidth / 2) + 1, paddingTopBottom, center - half + (barrelWidth / 2) + 1, paddingTopBottom + l_1, color);
    line(bufferBasin, center + half - (barrelWidth / 2) - 4, paddingTopBottom, center + half - (barrelWidth / 2) - 4, paddingTopBottom + l_1, color);
  
    line(bufferBasin, center - half - barrelWidth + (barrelWidth / 2) - 1, 0, center - half - barrelWidth + (barrelWidth / 2) - 1, paddingTopBottom + l_1, color1);
    line(bufferBasin, center + half + barrelWidth - (barrelWidth / 2) - 1, 0, center + half + barrelWidth - (barrelWidth / 2) - 1, paddingTopBottom + l_1, color1);
    line(bufferBasin, center + half + barrelWidth - (barrelWidth / 2) - 1, 0, center + half + barrelWidth - (barrelWidth / 2) - 1, paddingTopBottom + l_1, color1);

    for (float t = 3.24; t <= 6.18; t = t + 0.01) {
      float x, y;
      x = 75 * (0.5 + 2 * cos(t));
      y = 75 * (0.5 + 2 * sin(t));
      putpixel(bufferBasin, x + 313, y + paddingTopBottom - 20, color1);
    }

    for (float t = 6.18; t <= 6.18 + 3.33; t = t + 0.01) {
      float x, y;
      x = 75 * (0.5 + 2 * cos(t));
      y = 75 * (0.2 + 2 * sin(t));
      putpixel(bufferBasin, x + 313, y + (basinHeight - paddingTopBottom), color1);
    }

  

}