/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 3_P41221_Sum_of_three_integer_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that reads three numbers and prints their sum.
  */

 #include <iostream>

  int main(){

  int number_a{0}, number_b{0}, number_c{0}, sum{0};

  std::cin >> number_a >>  number_b >> number_c;

  sum = number_a + number_b + number_c;

  std::cout << sum << std::endl;

  return 0;
 }