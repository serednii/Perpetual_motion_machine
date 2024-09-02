

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//Малює палку горизонтально або вертикально
void bocka(int x)
{



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
int Z_vpravo_proverka(int a,int b)//а - положення
                               //b - з якої сторони перевіряти 0- знизу
                                //                             1- зліва
                                //                             2- зправа
                                //                             10- з трьох сторін
{

//palka(vboku, krok, 0, 0);
//13617097 колір сітки
//14540253 колір фона

if (a==0)//перевірка   трикутника обернутого до гори
{

if(b==0 || b==10){//перевірка з низу

 if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
  if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
  if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
}
if(b==1 || b==10){ //перевірка з ліва
 if (getpixel(kopy_buffer0, (vboku)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
  if (getpixel(kopy_buffer0,  (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
}

if(b==2 || b==10){//перевірка з права
if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
  if (getpixel(kopy_buffer0,  (vboku+3)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
}

//*************************************************************************************
//*************************************************************************************


}


if (a==1) //перевірка трикутника обернутого в низ
{
                 if(b==0 || b==10){//Повірка з низу
                                if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+3)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                                if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;

                                  }


                if(b==1 || b==10){//Повірка з ліва
                  if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                   if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                }

               if(b==2 || b==10){//Повірка з права
                  if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                  if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
                   if (getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2))!=0xa0fded) return 1;
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
void Z_vpravo_obertanna()
{





//*********************************1-0****************************************************
    if (polojena_Obekta==0)
            {

if (getpixel(kopy_buffer0, (vboku)*KLITUNKA+(KLITUNKA/2), (krok)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+1)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
    getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), krok*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded) {


                                                                                                            }else{polojena_Obekta=1,krok-=1, vboku+=1;
                                                                                                            //обернути обэкт по годинниковій стрілці
                                                                                                            }

                                                                                                            //вернути обэкт назад
return;

}
//****************************************************************************************



//*************************************0-1************************************************
if (polojena_Obekta==1)
            {//polojena_Obekta=1;//обернути обэкт по годинниковій стрілці

if (getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded ||
     getpixel(kopy_buffer0, vboku*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) != 0xa0fded) {
                                                                                                            return;
                                                                                                            }


if (getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded &&
     getpixel(kopy_buffer0, (vboku-1)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded)
            {
         polojena_Obekta=0, vboku-=1, krok+=1;//обернути обэкт по годинниковій стрілці
            }else
            {
                if (getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+1)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded &&
            getpixel(kopy_buffer0, (vboku+2)*KLITUNKA+(KLITUNKA/2), (krok+2)*KLITUNKA+(KLITUNKA/2)) == 0xa0fded) {polojena_Obekta=0, krok-=1;//обернути обэкт по годинниковій стрілці
                                                                                                                }

            }
return;
}
//*************************************************************************************

}


