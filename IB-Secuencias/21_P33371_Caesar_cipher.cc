/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 21_P33371_Caesar_cipher.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads sequences of natural numbers, and that for each one prints the number of pairs of consecutive numbers such that the second number of the pair is greater than the first one.
*/

#include <iostream>

char codificate(char c, int k) {
  if (c == '_') return ' ';
  else if (c == '.') return '\n';
  if (c <= 'z' and c >= 'a') {
    k = k % ('z' - 'a' + 1);
    c -= 'a';
    c += k;
    c = c%('z' - 'a' + 1);
    c += 'A';
  }
  return c;
}

int main() {
  int k;
  while (std::cin >> k) {
    char c = 'a';
    while (c != '.') {
      std::cin >> c;
      std::cout << codificate(c, k);
    }
  }
}