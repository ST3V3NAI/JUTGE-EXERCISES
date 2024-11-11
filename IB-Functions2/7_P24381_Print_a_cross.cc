/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 7_Print_a_cross.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that prints a n x n cross with the character c.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

void cross(int n, char c){
  for(int i{0}; i < (n -1) / 2; i++){
    for(int j{0}; j < (n-1) / 2; j++)
       std::cout << " ";
     std::cout << c << std::endl;
  }
  for (int j{0}; j < n; j++)
    std::cout << c;
  std::cout << std::endl;
  for (int i{0}; i < (n - 1) / 2; i++){
    for (int j{0}; j < (n - 1) / 2; j++)
      std::cout << " ";
    std::cout << c << std::endl;
  } 
}


int main() {
  int size;
  char content;
  
  cross(5, 'X');

  return 0;

}