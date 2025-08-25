
#include "stdio.h"
#include "stdlib.h"
#include "dynamic_array.h"


Array arrayInit(){
  Array a;
  a.used = 0;
  a.cap = 2; //dunno default inital cap
  a.values = malloc(sizeof(int) * a.cap);
  return a;
}

void pushArray(Array *a, int val){
  if(a->used == a->cap)
    a->values = realloc(a->values, sizeof(int)*(a->cap *= 2));
  a->values[a->used] = val;
  a->used++;  
  return;
}

int popArray(Array *a){ //no realloc here, ineff. in the short term but chances are the buffer will be refilled again soon. Saving twice the realloc calls
  a->used--;
  return a->values[a->used];
}

