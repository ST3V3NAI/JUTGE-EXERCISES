/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 14_Counting_a's_2.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads a sequence of characters and prints the number of letters ‘a’ in the sequence before the first period.
*/

#include <iostream>
#include <string>

int main() {
    int number_of_as{}; 
    std::string phrase{};

   std::getline(std::cin, phrase, '.');

    for(char a : phrase){
        if (a == 'a'){
            ++number_of_as;
        }
    }

    std::cout << number_of_as << std::endl;

    return 0;
}
