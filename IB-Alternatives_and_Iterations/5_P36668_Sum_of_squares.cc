/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 5_P36668_Sum_of_squares.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads a natural number n, and prints the result of the following sum:
    12 + 22 + … + (n−1)2 + n2 .
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main(){
    int num_a{0}, cuadrado{0};

    std::cin >> num_a;

    for(int i = 1; i <= num_a; i++){
        cuadrado += i * i;
    }
     
    std::cout << cuadrado;

    return 0;
}