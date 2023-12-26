#include <iostream>
#include <string> // Inclua a biblioteca para usar strings

int main() {
  // Declarando e inicializando uma string
  std::string nome = "João";

  // Concatenando strings
  std::string sobrenome = "Silva";
  std::string nome_completo = nome + " " + sobrenome;

  // Imprimindo a string resultante
  printf("Nome Completo: %s\n", nome_completo.c_str());

  // Obtendo o comprimento da string
  printf("Comprimento da string: %d\n", nome_completo.length());

  return 0;
}
