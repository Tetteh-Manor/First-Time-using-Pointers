#include <stdio.h>

int main () {
  int x = 5;
  int y = x;
  x = 7;
  int *x_pointer = &x;
  int z = *x_pointer;
  
  return z;
}
