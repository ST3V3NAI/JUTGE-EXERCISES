/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 15_P95972_Sum_of_divisors.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a program that sum the divisors of a number given
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cmath>

int sum_divisors(int x){
    int sum{0};
    int i{};
  for (i = 1; (i * i) < x; ++i) {
    if (x % i == 0) {
      sum += i;
    }
  }
  for (i ; i >=1; --i){
    if ((x % i ==0) && (x / i != i-1)){
      sum += x/i;
    }
  }
  return sum;
}
int main() {
   unsigned int number{};
   while(std::cin >> number);
     std::cout << sum_divisors(number) << std::endl;
   return 0;
}
