

// int zRightCheck(int a, int b) 

// {

// const int color = 0xa0fded;

//   if (a == 0) 
//   {

//     if (b == 0 || b == 10) { 

//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//     }
//     if (b == 1 || b == 10) { 
//       if (getPixel(copyBuffer_0, (side) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//     }

//     if (b == 2 || b == 10) { 
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 3) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//     }

//   }

//   if (a == 1) 
//   {
//     if (b == 0 || b == 10) { 
//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 3) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;

//     }

//     if (b == 1 || b == 10) { /
//       if (getPixel(copyBuffer_0, side * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side - 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//     }

//     if (b == 2 || b == 10) {
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), step * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) return 1;
//       if (getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) return 1;
//     }

//   }

//   return 0;

// }

// void zRightRotate() {
  
// const int color = 0xa0fded;

//   if (halfObject == 0) {

//     if (getPixel(copyBuffer_0, (side) * cell + (cell / 2), (step) * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, (side + 1) * cell + (cell / 2), step * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), step * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, (side + 2) * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color) {

//     } else {
//       halfObject = 1, step -= 1, side += 1;
//     }

//     return;

//   }

//   if (halfObject == 1) { 

//     if (getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 1) * cell + (cell / 2)) != color ||
//       getPixel(copyBuffer_0, side * cell + (cell / 2), (step + 2) * cell + (cell / 2)) != color) {
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