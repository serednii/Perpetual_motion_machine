//����� ����� ������������� ��� �����������
void triangle(int x, int y, int half, int pole) {

  const int HURUNA_ELEMENTA = KLITUNKA - 4;

  if (pole == 0) {
    x = 2 + (KLITUNKA * x);
    y = 2 + (KLITUNKA * y);
  } else {
    x = 2 + (KLITUNKA * x);
    y = 2 + (KLITUNKA * y);
  }

  //
  //  X
  //��������� 

  if (half == 0) //��������� ���������� �� ����
  {
    y += KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);

    x += KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);
    y -= KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);
    x += KLITUNKA;
    y += KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);
  }

  //��������� //  X
  if (half == 1) //��������� ���������� �� ����
  {
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);

    x += KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);
    x += KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);
    x -= KLITUNKA;
    y += KLITUNKA;

    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);
  }
  //  X

  //��������� //  X
  if (half == 2) //��������� ���������� � ˲��
  {
    y += KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);

    x += KLITUNKA;
    y -= KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);
    y += KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);
    y += KLITUNKA;

    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);
  }

  //  X
  //  XX
  //��������� //  X

  if (half == 3) //��������� ���������� � �����
  {

    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);

    y += KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);
    y += KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);
    y -= KLITUNKA;
    x += KLITUNKA;
    rectfill(kopy_buffer0, x, y, x + HURUNA_ELEMENTA, y + HURUNA_ELEMENTA, 0x000000);
    rectfill(kopy_buffer0, x + 2, y + 2, x + HURUNA_ELEMENTA - 2, y + HURUNA_ELEMENTA - 2, 0xf0f00f);

  }

}

//�������� ���� ������ ����� ���� �� ����
int triangleСheck(int a, int b) //� - ���������
//b - � ��� ������� ��������� 0- �����
//                             1- ����
//                             2- ������
//                             10- � ����� �����
{

  //palka(vboku, krok, 0, 0);
  //13617097 ���� ����
  //14540253 ���� ����

  if (a == 0) //��������   ���������� ���������� �� ����
  {

    if (b == 0 || b == 10) { //�������� � ����

      if (getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 1) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }
    if (b == 1 || b == 10) { //�������� � ���
      if (getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), krok * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku - 1) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }

    if (b == 2 || b == 10) { //�������� � �����
      if (getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), krok * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 3) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }

  }

  if (a == 1) //�������� ���������� ���������� � ���
  {
    if (b == 0 || b == 10) { //������ � ����
      if (getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 1) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }

    if (b == 1 || b == 10) { //������ � ���
      if (getpixel(kopy_buffer0, (vboku - 1) * KLITUNKA + (KLITUNKA / 2), krok * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }

    if (b == 2 || b == 10) { //������ � �����
      if (getpixel(kopy_buffer0, (vboku + 3) * KLITUNKA + (KLITUNKA / 2), krok * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }

  }

  if (a == 2) //�������� ���������� ���������� � ���
  {

    if (b == 0 || b == 10) { //�p����� � ����
      if (getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 1) * KLITUNKA + (KLITUNKA / 2), (krok + 3) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }

    if (b == 1 || b == 10) { //������ � ���
      if (getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), krok * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku - 1) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }

    if (b == 2 || b == 10) { //������ � �����
      if (getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }
  }

  if (a == 3) //�������� ���������� ���������� � �����
  {

    if (b == 0 || b == 10) { //������ � ����
      if (getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), (krok + 3) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 1) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }

    if (b == 1 || b == 10) { //������ � ���
      if (getpixel(kopy_buffer0, (vboku - 1) * KLITUNKA + (KLITUNKA / 2), krok * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku - 1) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku - 1) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }

    if (b == 2 || b == 10) { //������ � �����
      if (getpixel(kopy_buffer0, (vboku + 1) * KLITUNKA + (KLITUNKA / 2), krok * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
      if (getpixel(kopy_buffer0, (vboku + 1) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) return 1;
    }

  }

  return 0;

}
void triangleRotate() {

  if (halfObject == 0) {

    if (getpixel(kopy_buffer0, (vboku) * KLITUNKA + (KLITUNKA / 2), (krok) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded ||
      getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded ||
      getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded ||
      getpixel(kopy_buffer0, (vboku + 1) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) {

    } else {
      halfObject = 3, vboku += 1;
      //�������� ����� �� ����������� ������
    }

    //������� ����� �����
    return;

  }

  if (halfObject == 1) {
    if (getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), (krok - 1) * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded &&
      getpixel(kopy_buffer0, (vboku + 1) * KLITUNKA + (KLITUNKA / 2), (krok - 1) * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded &&
      getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded &&
      getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded) {
      halfObject = 2, krok -= 1;
      //�������� ����� �� ����������� ������
    }
    return;
  }
  if (halfObject == 3) { //halfObject=1;//�������� ����� �� ����������� ������

    if (getpixel(kopy_buffer0, (vboku + 1) * KLITUNKA + (KLITUNKA / 2), krok * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded ||
      getpixel(kopy_buffer0, (vboku + 1) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) {
      return;
    }

    if (getpixel(kopy_buffer0, (vboku - 1) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded &&
      getpixel(kopy_buffer0, (vboku - 1) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded) {
      halfObject = 1, krok += 1, vboku -= 1; //�������� ����� �� ����������� ������
    } else {
      if (getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), krok * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded &&
        getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded) {
        halfObject = 1, krok += 1; //�������� ����� �� ����������� ������
      }

    }
    return;
  }

  if (halfObject == 2) {

    if (getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), krok * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded ||
      getpixel(kopy_buffer0, vboku * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) != 0xa0fded) {
      return;
    }

    if (getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), krok * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded &&
      getpixel(kopy_buffer0, (vboku + 2) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded) {
      halfObject = 0; //�������� ����� �� ����������� ������
    } else {
      if (getpixel(kopy_buffer0, (vboku - 1) * KLITUNKA + (KLITUNKA / 2), (krok + 1) * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded &&
        getpixel(kopy_buffer0, (vboku - 1) * KLITUNKA + (KLITUNKA / 2), (krok + 2) * KLITUNKA + (KLITUNKA / 2)) == 0xa0fded) {
        halfObject = 0, vboku -= 1; //�������� ����� �� ����������� ������
      }
    }

    return;
  }

}