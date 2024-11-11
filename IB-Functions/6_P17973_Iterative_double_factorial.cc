/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 6_Iterative_double_factorial.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a program that reads a character and tells if it is a letter, if it is a vowel, if it is a consonant, if it is an uppercase letter, if it is a lowercase letter and if it is a digit.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int double_factorial(int x) {
  int value = (x == 1 || x == 0 ? 1 : double_factorial(x-2) * x);
      return value;
}

int main() {
  int x;
  std::cin >> x;
  if (x >= 0 && x <= 19) {
  int value = double_factorial(x);
  std::cout << value << std::endl;
  } else {
    std::cout << std::endl;
  return 0;
  }
}
