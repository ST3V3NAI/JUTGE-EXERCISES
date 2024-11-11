/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 1_P38045_Computing_square_roots_and_squares.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a program that reads a sequence of natural numbers, and prints the square and the square root of each one.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
  double number{0.0};
  while (std::cin >> number) {
    double square_root = sqrt(number);
    int power = number * number;
    std::cout << std::fixed << std::setprecision(6) << power << " " << square_root << std::endl;
    }
  return 0;
}