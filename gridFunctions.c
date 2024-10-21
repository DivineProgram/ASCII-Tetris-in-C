
#include "header-files/typeDef.h"
#include "header-files/gridFunctions.h"


void display(vect_array absBlock, vect_array grid, vect res) {
  for (int y=0; y<res.y; y++) {
    for (int x=0; x<res.x; x++) {
      vect pos = {x,y};
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