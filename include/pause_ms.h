void pauseMs(int a) {
  int timerCounter = 0;
  repeatCycle:
    if (timer - timerCounter >= a) {
      //masked_blit(buffer, screen, camera_x, camera_y, 0, 0, ancho, alto);
      timerCounter = timer;
      goto endCycle;
    } else goto repeatCycle;
  endCycle:
    return;
}