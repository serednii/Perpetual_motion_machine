void square(int x, int y, int pole) {

  const int widthElement = cell - 4;

  if (pole == 0) {
    x = 2 + (cell * x);
    y = 2 + (cell * y);
  } else {
    x = 2 + (cell * x);
    y = 2 + (cell * y);
  }

  rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf0f000);
  rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xf0000f);
  x += cell;

  rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf0f000);
  rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xf0000f);
  x -= cell;
  y += cell;
  rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf0f000);
  rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xf0000f);
  x += cell;
  rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf0f000);
  rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xf0000f);
}

