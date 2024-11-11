/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 14_P39057_Average.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 19 2024
  * @brief Write a program that reads a sequence of numbers and prints their average.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <iomanip>

int main(){
  int number{0};
  float average{0};
  int amount_of_nums{0};
  
  while(std::cin >> number){
    average += number;  // Accumulates the amount of the numbers of given and adds them
    amount_of_nums++; // Add 1 to the amount of numbers given
  }

  std::cout << std::fixed << std::setprecision(2) << number / amount_of_nums << std::endl;

  return 0;
}