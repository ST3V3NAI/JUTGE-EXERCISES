/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 6_P69277_First_cubes.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads a natural number n, and prints the result of the following sum:
  03,13,…,(n−1)3,n3. .
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main(){
    int num_a{0}, cubo{0};

    std::cin >> num_a;

    for(int i = 1; i <= num_a; i++){
        cubo = i * i * i;
            std::cout << cubo << ",";
    }
     
    return 0;
}