#include <iostream>
#include <string>

int main() {
  // Declarando as variáveis
  int num_int;
  float num_float;
  std::string str;

  // Lendo a entrada com cin
  std::cin >> num_int;
  std::cin >> num_float;
  std::cin >> str;

  // Mostrando a saída com cout
  std::cout << num_int << num_float << str << std::endl;

  return 0;
}
