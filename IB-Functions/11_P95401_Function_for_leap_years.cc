/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 11_P95401_Function_for_leap_years.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a function that tells if the given year is a leap year or not. To recall the rules about leap years, check the exercise ‍
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

bool is_leap_year(int year) {
  if (year < 1800 || year > 9999) {
    return 0;
  }
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int year;
  std::cin >> year;
  if (is_leap_year(year)) {
    std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
  }
  
  return 0;
}