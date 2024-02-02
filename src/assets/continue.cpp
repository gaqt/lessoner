#include <iostream>

int main() {
  for (int i = 1; i <= 5; i++) {
    // Se i for igual a 3, o loop continuará sem executar o código abaixo
    if (i == 3) {
      std::cout << "Iteração ignorada em i = " << i << std::endl;
      continue;
    }

    // Imprime o valor atual de i, exceto quando i é igual a 3
    std::cout << "Número: " << i << std::endl;
  }

  std::cout << "Fim do programa." << std::endl;

  return 0;
}
