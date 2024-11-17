/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 18_P71753_Maximum_of_each_sequence.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads a sequence of letters that ends with a dot and tells if it contains the succession of consecutive letters ‘h’, ‘e’, ‘l’, ‘l’, ‘o’ or not.
*/

#include <iostream>
#include <vector>
#include <cmath>

int main() {
  int number_of_numbers{0};
  int number{0};
  std::vector<int> vector_1{};

  std::cin >> number_of_numbers;

  for(int i = 0; i < number_of_numbers; i++){
      while(std::cin >> number){
        vector_1.emplace_back(number);
      }
  }

  int max_value = vector_1[0];

  for(size_t i = 0; i < vector_1.size(); ++i){
    if(vector_1[i] > max_value) {
        max_value = vector_1[i];
    }
  }

  std::cout << max_value << std::endl;

  return 0;
}