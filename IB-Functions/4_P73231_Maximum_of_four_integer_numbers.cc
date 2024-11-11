/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 4_P73231_Maximmum_of_four_integer_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a function that returns the maximum of four given integer numbers a, b, c and d.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>

int max4(int a, int b, int c, int d) {
  int value_right = std::max(c, d);
  int value_left = std::max(a, b);
  int value = std::max(value_left, value_right); 
  return value;
}

int main() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  std::cout << max4(a, b, c, d); 
  return 0;
}