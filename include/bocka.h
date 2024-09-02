

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//Малює бочку з поршнем
void bocka()
{

//int ss=5;
rectfill(buffer_bocka[1], hurina_bocka/3 , 0, hurina_bocka/3*2, vusota_bocka*0.2, 0x5c8fff);
rectfill(buffer_bocka[1], 0,(int)y_vusota, hurina_bocka, vusota_bocka, 0xdc8fff);
rectfill(buffer_bocka[1], 0, (int)y_vusota, hurina_bocka, y_vusota+rob_vusota*pol_porch, 0x5c8fff);
rectfill(buffer_bocka[1], 0 , (int)y_vusota+rob_vusota*pol_porch, hurina_bocka, y_vusota+rob_vusota*pol_porch+(rob_vusota/6), 0x2c8f2f);
textprintf_ex(buffer_bocka[1], font, 3, 20, makecol(255, 100, 200),-1,"%d" ,  arr_nom_boc[num]  );
 //textout_ex(buffer_bocka[1], font,ss , 10, 10,makecol(0, 0, 255), -1);
//rectfill(buffer_bocka, 0, 20, hurina_bocka, vusota_bocka, 0xdc8fff);
//rectfill(buffer_bocka_vuxod, 0, 0, hurina_bocka/3, vusota_bocka*0.2, 0xdc8fff);


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
        rectfill(buffer_bocka[a], hurina_bocka/3 , 0, hurina_bocka/3*2, vusota_bocka*0.2, 0x5c8fff);
        rectfill(buffer_bocka[a], 0,y_vusota, hurina_bocka, vusota_bocka, 0xdc8fff);
        rectfill(buffer_bocka[a], 0, y_vusota, hurina_bocka, y_vusota+rob_vusota*pol_porch, 0x5c8fff);
        rectfill(buffer_bocka[a], 0 , y_vusota+rob_vusota*pol_porch, hurina_bocka, y_vusota+rob_vusota*pol_porch+(rob_vusota/6), 0x2c8f2f);
       // textprintf_ex(buffer_bocka[a], font, 20, 20, makecol(255, 100, 200),-1,"y: %f",  nom_boccka);
        }




   void Set_nom_boccka(int a)
        {
        nom_boccka=a;
        }





};


































