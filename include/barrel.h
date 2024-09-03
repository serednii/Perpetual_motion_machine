

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//����� ����� � �������
void barrel()
{

//int ss=5;
rectfill(buffer_bocka[1], barrelWidth/3 , 0, barrelWidth/3*2, barrelHeight*0.2, 0x5c8fff);
rectfill(buffer_bocka[1], 0,(int)y_vusota, barrelWidth, barrelHeight, 0xdc8fff);
rectfill(buffer_bocka[1], 0, (int)y_vusota, barrelWidth, y_vusota+workingHeight*pol_porch, 0x5c8fff);
rectfill(buffer_bocka[1], 0 , (int)y_vusota+workingHeight*pol_porch, barrelWidth, y_vusota+workingHeight*pol_porch+(workingHeight/6), 0x2c8f2f);
textprintf_ex(buffer_bocka[1], font, 3, 20, makecol(255, 100, 200),-1,"%d" ,  arr_nom_boc[num]  );
 //textout_ex(buffer_bocka[1], font,ss , 10, 10,makecol(0, 0, 255), -1);
//rectfill(buffer_bocka, 0, 20, barrelWidth, barrelHeight, 0xdc8fff);
//rectfill(buffer_bocka_vuxod, 0, 0, barrelWidth/3, barrelHeight*0.2, 0xdc8fff);


}
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
class boccka
{
        int pol_x;
        int pol_y;
        int pol_porch;
        int pol_kut;
        int pol_zona;
        int nom_boccka;
public:
boccka()
    {
      }

    void Set_Boccka()
        {
        int a=1;
        rectfill(buffer_bocka[a], barrelWidth/3 , 0, barrelWidth/3*2, barrelHeight*0.2, 0x5c8fff);
        rectfill(buffer_bocka[a], 0,y_vusota, barrelWidth, barrelHeight, 0xdc8fff);
        rectfill(buffer_bocka[a], 0, y_vusota, barrelWidth, y_vusota+workingHeight*pol_porch, 0x5c8fff);
        rectfill(buffer_bocka[a], 0 , y_vusota+workingHeight*pol_porch, barrelWidth, y_vusota+workingHeight*pol_porch+(workingHeight/6), 0x2c8f2f);
       // textprintf_ex(buffer_bocka[a], font, 20, 20, makecol(255, 100, 200),-1,"y: %f",  nom_boccka);
        }




   void Set_nom_boccka(int a)
        {
        nom_boccka=a;
        }





};


































