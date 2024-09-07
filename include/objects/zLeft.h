
// void zLeft(int x, int y, int half, int pole) {

//   const int widthElement = cell - 4;
//   const int color = 0x304050;
//   const int color1 = 0xf0f00f;
//   if (pole == 0) {
//     x = 2 + (cell * x);
//     y = 2 + (cell * y);
//   } else {
//     x = 2 + (cell * x);
//     y = 2 + (cell * y);
//   }


//   if (half == 0)

//   {
//     y += cell;
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);

//     x += cell;
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
//     y -= cell;
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);

//     x += cell;

//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
//   }

//   if (half == 1) {
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);

//     y += cell;
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
//     x += cell;

//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
//     y += cell;

//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
//   }

// }

// int zLeftCheck(int a, int b) 

// {
//   const int color = color;

//   if (a == 0)
//   {

//     if (b == 0 || b == 10) {
//       if (getPixel(copyBuffer_0, (side) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//     }
//     if (b == 1 || b == 10) { 
//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//     }

//     if (b == 2 || b == 10) { 
//       if (getPixel(copyBuffer_0, (side + 3) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//     }

//   }

//   if (a == 1) 
//   {
//     if (b == 0 || b == 10) { 
//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) return 1;

//     }

//     if (b == 1 || b == 10) { 
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//     }

//     if (b == 2 || b == 10) { 
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//     }
//   }
//   return 0;

// }

// void zLeftRotate() {
//   const int color = 0xa0fded;

//   if (halfObject == 0) {

//     if (getPixel(copyBuffer_0, (side) * cell + (cell / 2), (step) * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, (side) * cell + (cell / 2), (step - 1) * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step - 1) * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) {

//     } else {
//       halfObject = 1, step -= 1, side += 1;

//     }


//     return;

//   }
//   if (halfObject == 1) { 

//     if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) {
//       return;
//     }

//     if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == color &&
//       getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) == color) {
//       halfObject = 0, side -= 1, step += 1; 
//     } else {
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == color &&
//         getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) == color) {
//         halfObject = 0, step -= 1; 
//       }

//     }
//     return;
//   }

// }