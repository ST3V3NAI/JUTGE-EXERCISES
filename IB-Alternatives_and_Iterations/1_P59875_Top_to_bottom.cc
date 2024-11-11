/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 1_P59875_Top_to_bottom.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads two numbers x and y, and prints all 
  * numbers between x and y (or between y and x), in decreasing order.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {
    int num_1{0}, num_2{0};

    std::cin >> num_1 >> num_2;


    if(num_1 < num_2){
        for(int i = num_2; i >= num_1; i--){
                std::cout << i << std::endl;
        }
    } else {
        for(int i = num_1; i >= num_2; i--){
            std::cout << i << std::endl;
        }

    }

    return 0;
}