/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 3_P97156_Harmonic_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads two numbers 
  * a and b, and prints all numbers between a and b.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main() {
    int num_1{0}, num_2{0};

    std::cin >> num_1 >> num_2;


    if(num_1 > num_2){
        std::cout << std::endl;
    } else if (num_1 == num_2){
        std::cout << num_1 << std::endl; 
    }  else if (num_1 < num_2){
            for(int i = num_1; i <= num_2; i++){
                std::cout << i;
                if(i < num_2){
            std::cout << ",";
                } 
            }
    std::cout << "" << std::endl;
    }

    return 0;
}