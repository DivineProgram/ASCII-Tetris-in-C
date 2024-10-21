
#include <stdio.h>
#include "header-files/portableFunctions.h"
#include "header-files/gridFunctions.h"
#include "header-files/typeDef.h"


int main(void) {
  vect block[] = {{2,2}};
  vect grid[] = {{3,3}};
  vect res = {5,5};
  display(block, grid, res);
}