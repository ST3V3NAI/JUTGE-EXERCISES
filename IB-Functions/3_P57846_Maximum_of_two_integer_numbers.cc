/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 3_P73231_Maximmum_of_two_integer_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a function that returns the maximum of two given integer numbers a and b.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>

int max2(int a, int b) {
  int value = std::max(a, b);
  return value;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << max2(a, b) << std::endl;
  return 0;
}