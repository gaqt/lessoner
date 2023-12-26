#include <iostream>

int main() {
  // Declaração de variável
  int numero;

  // Solicitação de entrada
  std::cout << "Digite um número: ";
  std::cin >> numero;

  // Verificação de condição usando if e else encadeados
  if (numero > 0) {
    std::cout << "O número é positivo." << std::endl;
  } else {
    if (numero < 0) {
      std::cout << "O número é negativo." << std::endl;
    } else {
      std::cout << "O número é zero." << std::endl;
    }
  }

  return 0;
}
