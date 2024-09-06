
void lLeft(int x, int y, int half, int pole) {

  const int widthElement = cell - 4;

  if (pole == 0) {
    x = 2 + (cell * x);
    y = 2 + (cell * y);
  } else {
    x = 2 + (cell * x);
    y = 2 + (cell * y);
  }


  if (half == 0)

  {
    y += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);

    x += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);
    x += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);

    y -= cell;

    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);
  }


  if (half == 1) {
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);

    y += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);
    x += cell;
    y -= cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);
    x += cell;

    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);
  }


  if (half == 2) {
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);

    x += cell;

    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);
    y += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);
    y += cell;

    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);
  }

  if (half == 3)

  {
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);

    y += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);
    y += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);

    x += cell;
    rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, 0x500030);
    rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, 0x00407f);

  }

}

int lLeftСheck(int a, int b) 

{


  if (a == 0) 
  {

    if (b == 0 || b == 10) { 

      if (getpixel(copyBuffer_0, side * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded) return 1;
    }
    if (b == 1 || b == 10) { //�������� � ���
      if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
    }

    if (b == 2 || b == 10) { //�������� � �����
      if (getpixel(copyBuffer_0, (side + 3) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
    }

  }

  if (a == 1) 
  {
    if (b == 0 || b == 10) { //������ � ����
      if (getpixel(copyBuffer_0, side * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
    }

    if (b == 1 || b == 10) { //������ � ���
      if (getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
    }

    if (b == 2 || b == 10) { //������ � �����
      if (getpixel(copyBuffer_0, (side + 3) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
    }

  }

  if (a == 2) 
  {

    if (b == 0 || b == 10) { //������ � ����
      if (getpixel(copyBuffer_0, side * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != 0xa0fded) return 1;
    }

    if (b == 1 || b == 10) { //������ � ���
      if (getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, side * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, side * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded) return 1;
    }

    if (b == 2 || b == 10) { //������ � �����
      if (getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded) return 1;
    }
  }

  if (a == 3) 
  {

    if (b == 0 || b == 10) { //������ � ����
      if (getpixel(copyBuffer_0, side * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != 0xa0fded) return 1;

    }

    if (b == 1 || b == 10) { //������ � ���
      if (getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded) return 1;
    }

    if (b == 2 || b == 10) { //������ � �����
      if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) return 1;
      if (getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded) return 1;
    }

  }

  return 0;

}
/
void lLeftRotate() {

  //*********************************0-3****************************************************
  if (halfObject == 0) {

    if (getpixel(copyBuffer_0, (side) * cell + (cell / 2), (step) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded) {
    } else {
      halfObject = 3, side += 1;
     
    }
   
    return;

  }


  //********************************1-2*****************************************************
  if (halfObject == 1) {
    if (getpixel(copyBuffer_0, side * cell + (cell / 2), (step - 1) * cell + (cell / 2)) == 0xa0fded &&
      getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step - 1) * cell + (cell / 2)) == 0xa0fded &&
      getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == 0xa0fded &&
      getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == 0xa0fded) {
      halfObject = 2, step -= 1;
     
    }
    return;
  }
 

  //*************************************3-1************************************************
  if (halfObject == 3) {

    if (getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), step * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded) {
      return;
    }

    if (getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == 0xa0fded &&
      getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) == 0xa0fded) {
      halfObject = 1, step += 1, side -= 1; //�������� ����� �� ����������� ������
    } else {
      if (getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), step * cell + (cell / 2)) == 0xa0fded &&
        getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == 0xa0fded) {
        halfObject = 1, step += 1; //�������� ����� �� ����������� ������
      }

    }
    return;
  }

  //***********************************2-0**************************************************

  if (halfObject == 2) {

    if (getpixel(copyBuffer_0, side * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != 0xa0fded ||
      getpixel(copyBuffer_0, side * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != 0xa0fded) {
      return;
    }

    if (getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), step * cell + (cell / 2)) == 0xa0fded &&
      getpixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == 0xa0fded) {
      halfObject = 0;
    } else {
      if (getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == 0xa0fded &&
        getpixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) == 0xa0fded) {
        halfObject = 0, side -= 1; 
      }
    }

    return;
  }
}