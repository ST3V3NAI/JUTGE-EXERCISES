/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 12_P97969_Counting_a's.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 19 2024
  * @brief Write a program that reads a sequence of characters ended with a period and prints the number of letters ‘a’ in the sequence.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <string>

int main() {
  std::string frase{};
  int contador{};

  std::cin >> frase;
  std::getline(std::cin, frase, '.');

  for(char i : frase) {
    if(i == 'a') {
        contador++;
    }
  }

  std::cout << contador << std::endl;
  return 0;

}