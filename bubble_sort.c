#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE_VECTOR 10

int decrement = SIZE_VECTOR - 1;
int vector[SIZE_VECTOR] = { 8, 5, 2, 6, 9, 3, 1, 4, 0, 7 };

void show_vector() {
  for (int i = 0; i < SIZE_VECTOR; i++) {
    printf("%d\n", vector[i]);
  }
}

void bubble_sort() {
  do {
    for (int i = 0; i < decrement; i++) {
      if(vector[i] > vector[i+1]) {
        int aux = vector[i];
        vector[i] = vector[i+1];
        vector[i+1] = aux;
      }
    }
    decrement--;
  } while(decrement > 0);
}

int main(int argc, char const *argv[]) {

   printf("\nVector: \n");
   show_vector();

   bubble_sort();

   printf("\nVector Sorted: \n");
   show_vector();

  return 0;
}
