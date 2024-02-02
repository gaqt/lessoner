#include <iostream>

int main() {
  for (int i = 1; i <= 10; i++) {
    // Se i atingir 5, o loop será interrompido
    if (i == 5) {
      std::cout << "Loop interrompido em i = " << i << std::endl;
      break;
    }

    // Imprime o valor atual de i
    std::cout << "Número: " << i << std::endl;
  }

  std::cout << "Fim do programa." << std::endl;

  return 0;
}
