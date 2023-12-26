#include <iostream>
#include <string> // Inclua a biblioteca para usar strings

int main() {
  // Declarando e inicializando uma string
  std::string nome = "João";

  // Concatenando strings
  std::string sobrenome = "Silva";
  std::string nomeCompleto = nome + " " + sobrenome;

  // Imprimindo a string resultante
  printf("Nome Completo: %s\n", nomeCompleto.c_str());

  // Obtendo o comprimento da string
  printf("Comprimento da string: %d\n", nomeCompleto.length());

  return 0;
}
