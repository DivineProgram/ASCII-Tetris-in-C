
#ifndef PORTABLE_FUNCTIONS_H
#define PORTABLE_FUNCTIONS_H

int vectCompare(vect vectA, vect vectB);
int vectIncluded(vect vector, vect_array arr);
void vectMerge(vect_array arrA, vect_array arrB, vect_array* destination);
void vectAvect(vect vectA, vect vectB, vect* destination);
void matXvect(mat matrix, vect vector, vect* destination);

#endif