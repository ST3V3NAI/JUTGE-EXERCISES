/**
  * Universisdad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file 2_P67268_Reversing_sequences.cc
  * @author Abolaji Ibidokun Steven alu0101619613@ull.edu.es
  * @date 11 Nov 2024
  * @brief This is a program that inverts the characters of a string
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P14130_en
  */ 

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int num_length{0};
  std::vector<int> numeros;

  while(std::cin >> num_length) {
    for(int i = 0; i < num_length; i++) {
        int num;
        std::cin >> num;
        numeros.emplace_back(num); 
    }
    std::reverse(numeros.begin(), numeros.end());
    for(int i = 0; i < numeros.size(); i++){
      std::cout << numeros[i];
      if (i != numeros.size() - 1){
        std::cout << " ";
      }
    }
    std::cout << std::endl;
    numeros.clear();
  }
  return 0;
}