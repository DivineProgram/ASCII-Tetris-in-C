
#include <stdio.h>
#include "header-files/typeDef.h"
#include "header-files/gridFunctions.h"
#include "header-files/portableFunctions.h"

int main(void) {

  const vect_array EMPTY_VECT_ARRAY = {0,{{}}};
  
  vect origin = {2,1};
  vect_array relBlock = {3, {{-1,0}, {0,0}, {1,0}}};
  vect_array absBlock;
  blockRelToAbs(relBlock, origin, &absBlock);
  vect_array grid = {2, {{4,4}, {1,4}}};
  vect res = {5,5};
  display(absBlock, grid, res);
  printf("\n\n\n");
  origin.x = 3;
  origin.y = 3;
  blockRelToAbs(relBlock, origin, &absBlock);
  vectMerge(absBlock, grid, &grid);
  absBlock = EMPTY_VECT_ARRAY;
  display(absBlock, grid, res);
}