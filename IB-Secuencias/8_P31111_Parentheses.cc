/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P96767_polynomial_evaluation.cc
  * @author alu0101619613@ull.edu.es
  * @date Nov 4 2024
  * @brief Given a sequence made up of only ‘(’ and ‘)’, tell if the parentheses close correctly.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31111_en
  */
 

#include <iostream>

int main() {
  char character{};
  int iterador_j{};
  bool igual = true;

  // Inicializamos el bucle while para que vaya pidiendonos los parentesis
  while (std::cin >> character && igual) {
    if (character == '(') {
      iterador_j++;
    } else {
      iterador_j--;
    }
    if (iterador_j < 0) { // Si la iterador_j es menor que 0, imprime falso
      igual = false;
    }
  }

  if (iterador_j == 0) { // Si la iterador_j es igual que 0 imprime si o no, dependediendo si esta bn o mal cerrado el parentesis
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }

  return 0;
}


