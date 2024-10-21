
#ifndef TYPEDEFS_H
#define TYPEDEFS_H

typedef struct {
  int x;
  int y;
} vect;

typedef struct {
  int len;
  vect coords[64];
} vect_array;

typedef struct {
  int a;
  int b;
  int c;
  int d;
} mat;

#endif