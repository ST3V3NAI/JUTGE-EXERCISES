/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 4_P37500_First_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads a number n, and prints 
  * all numbers between 0 and n.
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

int main() {
    int num_1{0};

    std::cin >> num_1;

    for(int i = 0; i <= num_1; i++){
        std::cout << i << std::endl;
    }

    return 0;
}