void keyboard()
{
   if (key[KEY_ESC])

int kk = key[KEY_DOWN];

//**************************************

 if (key[KEY_PLUS_PAD] ){
    if(hladina<0.98){
        //pol_porch=pol_porch - 0.01;
        hladina = hladina+0.002;
        uroven_vody = vusota_basein *hladina;
        basein();
    }
}



if (key[KEY_MINUS_PAD]  ){
    //if(pol_porch>0.01){
    if(hladina>0.05){
        //pol_porch=pol_porch - 0.01;
        hladina = hladina-0.002;
        uroven_vody = vusota_basein *hladina;
        basein();
    }
 }

//**************************************

if (key[KEY_UP] ){
    if(pol_basein<0){
        pol_basein=pol_basein + 12;
    }
}



if (key[KEY_DOWN]  ){
    if((alto-vusota_basein)<pol_basein){
        pol_basein=pol_basein - 12;
    }
 }
 //**************************************
 //**************************************
 //**************************************
 if (key[KEY_7_PAD] ){

kol_bak=kol_bak+2;
vusota_basein=vusota_basein+73.4;
ust();
for (int u=0; u!=10000000; u++){
    u=u;
}
}
///kol_bak


if (key[KEY_1_PAD]  ){
        for (int u=0; u!=10000000; u++){
    u=u;
}

kol_bak=kol_bak-2;
vusota_basein=vusota_basein-73.4;
ust();
 }
 ///**************************************
 ///**************************************



 ///**************************************
 ///**************************************

 if (key[KEY_8_PAD] ){
    //xxx+=0.1;
     for (int u=0; u!=100000; u++){
    u=u;
}
LL=LL+0.01;
}

///xxx

if (key[KEY_2_PAD]  ){
    //xxx-=0.1;
    for (int u=0; u!=100000; u++){
    u=u;
}
   LL=LL-0.01;
 }
///**************************************
///**************************************



///**************************************
///**************************************
 if (key[KEY_9_PAD] ){

        for (int u=0; u!=10000000; u++){
    u=u;
}
    vusota_basein=vusota_basein+0.3;
ust1();
}
///yyy


if (key[KEY_3_PAD]  ){

        for (int u=0; u!=10000000; u++){
    u=u;
}


vusota_basein=vusota_basein-0.3;
ust1();
 }
///**************************************
///**************************************





 //**************************************

 if (key[KEY_O] ){
    if (paus){
        paus=false;
    }

}
if (key[KEY_P] ){
    if (!paus){
        paus=true;
    }

}
//******************************************
}
//if (lineСheck(polojena_palka,1)==0)//�������� �� ����, ��� �� �������� �� ���///
//{


   /* for (int a=0; a!=kol_bak; a++){
if (numbers[a]>2030 ){
    numbers[a]=0;
    }
    else{
            numbers[a]=numbers[a]+0.5;
    }

}
for (int a=0; a!=kol_bak; a++){
if ( numbers[a]<0) {
    numbers[a]=2030;
    }
    else{
            numbers[a]=numbers[a]-0.5;
    }

}
*/
