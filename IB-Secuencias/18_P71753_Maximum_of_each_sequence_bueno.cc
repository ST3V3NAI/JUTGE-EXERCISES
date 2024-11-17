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
  int numbers{0};
  while(std::cin >> numbers) {
    int number_2, maximum{0};
    std::cin >> maximum;
    for(int i = 1; i < numbers; i++){
      std::cin >> number_2;
      maximum = std::max(number_2, maximum);
    }
    std::cout << maximum << std::endl;
  }
}

