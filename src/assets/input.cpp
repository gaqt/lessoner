#include <iostream>

int main() {
  int num_int;
  float num_float;

  // Lendo a entrada
  scanf("%d", &num_int);
  scanf("%f", &num_float);

  // Mostrando a entrada lida de volta
  printf("%d %.2f\n", num_int, num_float);

  return 0;
}
