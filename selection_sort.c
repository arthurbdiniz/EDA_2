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

void selection_sort() {
  int minimum_value;
  int index_minimum_value;

  for (int i = 0; i < SIZE_VECTOR; i++) {
    index_minimum_value = i;
    minimum_value = vector[i];

    for (int j = i + 1; j < SIZE_VECTOR; j++) {
      if(vector[j] < minimum_value){
        minimum_value = vector[j];
        index_minimum_value = j;
      }
    }

    if(index_minimum_value != i){
      int aux = vector[i];
      vector[i] = minimum_value;
      vector[index_minimum_value] = aux;
    }
  }
}

int main(int argc, char const *argv[]) {

   printf("\nVector: \n");
   show_vector();

   selection_sort();

   printf("\nVector Sorted: \n");
   show_vector();

  return 0;
}
