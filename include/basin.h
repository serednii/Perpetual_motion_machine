

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//����� ����� � �������
void basin()
{
///center  polovuna
rectfill(buffer_basin, 0, 0, basinWidth, basinHeight, 0xdcffff);
rectfill(buffer_basin, 0, basinHeight-uroven_vody, basinWidth ,basinHeight , 0x4de8ff);
for (int a=0; a!=300; a=a+10){
line(buffer_basin, 200+a, paddingTopBottom, 205+a, paddingTopBottom, 0xdc00ff);
line(buffer_basin, 200+a, paddingTopBottom+l_1, 205+a, paddingTopBottom+l_1, 0xdc00ff);
}



//*************************************************************
{
    const int col = 0xdc00ff;
line(buffer_basin, center-polovuna+(barrelWidth/2)+1, paddingTopBottom, center-polovuna+(barrelWidth/2)+1, paddingTopBottom+l_1, col);
line(buffer_basin, center+polovuna-(barrelWidth/2)-4, paddingTopBottom, center+polovuna-(barrelWidth/2)-4, paddingTopBottom+l_1, col);

}
//***************************************************************

//***************************************************************
{
    const int col = 0xf0ff00;
line(buffer_basin, center-polovuna-barrelWidth+(barrelWidth/2)-1, 0, center-polovuna-barrelWidth+(barrelWidth/2)-1, paddingTopBottom+l_1, col);
line(buffer_basin, center+polovuna+barrelWidth-(barrelWidth/2)-1, 0, center+polovuna+barrelWidth-(barrelWidth/2)-1, paddingTopBottom+l_1, col);
line(buffer_basin, center+polovuna+barrelWidth-(barrelWidth/2)-1, 0, center+polovuna+barrelWidth-(barrelWidth/2)-1, paddingTopBottom+l_1, col);


for (float t=3.24; t<=6.18; t=t+0.01){
float x,y;
  x=75*(cos(t));
  y=75*(sin(t));
  putpixel(buffer_basin,x+313, y+paddingTopBottom, col);
}
for (float t=6.18; t<=6.18+3.33; t=t+0.01){
float x,y;
  x=75*(0.5+2*cos(t));
  y=75*(0.2+2*sin(t));
  putpixel(buffer_basin,x+313, y+(basinHeight-paddingTopBottom), col);
}



}

}



























