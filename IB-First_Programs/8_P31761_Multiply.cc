/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 6_P58294_The_answer.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that computes the product of two give natural numbers
*/


#include <iostream>

int main () {
  int number_a{}, number_b{};
  long long int result{};

  std::cin >> number_a;
  std::cin >> number_b;

  result = number_a * number_b;
  
  std::cout << result << std::endl;

  return 0;
}


