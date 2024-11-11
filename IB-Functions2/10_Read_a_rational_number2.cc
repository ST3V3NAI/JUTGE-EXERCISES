/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 10_Read_a_rational_number2.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program  read a sequence of integer numbers until its end, and store in num how many numbers it has, and store in sum the sum of those numbers. 
  * @bug There are no known bugs
  * @see to read a rational number given in the form “numerator”/“denominator”, and store these two values in num and den, respectively. Additionally, you must remove all common factors from num and den. For instance, if the input has 
  */

#include <algorithm>
#include <iostream>
using namespace std;

bool read_rational(int &num, int &den) {
  char c;
  if (cin >> num >> c >> den) {
    int x = __gcd(num, den);
    num = num / x;
    den = den / x;
    return true;
  }
  return false;
}

int main() {
  int numerador{0}, denominador{0};
  while (cin >> numerador >> denominador) {
    while (read_rational(numerador, denominador)) {
      cout << numerador <<" "<< denominador << endl;
    }
  }
}