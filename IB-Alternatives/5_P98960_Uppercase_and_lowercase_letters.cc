/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 4_P15613_Temperatures.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads a letter and prints it 
  * in lowercase if it was uppercase, or prints it in uppercase if it was lowercase.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <cctype>

int main(){
    char letter{};

    std::cin >> letter;

    if (std::isupper(letter)){
        letter = std::towlower(letter); 
    } else if (std::islower(letter)){
        letter = std::toupper(letter);
    }

    std::cout << letter << std::endl;


    return 0;
}