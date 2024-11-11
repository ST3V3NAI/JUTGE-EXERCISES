/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 9_P57852_Greatest_common_divisor_of_four.cc
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

int gcd4(int a, int b, int c, int d) {
  int result = gcd(gcd(gcd(a, b), c), d);
  return result;
}

int main() {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;  
  int result = gcd4(a, b, c, d); 
  std::cout << result << std::endl;
  
  return 0;
}
