/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 5_Most_frecuent_factor.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that stores in f the most frequent factor of n, and store in q how many times it appears
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

void factor(int n, int& f, int&q){
// Esta función analiza el valor introducido, y te lo descompone en factores primos
  int i{2};
  q = 1;
  f = n;
  while (i * i <= n) {
    int j{0};
    while (n % i == 0 and n != 0) {
      ++j;
      n /= i;
    }
    if (j > q || (j == q && f > i)) {
      q = j;
      f = i;
    }
    ++i;
  }
}

int main(){
  int number_n{}, frecuence{}, quantity{}; // Inicializamos valores en 0

  std::cin >> number_n;   //  Pedimos valores al usuario

  factor(number_n, frecuence, quantity); // Definición de la función factor

  std::cout << "factor(" << number_n << ") --> " << frecuence << " " << quantity; // Mostramos el resultado por pantalla

  return 0; // El programa se ejecutó sin problemas

}