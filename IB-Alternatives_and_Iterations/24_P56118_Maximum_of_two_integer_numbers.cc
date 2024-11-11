/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 24_P56118_Maximum_of_2_integer_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 26 2024
  * @brief Write a program that reads two numbers and prints their maximum
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int MaxNumber(int number_a, int number_b){
  if(number_a > number_b){
    return number_a;
  } else if (number_a < number_b){
     return number_b;
  } else {
    return number_a;
  }
}


int main() {
  int number_1{0}, number_2{0};
  
  std::cin >> number_1 >> number_2;

  std::cout << MaxNumber(number_1, number_2) << std::endl;

}

