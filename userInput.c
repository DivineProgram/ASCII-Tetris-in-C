
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include "header-files/typeDef.h"

#include "header-files/userInput.h"

void nonblocking(int state) {
  struct termios ttystate;
  tcgetattr(STDIN_FILENO, &ttystate);
  // turn off canonical mode
  if (state) {
    ttystate.c_lflag &= ~ICANON;
    ttystate.c_cc[VMIN] = 1;
    ttystate.c_cc[VTIME] = 0;
  } 
  // turn on canonical mode
  else { ttystate.c_lflag |= ICANON; }
  tcsetattr(STDIN_FILENO, TCSANOW, &ttystate);
}

char getkb() {
  nonblocking(1);
  char temp = getchar();
  nonblocking(0);
  return temp;
}

void processUserMovement(vect origin, vect_array relBlock) {
  
}