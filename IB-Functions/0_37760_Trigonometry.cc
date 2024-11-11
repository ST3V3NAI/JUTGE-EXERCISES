/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 0_37760_Trigonometry.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a program that reads a sequence of angles in degrees, and prints their sine and their cosine.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  double user_input{0.0};
  while (std::cin >> user_input) {
    double sine = sin (user_input * M_PI / 180.0);
    double cosine = cos (user_input * M_PI / 180.0); 
    std::cout << std::fixed << std::setprecision(6) << sine << " " << cosine << std::endl;
  }
  return 0;
}

