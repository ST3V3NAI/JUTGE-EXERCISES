/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 10_P96564_Least_common_multiple.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a program such that, given n strictly positive natural numbers x1 … xn, prints their least common multiple greater than zero.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <vector>
int gcd(int a, int b) {
  if (b == 0) {
     return a;
  }
     return gcd(b, a % b);
}

int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}

int main() {
  int number;
  while(std::cin >> number && number) {
    std::vector<int> numbers(number);
    if (number == 0) {
      break;
    }
   for (int i{0}; i < number; ++i) {
     std::cin >> numbers[i];
   }
   int result = numbers[0];
     for (int i = 1; i < number; ++i) {
       result = lcm(result, numbers[i]);
     }
   std::cout << result << std::endl;
  }
  return 0;
}