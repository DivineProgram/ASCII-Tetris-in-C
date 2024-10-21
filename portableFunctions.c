
#include "header-files/typeDef.h"
#include "header-files/portableFunctions.h"

int vectCompare(vect vectA, vect vectB) {
  return ((vectA.x == vectB.x) && (vectA.y == vectB.y));
}

int vectIncluded(vect vect, vect array[]) {
  int len = sizeof(array) / sizeof(vect);
  for (int i=0; i<len; i++) {
    if (vectCompare(vect, array[i])) {
      return 1;
    }
  }
  return 0;
}