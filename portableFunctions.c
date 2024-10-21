
#include "header-files/typeDef.h"
#include "header-files/portableFunctions.h"

int vectCompare(vect vectA, vect vectB) {
  return ((vectA.x == vectB.x) && (vectA.y == vectB.y));
}

int vectIncluded(vect vector, vect_array arr) {
  int len = arr.len;
  for (int i=0; i<len; i++) {
    if (vectCompare(vector, arr.coords[i])) {
      return 1;
    }
  }
  return 0;
}