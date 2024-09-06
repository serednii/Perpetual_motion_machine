void grid() {
  int column = cell, row = cell;
  int gridColor = 0x000000;
  for (int a = column + cell; a <= column + width - cell; a += cell) {
    vline(buffer0, a, row, row + height, gridColor);
  }

  for (int a = row + cell; a <= row + height - cell; a += cell) {
    hline(buffer0, column, a, column + width, gridColor);
  }
  rect(buffer0, column, row, column + width, row + height, 0x000000);

  for (int a = xx2 + cell; a <= xx2 + width1 - cell; a += cell) {
    vline(buffer, a, yy1, yy1 + height1, gridColor);
  }

  for (int a = yy2 + cell; a <= yy2 + height1 - cell; a += cell) {
    hline(buffer, xx2, a, xx2 + width1, gridColor);
  }
  
  rect(buffer, xx2, yy2, xx2 + width1, yy2 + height1, 0x000000);

}