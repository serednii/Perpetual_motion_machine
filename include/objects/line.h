
void line(int x, int y, int half, int pole) {

  const int widthElement = cell - 4;
  const int color = 0xf00060;
  const int color1 = 0xa05580;

  if (pole == 0) {
    x = 2 + (cell * x);
    y = 2 + (cell * y);
  } else {
    x = 2 + (cell * x);
    y = 2 + (cell * y);
  }

  if (half == 0) 
  {
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
    x += cell;

    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
    x += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
    x += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
  }
  if (half == 1) 
  {
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);

    y += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
    y += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
    y += cell;

    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
  }

}



int lineCheck(int a, int b) 

{
  const int color = 0xa0fded;
  int a1;
  if (a == 0) 
  {

    if (b == 0 || b == 10) {

      if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;

      if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;

      if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;

      if (getPixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
    }

    if (b == 1 || b == 10) {
      if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
    }

    if (b == 2 || b == 10) {
      if (getPixel(copyBuffer_0, (side + 4) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
    }

  }

  if (a == 1) {
    if (b == 0 || b == 10) { //������ � ����
      a1 = getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 4) * cell + (cell / 2));
      if (a1 != color) return 1;
    }

    if (b == 1 || b == 10) { //������ � ���
      a1 = getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2));
      if (a1 != color) return 1;
      a1 = getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2));
      if (a1 != color) return 1;
      a1 = getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2));
      if (a1 != color) return 1;
      a1 = getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2));
      if (a1 != color) return 1;
    }

    if (b == 2 || b == 10) { //������ � �����
      a1 = getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), step * cell + (cell / 2));
      if (a1 != color) return 1;
      a1 = getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2));
      if (a1 != color) return 1;
      a1 = getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2));
      if (a1 != color) return 1;
      a1 = getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2));
      if (a1 != color) return 1;
    }

  }

  return 0;

}

void lineRotate() {
  const int color = 0xa0fded;

  if (halfObject == 1) {

    int right = 0;

    if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) {
      goto next;
    }
    right++;

    if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) {
      ;
      goto next;
    }
    right++;

    next:

      if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) != color ||
        getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
        getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color ||
        getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) {
        if (getPixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
          getPixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color ||
          getPixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) {
          goto exit;

        } else {
          step++, halfObject = 0;
          goto exit;
        }
        right++;

      } else {
        if (right > 1) {
          step++, side--, halfObject = 0;
          goto exit;
        }

      }

    if (getPixel(copyBuffer_0, (side - 2) * cell + (cell / 2), step * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side - 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side - 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side - 2) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) {
      goto exit;
    } else {
      if (right == 1) {
        step++, side -= 2, halfObject = 0;
        goto exit;
      }

    }

    if (getPixel(copyBuffer_0, (side - 3) * cell + (cell / 2), step * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side - 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side - 3) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side - 3) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) {
      goto exit;
    } else {
      step++, side -= 3, halfObject = 0;
      goto exit;
    }

    exit: ;

  } else {
    if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color ||
      getPixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) {} else {
      step--, side += 1, halfObject = 1;
    }

  }

}