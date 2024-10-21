
#ifndef GRID_FUNCTIONS_H
#define GRID_FUNCTIONS_H

void display(vect_array absBlock, vect_array grid, vect res);
void blockRelToAbs(vect_array relBlock, vect origin, vect_array* destination);
int blockColliding(vect_array absBlock, vect_array grid, vect res);

#endif