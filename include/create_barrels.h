  {

    int b = 1;
    for (int a = 0; a <= circleLength + 70; a = a + INDENTATION_BETWEEN_BARRELS + BARREL_HEIGHT) {
      numbers[b] = a;
      arrayNumberBarrel[b] = b;
      cout << "arrayNumberBarrel[b] = " << arrayNumberBarrel[b] << endl;
      b++;
    }
  }