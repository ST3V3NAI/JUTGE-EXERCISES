/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 8_P88790_Iterative_greatest_common_divisor.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a function that computes the greatest common divisor of four natural numbers a, b, c and d using the fast version of the Euclidean algorithm.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int gcd(int a, int b) {
  if (b == 0) {
     return a;
  }
     return gcd(b, a % b);
}

int main() {
  int a, b;
  std::cin >> a >> b; 
  int result = gcd(a, b); 
  std::cout << result << std::endl;
  
  return 0;
}