#ifndef DYNAMIC_ARRAY
#define DYNAMIC_ARRAY


typedef struct array{
  int* values;
  int cap;    
  int used;
  
}Array;

void pushArray(Array *a, int val);
Array arrayInit();
void printArray(Array *a);
int returnArrayCap(Array *a);
int popArray(Array *a);
#endif
