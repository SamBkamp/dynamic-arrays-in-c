#include "dynamic_array.h"
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char* argv[]){
  
  Array a = arrayInit();
  pushArray(&a,3);
  pushArray(&a,4);
  pushArray(&a,7);
  pushArray(&a,9);
  pushArray(&a,10);
  printf("POPPED: %d\n", popArray(&a));
  printArray(&a);
  free(a.values);
}
