/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 1_P65437_Swap.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a function that swaps two numbers.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

void swap2(int& a, int& b){
     //Esta función intercambia dos valores
     int temp = a; 
     a = b;
     b = temp;
}
 


int main(){
  int number_a{}, number_b{}; // Inicializamos valores en 0

  std::cin >> number_a >> number_b;   //  Pedimos valores al usuario

  swap2(number_a, number_b); // Definición de la función Swap

  std::cout << "swap2(" << number_b << ", " << number_a << ") --> " << number_a << " " << number_b ; // Mostramos el resultado por pantalla

  return 0; // El programa se ejecutó sin problemas

}
