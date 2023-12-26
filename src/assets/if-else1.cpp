#include <iostream>

int main() {
  // Declaração de uma variável
  int numero;

  // Solicitação de entrada
  std::cout << "Digite um número: ";
  std::cin >> numero;

  // Verificação da condição usando if
  if (numero > 0) {
    std::cout << "O número é positivo." << std::endl;
  } else {
    std::cout << "O número é não-positivo." << std::endl;
  }

  return 0;
}
