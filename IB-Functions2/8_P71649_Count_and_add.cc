/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 8_Count_and_add.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program  read a sequence of integer numbers until its end, and store in num how many numbers it has, and store in sum the sum of those numbers. 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

void count_and_add(int& num, int& sum){  
  
  for(int i = 0; i < 3; i++){
    std::cin >> num;
      sum = sum + num;
  }
}


int main(){
    int num_integers{}, total_sum{};

    count_and_add(num_integers, total_sum); 

    std::cout << total_sum << std::endl;


    return 0; 
}