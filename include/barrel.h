//����� ����� � �������
void barrel() {

  int ss=5;
  rectfill(bufferBarrel[1], barrelWidth / 3, 0, barrelWidth / 3 * 2, barrelHeight * 0.2, 0x5c8fff);
  rectfill(bufferBarrel[1], 0, (int) yHeight, barrelWidth, barrelHeight, 0xdc8fff);
  rectfill(bufferBarrel[1], 0, (int) yHeight, barrelWidth, yHeight + workingHeight * halfPiston, 0x5c8fff);
  rectfill(bufferBarrel[1], 0, (int) yHeight + workingHeight * halfPiston, barrelWidth, yHeight + workingHeight * halfPiston + (workingHeight / 6), 0x2c8f2f);
  textprintf_ex(bufferBarrel[1], font, 3, 20, makecol(255, 100, 200), -1, "%d", arrayNumberBarrel[num]);
  //textout_ex(bufferBarrel[1], font ,ss , 10, 10 ,makecol(0, 0, 255), -1);
  //rectfill(bufferBarrel, 0, 20, barrelWidth, barrelHeight, 0xdc8fff);
  //rectfill(bufferBarrel_vuxod, 0, 0, barrelWidth/3, barrelHeight*0.2, 0xdc8fff);

}


class Barrel {
  int pol_x;
  int pol_y;
  int halfPiston;
  int pol_kut;
  int pol_zona;
  int numberBarrel;
  public:
    Barrel() {}

  void setBarrel() {
    int a = 1;
    rectfill(bufferBarrel[a], barrelWidth / 3, 0, barrelWidth / 3 * 2, barrelHeight * 0.2, 0x5c8fff);
    rectfill(bufferBarrel[a], 0, yHeight, barrelWidth, barrelHeight, 0xdc8fff);
    rectfill(bufferBarrel[a], 0, yHeight, barrelWidth, yHeight + workingHeight * halfPiston, 0x5c8fff);
    rectfill(bufferBarrel[a], 0, yHeight + workingHeight * halfPiston, barrelWidth, yHeight + workingHeight * halfPiston + (workingHeight / 6), 0x2c8f2f);
    // textprintf_ex(bufferBarrel[a], font, 20, 20, makecol(255, 100, 200),-1,"y: %f",  numberBarrel);
  }

  void setNumberBarrel(int a) {
    numberBarrel = a;
  }

   ~Barrel() {}

};
