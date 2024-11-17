/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 19_Statistical_measures.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads a sequence of letters that ends with a dot and tells if it contains the succession of consecutive letters ‘h’, ‘e’, ‘l’, ‘l’, ‘o’ or not.
*/


#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

const double kEPS = 10e-6;

bool is_greater(const double max, const double number) {
  return ((max - number) > kEPS);
}

int main() {
  int n{0}, m{0}, strings{0};

  std::cin >> n;

  while (strings < n) {
    std::cin >> m;
    strings++;

    std::vector<double> my_vec;

    while (my_vec.size() < m) {
      double numbers{0.0};
      std::cin >> numbers;
      my_vec.emplace_back(numbers);
    }

    double max = my_vec[0], min = my_vec[0], average = my_vec[0];

    for (int i = 1; i < my_vec.size(); i++) {
      if (is_greater(min, my_vec[i])) min = my_vec[i];
      else if (!is_greater(max, my_vec[i])) max = my_vec[i];
      average += my_vec[i];
    }

    std::cout << std::fixed << std::setprecision(4) << std::dec << min << " " << max << " " << average / m << std::endl;
  }
  return 0;
}