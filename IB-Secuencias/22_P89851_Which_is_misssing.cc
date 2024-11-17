/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 22_P89851_Which_is_missing.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads sequences with all the numbers between 1 and n but one, and tells which one is missing.
*/

#include <iostream>
#include <vector>


int main() {
  int numbers{};
  while (std::cin >> numbers)
  {
    std::vector<bool> vector_1 = std::vector<bool>(numbers + 1, true);
    for (int i = 1; i < numbers; i++)
    {
      int missing;
      std::cin >> missing;
      vector_1[missing] = false;
    }
    for (int i = 1; i <= numbers; i++)
      if (vector_1[i])
        std::cout << i << std::endl;
  }
}