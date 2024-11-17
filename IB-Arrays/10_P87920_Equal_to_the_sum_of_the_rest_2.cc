/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file 8_P87920_Equal_to_the_sum_of_the_rest_2.cc
  * @date 11 Nov 2024
  * @brief This is a program that tells if there is any number equal to the sum of the rest.
  * @bug No known bugs
  * @see https://jutge.org/problems/P87920_en
*/

#include <iostream>
#include <vector>

int main() {
  int kNumber{};

  while (std::cin >> kNumber) {
    std::vector<int> vector_1(kNumber);

    int suma{0};

    for (int i = 0; i < kNumber; ++i) {
      std::cin >> vector_1[i];
      suma += vector_1[i];
    }

    bool encontrado = false;

    int i{0};

    while (!encontrado && i < kNumber) {
      encontrado = (vector_1[i] == suma - vector_1[i]);
      ++i;
    }
    if (encontrado) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
  return 0;
}