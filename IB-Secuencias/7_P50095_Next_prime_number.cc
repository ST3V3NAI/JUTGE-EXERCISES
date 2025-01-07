/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 7_P50095_Next_prime_number.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads a sequence of prime numbers and, for each one, prints the next prime number.
*/

#include <iostream>

bool es_primo(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int numero;
  while (std::cin >> numero && es_primo(numero)) {
    bool primer = false;
    int next = numero + 1;
    while (!primer) {
      primer = es_primo(next);
      if (primer)
        std::cout << next << std::endl;
      else
        ++next;
    }
  }
}