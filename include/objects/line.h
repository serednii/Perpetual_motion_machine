
void line(int x, int y, int half, int pole) {

  const int widthElement = cell - 4;
  //y=1;
  //pole = 1;

  if (pole == 0) {
    x = 2 + (cell * x);
    y = 2 + (cell * y);
  } else {
    x = 2 + (cell * x);
    y = 2 + (cell * y);
  }

  if (half == 0) //��������� ������� �������������
  {
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf00060);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xa05580);
    x += cell;

    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf00060);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xa05580);
    x += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf00060);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xa05580);
    x += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf00060);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xa05580);
  }
  if (half == 1) //��������� ������� �����������
  {
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf00060);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xa05580);

    y += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf00060);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xa05580);
    y += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf00060);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xa05580);
    y += cell;

    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0xf00060);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0xa05580);
  }

}



int lineСheck(int a, int b) //� - ��������� ����������� ��� �������������

{

  int a1;
  if (a == 0) //�������� ������������� �������
  {

    if (b == 0 || b == 10) {

      if (getpixel(copyBuffer_0, side * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;

      if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;

      if (getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;

      if (getpixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
    }

    if (b == 1 || b == 10) {
      if (getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded) return 1;
    }

    if (b == 2 || b == 10) {
      if (getpixel(copyBuffer_0, (side + 4) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded) return 1;
    }

  }

  if (a == 1) {
    if (b == 0 || b == 10) { //������ � ����
      a1 = getpixel(copyBuffer_0, side * cell + (cell / 2), (step + 4) * cell + (cell / 2));
      if (a1 != 0xa0fded) return 1;
    }

    if (b == 1 || b == 10) { //������ � ���
      a1 = getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2));
      if (a1 != 0xa0fded) return 1;
      a1 = getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2));
      if (a1 != 0xa0fded) return 1;
      a1 = getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2));
      if (a1 != 0xa0fded) return 1;
      a1 = getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2));
      if (a1 != 0xa0fded) return 1;
    }

    if (b == 2 || b == 10) { //������ � �����
      a1 = getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), step * cell + (cell / 2));
      if (a1 != 0xa0fded) return 1;
      a1 = getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2));
      if (a1 != 0xa0fded) return 1;
      a1 = getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2));
      if (a1 != 0xa0fded) return 1;
      a1 = getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2));
      if (a1 != 0xa0fded) return 1;
    }

  }

  return 0;

}

void lineRotate() {

  if (halfObject == 1) {




    int right = 0;

    if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != 0xa0fded) {
      goto next;
    }
    right++;


    if (getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != 0xa0fded) {
      ;
      goto next;
    }
    right++;

    next:

      if (getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded ||
        getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded ||
        getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded ||
        getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != 0xa0fded) {
        if (getpixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded ||
          getpixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded ||
          getpixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != 0xa0fded) {
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

    if (getpixel(copyBuffer_0, (side - 2) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side - 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side - 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side - 2) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != 0xa0fded) {
      goto exit;
    } else {
      if (right == 1) {
        step++, side -= 2, halfObject = 0;
        goto exit;
      }

    }

    if (getpixel(copyBuffer_0, (side - 3) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side - 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side - 3) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side - 3) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != 0xa0fded) {
      goto exit;
    } else {
      step++, side -= 3, halfObject = 0;
      goto exit;
    }

    exit: ;

  } else {
    if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) {} else {
      step--, side += 1, halfObject = 1;
    }

  }

}