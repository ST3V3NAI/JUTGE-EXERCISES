/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 2_P98458_Minimum_and_maximum.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a function that gives you the max and min of two numbers.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

void Min_Max(int a, int b, int& mn, int& mx){
  // Esta función devuelve el máximo y el mínimo de dos números por pantalla
  if(a > b){
    mn = b;
    mx = a;
  } else {
    mn = a;
    mx = b;
  }
}


int main(){
  int number_a{}, number_b{}, minimum{}, maximum{}; // Inicializamos valores en 0

  std::cin >> number_a >> number_b;   //  Pedimos valores al usuario

  Min_Max(number_a, number_b, minimum, maximum); // Definición de la función min_max

  std::cout << "min_max(" << number_a << ", " << number_b << ") --> " << minimum << " " << maximum ; // Mostramos el resultado por pantalla

  return 0; // El programa se ejecutó sin problemas

}