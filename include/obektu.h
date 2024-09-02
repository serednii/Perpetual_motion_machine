
#include "obektu/line.h"//palka
#include "obektu/square.h"
#include "obektu/triangle.h"
#include "obektu/lLeft.h"
#include "obektu/lRight.h"
#include "obektu/zLeft.h"
#include "obektu/zRight.h"

int Obekt(int nomer, int dia, int a, int b, int c, int d)
{ //a - ��������� ������
  // b- ������� ������
//dia 1-����� ����
//dia 2-�������� �� �������� ���� �� ����
//dia 3-������ ����
//palka_obertanna();

if  (nomer==1){if (dia==1)palka(a,b,c,d );
               if (dia==2)return palka_proverka(a,b);
               if (dia==3)palka_obertanna();
              }
if  (nomer==2){if (dia==1)kvadrat(a,b,d);
               if (dia==2)return kvadrat_proverka(b);
              }
if  (nomer==3){if (dia==1)trukutnuk(a,b,c,d);
               if (dia==2)return trukutnuk_proverka(a,b);
               if (dia==3)trukutnuk_obertanna();
              }
if  (nomer==4){if (dia==1)L_vlivo(a,b,c,d);
               if (dia==2)return L_vlivo_proverka(a,b);
               if (dia==3)L_vlivo_obertanna();
              }
if  (nomer==5){if (dia==1)L_vpravo(a,b,c,d);
               if (dia==2)return L_vpravo_proverka(a,b);
               if (dia==3)L_vpravo_obertanna();
              }
if  (nomer==6){if (dia==1)Z_vlivo(a,b,c,d);
               if (dia==2)return Z_vlivo_proverka(a,b);
               if (dia==3) Z_vlivo_obertanna();
              }
if  (nomer==7){if (dia==1)Z_vpravo(a,b,c,d);
               if (dia==2)return Z_vpravo_proverka(a,b);
               if (dia==3)Z_vpravo_obertanna();
              }
return 0;
}

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************




