#include <iostream>

int main() {
  // Inicializando a variável de controle
  int contador = 1;

  // O loop continuará enquanto o contador for menor ou igual a 5
  while (contador <= 5) {
    // Imprime o valor atual do contador
    std::cout << "Número: " << contador << std::endl;

    // Incrementa o contador para avançar para o próximo número
    contador++;
  }

  // Mensagem após o término do loop
  std::cout << "Fim do programa." << std::endl;

  return 0;
}
