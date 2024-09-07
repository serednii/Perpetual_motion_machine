
// void lRight(int x, int y, int half, int pole) {

//   const int widthElement = cell - 4;
//  const int color =0x987000;
//  const int color1 = 0x50505f;
//   if (pole == 0) {
//     x = 2 + (cell * x);
//     y = 2 + (cell * y);
//   } else {
//     x = 2 + (cell * x);
//     y = 2 + (cell * y);
//   }

//   if (half == 0)

//   {
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);

//     x += cell;
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
//     x += cell;
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);

//     y += cell;

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
//     x += cell;

//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
//   }


//   if (half == 2) {
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);

//     x += cell;

//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
//     y += cell;
//     x -= cell;
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
//     y += cell;

//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
//   }


//   if (half == 3)

//   {
//     x += cell;
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);

//     y += cell;
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);
//     y += cell;
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);

//     x -= cell;
//     rectfill(copyBuffer_0, x, y, x + widthElement, y + widthElement, color);
//     rectfill(copyBuffer_0, x + 2, y + 2, x + widthElement - 2, y + widthElement - 2, color1);

//   }

// }


// int lRightСheck(int a, int b) 

// {
//   const int color = 0xa0fded;

//   if (a == 0) 
//   {

//     if (b == 0 || b == 10) {

//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//     }
//     if (b == 1 || b == 10) {
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//     }

//     if (b == 2 || b == 10) { 
//       if (getPixel(copyBuffer_0, (side + 3) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//     }

   

//   }

//   if (a == 1) 
//   {
//     if (b == 0 || b == 10) { 

//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//     }
//     if (b == 1 || b == 10) { 
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//     }

//     if (b == 2 || b == 10) { 
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//     }

//   }

//   if (a == 2) 
//   {

//     if (b == 0 || b == 10) { 
//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//     }

//     if (b == 1 || b == 10) {
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//     }

//     if (b == 2 || b == 10) { 
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//     }
//   }

//   if (a == 3) 
//   {

//     if (b == 0 || b == 10) { 
//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) return 1;

//     }

//     if (b == 1 || b == 10) { 
//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//     }

//     if (b == 2 || b == 10) { 
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//     }

//   }

//   return 0;

// }

// void lRightRotate() {
//   const int color = 0xa0fded;

//   //*********************************0-3****************************************************
//   if (halfObject == 0) {

//     if (getPixel(copyBuffer_0, (side) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, (side) * cell + (cell / 2), (step - 1) * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step - 1) * cell + (cell / 2)) != color) {
//     } else {
//       halfObject = 3, step -= 1;
//     }

   
//     return;

//   }


//   //********************************1-2*****************************************************
//   if (halfObject == 1) {
//     if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), step * cell + (cell / 2)) == color &&
//       getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), step * cell + (cell / 2)) == color &&
//       getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) == color &&
//       getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) == color) {
//       halfObject = 2, side += 1;
     
//     }
//     return;
//   }
 
//   if (halfObject == 3) { 

//     if (getPixel(copyBuffer_0, side * cell + (cell / 2), step * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) {
//       return;
//     }

//     if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), step * cell + (cell / 2)) == color &&
//       getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == color) {
//       halfObject = 1; 
//     } else {
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), step * cell + (cell / 2)) == color &&
//         getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == color &&
//         getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) == color) {
//         halfObject = 1, side -= 1, step -= 1; 
//       }

//     }
//     return;
//   }

//   //***********************************2-0**************************************************

//   if (halfObject == 2) {

//     if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) {
//       return;
//     }

//     if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == color &&
//       getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) == color) {
//       halfObject = 0, side -= 1, step += 1; 
//     } else {
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), step * cell + (cell / 2)) == color &&
//         getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) == color &&
//         getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) == color) {
//         halfObject = 0; 
//       }
//     }

//     return;
//   }
// }