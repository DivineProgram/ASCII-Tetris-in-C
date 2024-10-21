
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

void vectAvect(vect vectA, vect vectB, vect* destination) {
  vect res = {vectA.x+vectB.x, vectA.y+vectB.y};
  memcpy(destination, &res, sizeof(vect));
}

void matXvect(mat matrix, vect vector, vect* destination) {
  vect res;
  res.x = (matrix.a*vector.x)+(matrix.b*vector.y);
  res.y = (matrix.c*vector.x)+(matrix.d*vector.y);
  memcpy(destination, &res, sizeof(vect));
}

void vectMerge(vect_array arrA, vect_array arrB, vect_array* destination) {
  vect_array res;
  res.len = arrA.len + arrB.len;
  memcpy(&(res.coords), &(arrA.coords), 64*sizeof(vect));
  
  int i = arrA.len;
  for (int b=0; b<arrB.len; b++) {
    if (!vectIncluded(arrB.coords[b], res)) {
      res.coords[i] = arrB.coords[b];
      i++;
    }
  }
  memcpy(destination, &res, sizeof(vect_array));
}