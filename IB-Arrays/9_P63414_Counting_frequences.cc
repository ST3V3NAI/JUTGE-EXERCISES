/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file 9_P63414_Counting_frequences.cc
  * @date 11 Nov 2024
  * @brief This is a program that count the frequence of a number in a sequence
  * @bug No known bugs
  * @see https://jutge.org/problems/P63414_en
*/

#include <iostream>
#include <algorithm>

int main() {
  int number{};

  std::cin >> number;
  int array_de_numbers[number];

  for (int i = 0; i < number; ++i) {
    std::cin >> array_de_numbers[i];
  }

  std::sort(array_de_numbers, array_de_numbers + number);

  int count{1};

  for (int i = 1; i <= number; ++i) {
    if (i == number || array_de_numbers[i] != array_de_numbers[i - 1]) {
      std::cout << array_de_numbers[i - 1] << " : " << count << std::endl;
      count = 1;
    } else {
      count++;
    }
  }
  return 0;
}
