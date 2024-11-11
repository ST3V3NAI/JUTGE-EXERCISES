/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 17_P96767_Polynomial_evaluation.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 19 2024
  * @brief Write a program that reads a number x and a polynomial p(z) = c0 z0 + c1 z1 + ⋯ + cn zn, and computes p(x).
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  double base{0}, number{0}, polynomial_calculation{0.0};
  int coefficient{0};

  std::cin >> base; // We ask for the base to the user
  

  while(std::cin >> number){ // While we keep submitting numbers, the while keep resolving the function
    polynomial_calculation += (number * pow(base,coefficient));
    coefficient++;
  }

  std::cout << std::fixed << std::setprecision(4) << polynomial_calculation << std::endl; // Finally, the answer is displayed on screen rounded

  return 0;
     
}