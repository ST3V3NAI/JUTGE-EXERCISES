/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 15_Hello_bye.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads a sequence of letters that ends with a dot and tells if it contains the succession of consecutive letters ‘h’, ‘e’, ‘l’, ‘l’, ‘o’ or not.
*/

#include <iostream>
#include <string>

int main() {
    std::string input, target = "hello";
    size_t target_index = 0;
    bool found = false;
    getline(std::cin, input, '.');

    for(char c : input) {
        if (c == target[target_index]) {
            target_index++;
            if(target_index == target.length()) {
                found = true;
                break;
            }
        } else {
            target_index = (c == target[0]) ? 1 : 0;
        }
    }

    std::cout << (found ? "hello" : "bye") << std::endl;
     
}