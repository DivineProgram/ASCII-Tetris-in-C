
#include <stdio.h>
#include "header-files/typeDef.h"
#include "header-files/gridFunctions.h"
#include "header-files/portableFunctions.h"


int main(void) {
  vect block[] = {{2,2}};
  vect grid[] = {{3,3}};
  vect res = {5,5};
  // printf("%d", block[0].x);
  display(block, grid, res);
}