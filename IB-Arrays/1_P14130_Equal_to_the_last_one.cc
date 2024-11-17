/**
  * Universisdad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file 1_P14130_Equal_to_the_last_one.cc
  * @author Abolaji Ibidokun Steven alu0101619613@ull.edu.es
  * @date 11 Nov 2024
  * @brief This is a program that tells the amount of numbers that are equal to the previous one
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P14130_en
  */ 
#include <iostream>
#include <vector>

int countLastElement(std::vector<int> &numbers) {
  if (numbers.size() < 2) {
    return 0;
  }

  int count{0};
  int last{numbers.back()};

  for (int i{0}; i < numbers.size() - 1; ++i) {
    if (numbers[i] == last) {
      count++;
    }
  }
  return count;
}

int main() {
  int number;
  std::cin >> number;
  std::vector<int> numbers;
  
  for (int i{0}; i < number; ++i) {
    int number;
    std::cin >> number;
    numbers.emplace_back(number);
  }
  int result = countLastElement(numbers);
  std::cout << result << std::endl;
  return 0;
}