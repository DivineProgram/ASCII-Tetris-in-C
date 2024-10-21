
#include <stdio.h>
#include "header-files/typeDef.h"
#include "header-files/gridFunctions.h"
#include "header-files/portableFunctions.h"


int main(void) {
  vect block[] = {{2,1}, {1,1}};
  vect grid[] = {{4,4}, {3,3}};
  vect res = {5,5};
  display(block, grid, res);
}