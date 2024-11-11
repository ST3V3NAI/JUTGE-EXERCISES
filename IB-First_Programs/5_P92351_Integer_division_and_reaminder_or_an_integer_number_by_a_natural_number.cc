/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 5_P92351_Integer_division_and_remainder_of_an_integer_number_by_a_natural_number.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that reads an integer number a and a natural number b, with b > 0, and prints the integer division d and the remainder r of a divided by b.
*/

#include <iostream>

int main(){

  int num_a{0}, num_b{0}, div{0}, rem{0};

  std::cin >> num_a >> num_b;

  if(num_b > 0){

  div = num_a / num_b;
  rem = num_a - div * num_b;

  if(rem < 0){
    rem += num_b;
    div -= 1;
  }

        
  std::cout << div << " " << rem << std::endl;
  } else {
    std::cout << "No se puede" << std::endl;
  }

  return 0;

}