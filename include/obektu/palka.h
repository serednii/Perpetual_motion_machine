

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//����� ����� ������������� ��� �����������
void palka(int x, int y, int polojenna, int pole)
{

const int HURUNA_ELEMENTA=KLITUNKA-4;
//y=1;
//xxx=0;
//yyy = 0;
//pole = 1;

if (pole==0)
{
x =  2+(KLITUNKA*x);
y =  2+(KLITUNKA*y);
}else
{
x =  2+(KLITUNKA*x);
y =  2+(KLITUNKA*y);
}

if (polojenna==0)//��������� ������� �������������
{
                    rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf00060);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xa05580);
                x+=KLITUNKA;

                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf00060);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xa05580);
                x+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf00060);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xa05580);
                x+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf00060);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xa05580);
}
if (polojenna==1)//��������� ������� �����������
{
                    rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf00060);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xa05580);

                y+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf00060);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xa05580);
                y+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf00060);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xa05580);
                y+=KLITUNKA;

                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf00060);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xa05580);
}



}
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************












































//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//�������� ���� ������ ����� ���� �� ����
int palka_proverka(int a,int b)//� - ��������� ����������� ��� �������������
                               //b - � ��� ������� ��������� 0- �����
                                //                             1- ����
                                //                             2- ������
                                //                             10- � ����� �����
{

//palka(vboku, krok, 0, 0);
//13617097 ���� ����
//14540253 ���� ����
int a1;
if (a==0)//�������� ������������� �������
{

if(b==0 || b==10){

 if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;

  if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;

  if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;

 if (getpixel(kopy_buffer0, (vboku+3)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
}



if(b==1 || b==10){
 if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
}

if(b==2 || b==10){
if (getpixel(kopy_buffer0, (vboku+4)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
}

//*************************************************************************************
//*************************************************************************************


}

if (a==1)
{
                 if(b==0 || b==10){//������ � ����
                a1 = getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+4)*KLITUNKA+(KLITUNKA/2));
                 if (a1!=0xa0fded) return 1;
                 }


                 if(b==1 || b==10){//������ � ���
                 a1 = getpixel(kopy_buffer0, (vboku -1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2));
                  if (a1!=0xa0fded) return 1;
                 a1 = getpixel(kopy_buffer0, (vboku -1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2));
                  if (a1!=0xa0fded) return 1;
                 a1 = getpixel(kopy_buffer0, (vboku -1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2));
                 if (a1!=0xa0fded) return 1;
                 a1 = getpixel(kopy_buffer0, (vboku -1)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2));
                 if (a1!=0xa0fded) return 1;
                 }


                if(b==2 || b==10){//������ � �����
                  a1 = getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2));
                  if (a1!=0xa0fded) return 1;
                 a1 = getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2));
                  if (a1!=0xa0fded) return 1;
                 a1 = getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2));
                 if (a1!=0xa0fded) return 1;
                 a1 = getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2));
                 if (a1!=0xa0fded) return 1;
                }



}

return 0;

}
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************


//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
void palka_obertanna()
{

    if (polojena_Obekta==1)
            {

//***************************************************************************************
//���������� �������������

int pravuy = 0;
//�������� ������� ��������� ������� ����
if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded) {
                                                                                                            goto mmmm;
                                                                                                        }
pravuy++;

//�������� ������� ��������� ������� ����
if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded) {;
                                                                                                            goto mmmm;
                                                                                                            }
pravuy++;








mmmm:

//�������� ������� ��������� ����� ����
if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2),  krok * KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) {
            if (getpixel(kopy_buffer0, (vboku+3)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
            getpixel(kopy_buffer0, (vboku+3)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
            getpixel(kopy_buffer0, (vboku+3)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded) {goto vuxod;

                                                                                                           }else{krok++,polojena_Obekta=0;
                                                                                                            goto vuxod;
                                                                                                            }
pravuy++;






                                                                                                         }else{
                                                                                if (pravuy>1){krok++, vboku--, polojena_Obekta=0;
                                                                                                                         goto vuxod;
                                                                                                                             }

                                                                                                            }
//�������� 2 ��������� ����� ����

if (getpixel(kopy_buffer0, (vboku-2)*KLITUNKA+(KLITUNKA/2),  krok * KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-2)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-2)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) {goto vuxod;
                                                                                                             }else{
                                                                                     if (pravuy==1){krok++, vboku-=2, polojena_Obekta=0;
                                                                                                                         goto vuxod;
                                                                                                                             }

                                                                                                           }
//�������� 3 ��������� ����� ����

if (getpixel(kopy_buffer0, (vboku-3)*KLITUNKA+(KLITUNKA/2),  krok * KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-3)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-3)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-3)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) {goto vuxod;
                                                                                                          }else{
                                                                                           krok++, vboku-=3, polojena_Obekta=0;
                                                                                                                         goto vuxod;


                                                                                                              }










vuxod:;





            }
    else
                {
 if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2),  (krok+1) * KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded ||
     getpixel(kopy_buffer0, (vboku+3)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) {
                                                                                                          }else{
                                                                              krok--, vboku+=1, polojena_Obekta=1;
                                                                                                              }




                }

}



