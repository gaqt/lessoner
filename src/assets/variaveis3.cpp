#include <iostream>
#include <string>
using namespace std;

int main() {
  // Declarando e definindo variáveis
  int numero_magico = 420;
  unsigned int idade = 24;
  string nome = "Clodoaldo";

  // Mostrando valores inciais
  printf("%d %d %s\n", numero_magico, idade, nome.c_str());

  // Redefinindo variáveis
  numero_magico = 69;
  idade = idade + 1; // pode ser substituído por idade += 1 ou idade++
  nome = "Josevaldo";
  // A partir deste ponto no código, o valor das variáveis mudou

  // Mostrando valores novos
  printf("%d %d %s\n", numero_magico, idade, nome.c_str());

  return 0;
}
