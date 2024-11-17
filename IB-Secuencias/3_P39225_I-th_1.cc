/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 3_P39225_I-th_1.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that, given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.
*/

#include <iostream>
#include <vector>

int main(){
  std::vector <int> vector_1;
  int position{0};
  int numbers{0};

  std::cin >> position;

  while(std::cin >> numbers && numbers >= 0) {
    vector_1.emplace_back(numbers);
  }
  std::cout << "At the position " << position << " there is a(n) " << vector_1[position - 1] << "." << std::endl; 
  return 0;
}
