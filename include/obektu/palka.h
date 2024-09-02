

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//Малює палку горизонтально або вертикально
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

if (polojenna==0)//Положення палички горизонтально
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
if (polojenna==1)//Положення палички вертикально
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
//Перевіряє коли фігура палка дійде до кінця
int palka_proverka(int a,int b)//а - положення вертикально або горизонтально
                               //b - з якої сторони перевіряти 0- знизу
                                //                             1- зліва
                                //                             2- зправа
                                //                             10- з трьох сторін
{

//palka(vboku, krok, 0, 0);
//13617097 колір сітки
//14540253 колір фона
int a1;
if (a==0)//перевірка горизонтальної палички
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
                 if(b==0 || b==10){//Повірка з низу
                a1 = getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+4)*KLITUNKA+(KLITUNKA/2));
                 if (a1!=0xa0fded) return 1;
                 }


                 if(b==1 || b==10){//Повірка з ліва
                 a1 = getpixel(kopy_buffer0, (vboku -1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2));
                  if (a1!=0xa0fded) return 1;
                 a1 = getpixel(kopy_buffer0, (vboku -1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2));
                  if (a1!=0xa0fded) return 1;
                 a1 = getpixel(kopy_buffer0, (vboku -1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2));
                 if (a1!=0xa0fded) return 1;
                 a1 = getpixel(kopy_buffer0, (vboku -1)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2));
                 if (a1!=0xa0fded) return 1;
                 }


                if(b==2 || b==10){//Повірка з права
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
//перекидаємо горизонтально

int pravuy = 0;
//Перевірка першого стовпчика правого боку
if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded) {
                                                                                                            goto mmmm;
                                                                                                        }
pravuy++;

//Перевірка другого стовпчика правого боку
if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded) {;
                                                                                                            goto mmmm;
                                                                                                            }
pravuy++;








mmmm:

//Перевірка першого стовпчика лівого боку
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
//Перевірка 2 стовпчика лівого боку

if (getpixel(kopy_buffer0, (vboku-2)*KLITUNKA+(KLITUNKA/2),  krok * KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-2)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku-2)*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) {goto vuxod;
                                                                                                             }else{
                                                                                     if (pravuy==1){krok++, vboku-=2, polojena_Obekta=0;
                                                                                                                         goto vuxod;
                                                                                                                             }

                                                                                                           }
//Перевірка 3 стовпчика лівого боку

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



