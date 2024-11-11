/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 2_P57548_Sum_of_two_integer_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that reads two numbers and prints their sum.
  * @see 
  */

 #include <iostream>

 int main(){

  int number_a{0}, number_b{0}, sum{0};

  std::cin >> number_a >>  number_b;

  sum = number_a + number_b;

  std::cout << sum << std::endl;

  return 0;
 }