/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 20_P73501_Increasing_pairs.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads sequences of natural numbers, and that for each one prints the number of pairs of consecutive numbers such that the second number of the pair is greater than the first one.
*/

#include <iostream>

int main() {
  int number{};

  std::cin >> number;

  for (int i = 1; i <= number; ++i) {
    int count = 0;
    int previous, next;

    std::cin >> previous;

      while (previous > 0) {
        std::cin >> next;
        if (previous < next) ++count;
        previous = next;
      }

    std::cout << count << std::endl;
  }

  return 0;
}