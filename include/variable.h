int camera_x = 0, camera_y = 0;
bool pause = false;
float numberTanks = 16 + 13; ///30+1
float l_1 = ((numberTanks - 1 - 12) / 2 * BARREL_HEIGHT) * (COEFF_INDENTATION + 1);
float l_2 = l_1;
float basinHeight = l_1 + PADDING + PADDING;
float SURFACE_LEVEL = 0.95;
float basinBottom = 0;
float waterLevel = basinHeight * SURFACE_LEVEL;

float numbers[100];
int arrayNumberBarrel[150];
float temp;

float r_1 = BARREL_HEIGHT * (COEFF_INDENTATION + 1) * 6;
float radius = r_1 / (3.14); //float r_1 = 3.14*75*1.8;
float r_2 = r_1;
int circleLength = l_1 + l_2 + r_1 + r_2;
int half = radius + BARREL_WIDTH / 2;
int num = 0;
float LL = BARREL_HEIGHT * (COEFF_INDENTATION + 1); //*63.917419;