/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 14_P34091_Perfect_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a program that sums the divisors of a number given and tells you if it a perfect num
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>

bool is_perfect(int n){
    int i{1}, sum{0};
      while (i < n) {
        if (n % i == 0)
          sum += i;
          i++;
      }
  if(n == sum){
    return true;
  } else {
    return false;
  }
}

int main() {
  int n;
  std::cin >> n;
  if (n == 0) {
    std::cout << "false" << std::endl;
    return 0;
  }
  if (is_perfect(n)) {
      std::cout << "true" << std::endl;
  } else {
      std::cout << "false" << std::endl; 
    }
    return 0;
}