/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 2_P52847_Maximum_of_three_different_integer_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads three numbers and prints their maximum.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main(){

  int num_a{0}, num_b{0}, num_c{0};

  std::cin >> num_a >> num_b >> num_c;

  if(num_a > num_b && num_a > num_c){
    std::cout << num_a << std::endl;
  } else if (num_b > num_a && num_b > num_c) {
    std::cout << num_b << std::endl;
  } else {
    std::cout << num_c << std::endl;
  }



  return 0;
}