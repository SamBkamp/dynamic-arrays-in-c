#include "dynamic_array.h"
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char* argv[]){
  
  Array a = arrayInit();
  //push to array
  pushArray(&a,3);
  pushArray(&a,4);
  pushArray(&a,10);
  
  //access random values of array
  for (int i = 0; i < a.used; i++){
    printf("%d\n", a.values[i]);
  }
  
  //pop last value of array
  printf("POPPED: %d\n", popArray(&a));

  //free array
  free(a.values);
}
