/**
  * Universisdad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P78548.cc
  * @author 
  * @date 11 Nov 2024
  * @brief This is a program that inverts the characters of a string
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P99133_en
  */ 
 
#include <iostream>
#include <algorithm>
#include <vector>

void reverseStrings(std::string& frase) {
  reverse(frase.begin(), frase.end());
}

int main() {
  int number_of_strings;
  std::cin >> number_of_strings;
  std::vector<std::string> strings(number_of_strings);

  for (int i = 0; i < number_of_strings; i++) {
    std::cin >> strings[i];
  }
  for (int i = number_of_strings - 1; i >= 0; i--) {
    reverseStrings(strings[i]);
    std::cout << strings[i] << std::endl;
  }
  return 0;
}