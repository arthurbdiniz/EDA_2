#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE_VECTOR 10

int vector[SIZE_VECTOR] = { 8, 5, 2, 6, 9, 3, 1, 4, 0, 7 };

void show_vector() {
  for (int i = 0; i < SIZE_VECTOR; i++) {
    printf("%d\n", vector[i]);
  }
}

void insertion_sort() {
  for (int i = 0; i < SIZE_VECTOR; i++) {
    int j = i;
    while( (j != 0) && vector[j] < vector[j-1]) {
      int aux = vector[j-1];
      vector[j-1] = vector[j];
      vector[j] = aux;
      j--;
    }
  }
}

int main(int argc, char const *argv[]) {

   printf("\nVector: \n");
   show_vector();

   insertion_sort();

   printf("\nVector Sorted: \n");
   show_vector();

  return 0;
}
