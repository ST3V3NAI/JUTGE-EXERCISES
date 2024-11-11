/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 3_P32954_Sort_three.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that arranges three numbers in a nondecreasing order.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

void Sort3(int& a, int&b, int&c){
    // Esta función ordena en orden ascendente los tres valores dados
    if(a > b){
       std::swap(a,b);
    } if (a > c){
        std::swap(a,c);
    } if (b > c){
        std::swap(b, c);
    }
}

int main(){
  int number_a{}, number_b{}, number_c{}; // Inicializamos valores en 0

  std::cin >> number_a >> number_b >> number_c;   //  Pedimos valores al usuario

  int original_a = number_a, original_b = number_b, original_c = number_c;

  Sort3(number_a, number_b, number_c); // Definición de la función sort_three

  std::cout << "sort3(" << original_a << ", " << original_b << ", " << original_c << ") --> " << number_a << " " << number_b  << " "  << number_c; // Mostramos el resultado por pantalla

  return 0; // El programa se ejecutó sin problemas

}