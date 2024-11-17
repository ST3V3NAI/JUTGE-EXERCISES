/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 1_P75149_Looking_for_an_a.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads a sequence of characters ended in a dot and tells if the sequence has any lowercase ‘a’ or not.
*/


#include <iostream>
#include <string>

int main() {
    std::string phrase;
    std::getline(std::cin, phrase);
    bool found_a = false;

    for(int i = 0; i < phrase.size() && phrase[i] != '.'; i++){
        if(phrase[i] == 'a'){
            found_a = true;
            break;
        }
    }
    std::string result = (found_a) ? "yes" : "no";
    std::cout << result << std::endl;
    return 0;
}