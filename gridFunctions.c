
#include "header-files/typeDef.h"
#include "header-files/gridFunctions.h"
#include "header-files/portableFunctions.h"


void display(vect absBlock[], vect grid[], vect res) {
  for (int y=0; y<res.y; y++) {
    for (int x=0; x<res.x; x++) {
      int pos[2] = {x,y};
      if (vectIncluded(pos, absBlock)
        || vectIncluded(pos, grid)) {
        printf("#");
      } else {
        printf(".");
      }
    }
    printf("\n");
  }
}

void blockRelToAbs(int relBlock[][2], int origin[2]) {
  
}