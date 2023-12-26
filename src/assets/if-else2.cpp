#include <iostream>

int main() {
  // Declaração de variáveis
  int idade;
  int numero_da_sorte;

  // Solicitação de entrada
  std::cout << "Digite sua idade: ";
  std::cin >> idade;

  std::cout << "Digite seu número da sorte: ";
  std::cin >> numero_da_sorte;

  // Verificação de condições compostas usando if e else if
  if (idade >= 18 && numero_da_sorte == 69) {
    std::cout << "Você é maior de idade e seu número da sorte é 69."
              << std::endl;
  } else if (idade >= 18 && numero_da_sorte != 69) {
    std::cout << "Você é maior de idade e seu número da sorte NÃO é 69."
              << std::endl;
  } else {
    std::cout << "Você é menor de idade." << std::endl;
  }

  return 0;
}
