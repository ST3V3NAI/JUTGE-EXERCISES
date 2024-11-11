/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 28_Uppercase_and_lowercase_letters.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 27 2024
  * @brief Write a program that reads a letter and prints it in lowercase if it was uppercase, or prints it in uppercase if it was lowercase.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

#include <iostream>

int main() {

    char letra{};

    std::cin >> letra; 

    if(letra >= 'a' && letra <= 'z') {
        letra = letra - 32;
    } else {
        letra = letra + 32;
    }

    std::cout << letra << std::endl;

    return 0; 
}