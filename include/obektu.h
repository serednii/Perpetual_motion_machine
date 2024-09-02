
#include "objects/line.h"//palka
#include "objects/square.h"
#include "objects/triangle.h"
#include "objects/lLeft.h"
#include "objects/lRight.h"
#include "objects/zLeft.h"
#include "objects/zRight.h"

int object(int number, int dia, int a, int b, int c, int d)
{ //a - ��������� ������
  // b- ������� ������
//dia 1-����� ����
//dia 2-�������� �� �������� ���� �� ����
//dia 3-������ ����
//lineRotate();

if  (number==1){if (dia==1)line(a,b,c,d );
               if (dia==2)return  lineСheck(a,b);
               if (dia==3)lineRotate();
              }
if  (number==2){if (dia==1)square(a,b,d);
               if (dia==2)return squareСheck(b);
              }
if  (number==3){if (dia==1)triangle(a,b,c,d);
               if (dia==2)return triangleСheck(a,b);
               if (dia==3)triangleRotate();
              }
if  (number==4){if (dia==1)lLeft(a,b,c,d);
               if (dia==2)return lLeftСheck(a,b);
               if (dia==3)lLeftRotate();
              }
if  (number==5){if (dia==1)lRight(a,b,c,d);
               if (dia==2)return lRightСheck(a,b);
               if (dia==3)lRightRotate();
              }
if  (number==6){if (dia==1)zLeft(a,b,c,d);
               if (dia==2)return zLeftСheck(a,b);
               if (dia==3) zLeftRotate();
              }
if  (number==7){if (dia==1)zRight(a,b,c,d);
               if (dia==2)return zRightСheck(a,b);
               if (dia==3)zRightRotate();
              }
return 0;
}

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************
//*************************************************************************************




