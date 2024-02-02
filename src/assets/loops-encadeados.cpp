#include <iostream>

int main() {
  // Loop externo de 1 a 3
  for (int i = 1; i <= 3; i++) {
    std::cout << "Iteração externa: " << i << std::endl;

    // Loop interno de 'A' a 'C'
    for (char ch = 'A'; ch <= 'C'; ch++) {
      std::cout << "   Iteração interna: " << ch << std::endl;
    }
  }

  std::cout << "Fim do programa." << std::endl;

  return 0;
}
