/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 7_37469_Time_decomposition.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that, given a number of seconds n, 
  * prints the number of hours, minutes and seconds represented by n.
  * @see 
  */

#include <iostream>

int main(){
  int num_total{0}, n_hours{0}, n_min{0}, n_sec{0};
  
  std::cin >> num_total;

    n_hours = num_total / 3600;
    n_min = (num_total % 3600) / 60;
    n_sec = (num_total % 3600) % 60; 
  

  std::cout << n_hours << " " << n_min << " " << n_sec;

  return 0;
}