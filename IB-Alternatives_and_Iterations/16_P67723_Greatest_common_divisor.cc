/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 16_P67723_Greatest_common_divisor.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 19 2024
  * @brief Write a program that computes the greatest common divisor of two numbers.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

// Función that calculates GCD using Euclide's Algorithm

int GreatestCommonDivisor(int number_a, int number_b){
  while(number_b == 0){
    return number_a;
  }
    return GreatestCommonDivisor(number_b, number_a % number_b);
}


int main() {
  int number_a, number_b;
  std::cin >> number_a >> number_b;
  int result = GreatestCommonDivisor(number_a, number_b);
  std::cout << "The gcd of" << number_a << "and" << number_b << "is" << result << "." << std::endl; 
}
