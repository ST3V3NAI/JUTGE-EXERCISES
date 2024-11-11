/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 6_Print_a_line.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that prints a line with s spaces followed by n characters c. For instance, these three calls 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

void print(int s, char c, int n){
   for (int i = 0; i < s; i++){
      std::cout << ' ';
   }

   for (int i = 0; i < n; i++){
      std::cout << c;
   }

   std::cout << std::endl;
   
}

int main(){

  print(0, 'X', 3); // Definición de la función factor
  print(1, 'y', 4);
  print(2, 'A', 2);

  return 0; // El programa se ejecutó sin problemas

}