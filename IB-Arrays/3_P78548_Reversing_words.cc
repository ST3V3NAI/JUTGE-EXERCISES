/**
  * Universisdad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file 3_P78548_Reversing_words.cc
  * @author Abolaji Ibidokun Steven alu0101619613@ull.edu.es
  * @date 11 Nov 2024
  * @brief This is a program that inverts the characters of a string
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P14130_en
  */ 

#include <iostream>
#include <algorithm>

void reverseStrings(std::string& frase) {
  reverse(frase.begin(), frase.end());
}

int main() {
  std::string input_phrase;
  while (std::cin >> input_phrase) {
    reverseStrings(input_phrase);
    std::cout << input_phrase << std::endl;
  }
}