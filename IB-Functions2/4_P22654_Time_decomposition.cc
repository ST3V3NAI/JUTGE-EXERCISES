/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 4_P22654_Time_decompostion.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that computing a number of secs, it displays hours, mins and sec
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

void decompose(int n, int& h, int&m, int&s){
    h = n / 3600;
    m = (n % 3600) / 60;
    s = (n % 3600) % 60;
}

int main(){
  int number_n{}, number_h{}, number_m{}, number_s{}; // Inicializamos valores en 0

  std::cin >> number_n;   //  Pedimos valores al usuario

  decompose(number_n, number_h, number_m, number_s); // Definición de la función decompose

  std::cout << "decompose(" << number_n << ") --> " << number_h << " " << number_m  << " "  << number_s; // Mostramos el resultado por pantalla

  return 0; // El programa se ejecutó sin problemas

}
