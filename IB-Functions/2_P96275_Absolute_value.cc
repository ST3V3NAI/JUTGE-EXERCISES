/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 2_P96275_Absolute_value.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a function that returns the absolute value of an integer n.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>
int absolute(int n) {
  int value = abs(n);
  return value;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << absolute(n) << std::endl;
  return 0;
}