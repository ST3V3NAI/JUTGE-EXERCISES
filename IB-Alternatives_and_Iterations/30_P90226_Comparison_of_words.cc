/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 30_P90226_Comparison_of_words.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 25 2024
  * @brief This is a program that
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90226_en
  */  
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string word1, word2;
  std::cin >> word1 >> word2;

  if (word1 < word2) {
    std::cout << word1 << " < " << word2 << std::endl;
  } else if (word1 > word2) {
    std::cout << word1 << " > " << word2 << std::endl;
  } else {
    std::cout << word1 << " = " << word2 << std::endl;
  }

  return 0;
}