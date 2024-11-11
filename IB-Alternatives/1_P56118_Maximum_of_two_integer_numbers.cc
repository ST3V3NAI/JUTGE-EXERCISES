/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 1_P56118_Maximum_of_two_integer_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads two numbers and prints their maximum.
  * @bug There are no known bugs
  * @see 
  */


#include <iostream>

int main(){

  int num_a{0}, num_b{0};

  std::cin >> num_a >> num_b;

  if(num_a > num_b){
    std::cout << num_a << std::endl;
  } else {
    std::cout << num_b << std::endl;
  }



/** 
    std::cout << num_b << std::endl;
  } else if (num_a == num_b){
    std::cout << num_a << std::endl;
  } else {
    std::cout << "no tiene sentido, intente de nuevo" << std::endl;
  }
*/

  return 0;
}