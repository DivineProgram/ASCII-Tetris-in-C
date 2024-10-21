
#include "header-files/typeDef.h"
#include "header-files/portableFunctions.h"
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

void blockRelToAbs(vect_array relBlock, vect origin, vect_array* destination) {
  vect_array res;
  res.len = relBlock.len;
  for (int i=0; i<relBlock.len; i++) {
    vectAvect(relBlock.coords[i], origin, &(res.coords[i]));
  }
  memcpy(destination, &res, sizeof(vect_array));
}

int blockColliding(vect_array absBlock, vect_array grid, vect res) {
  for (int i=0; i<absBlock.len; i++) {
    return (vectIncluded(absBlock.coords[i], grid)
      || !(0 <= absBlock.coords[i].x && absBlock.coords[i].x < res.x)
      || !(0 <= absBlock.coords[i].y && absBlock.coords[i].y < res.y));
    }
  }
}