

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//����� ����� ������������� ��� �����������
void L_vlivo(int x, int y, int polojenna, int pole)
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


//*************************************************************************


                                         //  X
                             //��������� //XXX
if (polojenna==0)

{               y+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);


                x+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);
                x+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);

                y-=KLITUNKA;

                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);
}

//*************************************************************************



                                         //XXX
                             //��������� //X
if (polojenna==1)
{
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);

                y+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);
                x+=KLITUNKA;
                y-=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);
                x+=KLITUNKA;


                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);
}



//*************************************************************************

                                         // XX
                                         //  X
                             //��������� //  X
if (polojenna==2)
{
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);

                x+=KLITUNKA;

                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);
                y+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);
                y+=KLITUNKA;

                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);
}



//*************************************************************************



                                         // X
                                         // X
                             //��������� // XX
if (polojenna==3)

{
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);

                y+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);
                y+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);

                x+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0x500030);
                rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0x00407f);

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
int L_vlivo_proverka(int a,int b)//� - ���������
                               //b - � ��� ������� ��������� 0- �����
                                //                             1- ����
                                //                             2- ������
                                //                             10- � ����� �����
{

//palka(vboku, krok, 0, 0);
//13617097 ���� ����
//14540253 ���� ����

if (a==0)//��������   ���������� ���������� �� ����
{

if(b==0 || b==10){//�������� � ����

 if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
  if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
  if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
}
if(b==1 || b==10){ //�������� � ���
 if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
  if (getpixel(kopy_buffer0,  (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
}

if(b==2 || b==10){//�������� � �����
if (getpixel(kopy_buffer0, (vboku+3)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
  if (getpixel(kopy_buffer0,  (vboku+3)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
}

//*************************************************************************************
//*************************************************************************************


}


if (a==1) //�������� ���������� ���������� � ���
{
                 if(b==0 || b==10){//������ � ����
                                if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                                if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                                if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                                  }


                if(b==1 || b==10){//������ � ���
                  if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                }

               if(b==2 || b==10){//������ � �����
                  if (getpixel(kopy_buffer0, (vboku+3)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                }

}



if (a==2) //�������� ���������� ���������� � ���
{

                if(b==0 || b==10){//������ � ����
                    if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                    if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                                  }


                if(b==1 || b==10){//������ � ���
                  if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                }

               if(b==2 || b==10){//������ � �����
                  if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                }
}


if (a==3) //�������� ���������� ���������� � �����
{




                if(b==0 || b==10){//������ � ����
                    if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                    if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;

                                  }


                if(b==1 || b==10){//������ � ���
                  if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                }

               if(b==2 || b==10){//������ � �����
                  if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
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
void L_vlivo_obertanna()
{





//*********************************0-3****************************************************
    if (polojena_Obekta==0)
            {

if (getpixel(kopy_buffer0, (vboku)*KLITUNKA+(KLITUNKA/2), (krok)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
    getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded) {


                                                                                                            }else{polojena_Obekta=3,vboku+=1;
                                                                                                            //�������� ����� �� ����������� ������
                                                                                                            }

                                                                                                            //������� ����� �����
return;

}
//****************************************************************************************


//********************************1-2*****************************************************
if (polojena_Obekta==1)
            {
if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok-1)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded &&
     getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok-1)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded &&
   getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded &&
    getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded){polojena_Obekta=2,krok-=1;
                                                                                                            //�������� ����� �� ����������� ������
                                                                                                            }
return;
}
//*************************************************************************************



//*************************************3-1************************************************
if (polojena_Obekta==3)
            {//polojena_Obekta=1;//�������� ����� �� ����������� ������

if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded) {
                                                                                                            return;
                                                                                                            }


if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded &&
     getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded)
            {
         polojena_Obekta=1,krok+=1,vboku-=1;//�������� ����� �� ����������� ������
            }else
            {
                if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2)) == 0xa0fded &&
            getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded) {polojena_Obekta=1,krok+=1;//�������� ����� �� ����������� ������
                                                                                                                }

            }
return;
}
//*************************************************************************************



//***********************************2-0**************************************************

if (polojena_Obekta==2)
            {

if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded) {
                                                                                                            return;
                                                                                                            }


if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2)) == 0xa0fded &&
     getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded)
                {
         polojena_Obekta=0;//�������� ����� �� ����������� ������
                }else
                {
         if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded &&
            getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded) {polojena_Obekta=0,vboku-=1;//�������� ����� �� ����������� ������
                                                                                                                }
                }

return;
}
}
