/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 5_Iterative_factorial.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write an iterative function that, given a natural n, returns its factorial n!.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
int factorial(int n) {
  int value = (n == 1 || n == 0) ? 1 : factorial(n-1) * n;
  return value;
}

int main() {
  int n;
  std::cin >> n;
  if (n >= 0 && n <= 12) {
  std::cout << factorial(n) << std::endl;
  } else {
    std::cout << std::endl;
  }
  return 0;
}