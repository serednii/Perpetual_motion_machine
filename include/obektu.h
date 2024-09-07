// #include "objects/line.h"

// #include "objects/square.h"

// #include "objects/triangle.h"

// #include "objects/lLeft.h"

// #include "objects/lRight.h"

// #include "objects/zLeft.h"

// #include "objects/zRight.h"

// int object(int number, int action, int a, int b, int c, int d) { 

//   if (number == 1) {
//     if (action == 1) line(a, b, c, d);
//     if (action == 2) return lineCheck(a, b);
//     if (action == 3) lineRotate();
//   }
//   if (number == 2) {
//     if (action == 1) square(a, b, d);
//     if (action == 2) return squareCheck(b);
//   }
//   if (number == 3) {
//     if (action == 1) triangle(a, b, c, d);
//     if (action == 2) return triangleCheck(a, b);
//     if (action == 3) triangleRotate();
//   }
//   if (number == 4) {
//     if (action == 1) lLeft(a, b, c, d);
//     if (action == 2) return lLeftCheck(a, b);
//     if (action == 3) lLeftRotate();
//   }
//   if (number == 5) {
//     if (action == 1) lRight(a, b, c, d);
//     if (action == 2) return lRightCheck(a, b);
//     if (action == 3) lRightRotate();
//   }
//   if (number == 6) {
//     if (action == 1) zLeft(a, b, c, d);
//     if (action == 2) return zLeftCheck(a, b);
//     if (action == 3) zLeftRotate();
//   }
//   if (number == 7) {
//     if (action == 1) zRight(a, b, c, d);
//     if (action == 2) return zRightCheck(a, b);
//     if (action == 3) zRightRotate();
//   }
//   return 0;
// }