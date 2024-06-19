#include <stdbool.h>
#include <stdio.h>

int main(void) { return 0; }

void ex1() {
  int i = 2;
  int j = 3;
  int k = i * j != 6;
  printf("%d", k);
}
