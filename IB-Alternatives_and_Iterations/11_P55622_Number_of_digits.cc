/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 11_P55622_Number_of_digits.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 19 2024
  * @brief write a program that reads a number and prints its number of digits
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <string>

int main() {
  std::string number{};

  std::cin >> number;
  std::cout << "The number of digits of " << number << " is " << number.size() << "." << std::endl;
  return 0;   

}
