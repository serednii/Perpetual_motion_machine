void square(int x, int y, int pole) {

  const int widthElement = cell - 4;
  const int color = 0xf0f000;
  const int color1 = 0xf0000f;
  if (pole == 0) {
    x = 2 + (cell * x);
    y = 2 + (cell * y);
  } else {
    x = 2 + (cell * x);
    y = 2 + (cell * y);
  }

  rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
  rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
  x += cell;

  rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
  rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
  x -= cell;
  y += cell;
  rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
  rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
  x += cell;
  rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
  rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
}

