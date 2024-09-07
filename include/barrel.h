void barrel() {
  const int color = 0x5c8fff;
  rectfill(bufferBarrel[1], BARREL_WIDTH / 3, 0, BARREL_WIDTH / 3 * 2, BARREL_HEIGHT * 0.2, color);
  rectfill(bufferBarrel[1], 0, (int) Y_Height, BARREL_WIDTH, BARREL_HEIGHT, 0xdc8fff);
  rectfill(bufferBarrel[1], 0, (int) Y_Height, BARREL_WIDTH, Y_Height + WORKING_HEIGHT * HALF_PISTON, color);
  rectfill(bufferBarrel[1], 0, (int) Y_Height + WORKING_HEIGHT * HALF_PISTON, BARREL_WIDTH, Y_Height + WORKING_HEIGHT * HALF_PISTON + (WORKING_HEIGHT / 6), 0x2c8f2f);
  textprintf_ex(bufferBarrel[1], font, 3, 20, makecol(255, 100, 200), -1, "%d", arrayNumberBarrel[num]);
}