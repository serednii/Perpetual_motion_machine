

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//Малює палку горизонтально або вертикально
void kvadrat(int x, int y, int pole)
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

                    rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf0f000);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xf0000f);
                x+=KLITUNKA;

                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf0f000);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xf0000f);
                x-=KLITUNKA;
                y+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf0f000);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xf0000f);
                x+=KLITUNKA;
                rectfill(kopy_buffer0, x, y, x+HURUNA_ELEMENTA, y+HURUNA_ELEMENTA, 0xf0f000);
                 rectfill(kopy_buffer0, x+2, y+2, x+HURUNA_ELEMENTA-2, y+HURUNA_ELEMENTA-2, 0xf0000f);
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
int kvadrat_proverka(int b)//а - положення вертикально або горизонтально
                               //b - з якої сторони перевіряти 0- знизу
                                //                             1- зліва
                                //                             2- зправа
                                //                             10- з трьох сторін
{

//palka(vboku, krok, 0, 0);
//13617097 колір сітки
//14540253 колір фона
//int a1;


if(b==0 || b==10){

 if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;

  if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;


}



if(b==1 || b==10){
 if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
 if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
}

if(b==2 || b==10){
if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
 if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
}

//*************************************************************************************
//*************************************************************************************





return 0;

}
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************






