/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 2_P59539_Harmonic_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads a number n and prints the n-th harmonic number
  * , defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main(){
    int num_a{0};
    double harmonic_number{0.0};

    std::cin >> num_a;

    for(int i = 1; i <= num_a; i++){
        harmonic_number += 1.0 / i;  
    }

    std::cout << harmonic_number << std::endl;

    return 0;
}
