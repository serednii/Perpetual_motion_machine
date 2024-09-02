

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//����� ����� � �������
void basin()
{
///centr  polovuna
rectfill(buffer_basein, 0, 0, hurina_basein, vusota_basein, 0xdcffff);
rectfill(buffer_basein, 0, vusota_basein-uroven_vody, hurina_basein,vusota_basein , 0x4de8ff);
for (int a=0; a!=300; a=a+10){
line(buffer_basein, 200+a, odstup_horu_nuzu, 205+a, odstup_horu_nuzu, 0xdc00ff);
line(buffer_basein, 200+a, odstup_horu_nuzu+l_1, 205+a, odstup_horu_nuzu+l_1, 0xdc00ff);
}



//*************************************************************
{
    const int col = 0xdc00ff;
line(buffer_basein, centr-polovuna+(hurina_bocka/2)+1, odstup_horu_nuzu, centr-polovuna+(hurina_bocka/2)+1, odstup_horu_nuzu+l_1, col);
line(buffer_basein, centr+polovuna-(hurina_bocka/2)-4, odstup_horu_nuzu, centr+polovuna-(hurina_bocka/2)-4, odstup_horu_nuzu+l_1, col);

}
//***************************************************************

//***************************************************************
{
    const int col = 0xf0ff00;
line(buffer_basein, centr-polovuna-hurina_bocka+(hurina_bocka/2)-1, 0, centr-polovuna-hurina_bocka+(hurina_bocka/2)-1, odstup_horu_nuzu+l_1, col);
line(buffer_basein, centr+polovuna+hurina_bocka-(hurina_bocka/2)-1, 0, centr+polovuna+hurina_bocka-(hurina_bocka/2)-1, odstup_horu_nuzu+l_1, col);
line(buffer_basein, centr+polovuna+hurina_bocka-(hurina_bocka/2)-1, 0, centr+polovuna+hurina_bocka-(hurina_bocka/2)-1, odstup_horu_nuzu+l_1, col);


for (float t=3.24; t<=6.18; t=t+0.01){
float x,y;
  x=75*(cos(t));
  y=75*(sin(t));
  putpixel(buffer_basein,x+313, y+odstup_horu_nuzu, col);
}
for (float t=6.18; t<=6.18+3.33; t=t+0.01){
float x,y;
  x=75*(0.5+2*cos(t));
  y=75*(0.2+2*sin(t));
  putpixel(buffer_basein,x+313, y+(vusota_basein-odstup_horu_nuzu), col);
}



}

}



























