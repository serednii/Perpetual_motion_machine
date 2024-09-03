void keyboard()
{
   if (key[KEY_ESC])

int kk = key[KEY_DOWN];

 if (key[KEY_PLUS_PAD] ){
    if(waterLevel<0.98){
        //pol_porch=pol_porch - 0.01;
        waterLevel = waterLevel+0.002;
        uroven_vody = basinHeight *waterLevel;
        basin();
    }
}


if (key[KEY_MINUS_PAD]  ){
    //if(pol_porch>0.01){
    if(waterLevel>0.05){
        //pol_porch=pol_porch - 0.01;
        waterLevel = waterLevel-0.002;
        uroven_vody = basinHeight *waterLevel;
        basin();
    }
 }


if (key[KEY_UP] ){
    if(basinBottom<0){
        basinBottom=basinBottom + 12;
    }
}


if (key[KEY_DOWN]  ){
    if((alto-basinHeight)<basinBottom){
        basinBottom=basinBottom - 12;
    }
 }

 if (key[KEY_7_PAD] ){

numberTanks=numberTanks+2;
basinHeight=basinHeight+73.4;
ust();
for (int u=0; u!=10000000; u++){
    u=u;
}
}

if (key[KEY_1_PAD]  ){
        for (int u=0; u!=10000000; u++){
    u=u;
}

numberTanks=numberTanks-2;
basinHeight=basinHeight-73.4;
ust();
 }

 if (key[KEY_8_PAD] ){
     for (int u=0; u!=100000; u++){
    u=u;
}
LL=LL+0.01;
}


if (key[KEY_2_PAD]  ){
    for (int u=0; u!=100000; u++){
    u=u;
}
   LL=LL-0.01;
 }

 if (key[KEY_9_PAD] ){

        for (int u=0; u!=10000000; u++){
    u=u;
}
    basinHeight=basinHeight+0.3;
ust1();
}

if (key[KEY_3_PAD]  ){

        for (int u=0; u!=10000000; u++){
    u=u;
}

basinHeight=basinHeight-0.3;
ust1();
 }

 if (key[KEY_O] ){
    if (pause){
        pause=false;
    }

}

if (key[KEY_P] ){
    if (!pause){
        pause=true;
    }

}

}

