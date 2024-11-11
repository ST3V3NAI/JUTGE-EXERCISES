/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 7_37469_Time_decomposition.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that adds one second to a clock time, 
  * given its hours, minutes and seconds.
  * @see 
  */

#include <iostream> 

int main(){
  int n_hours{0}, n_min{0}, n_sec{0};
  
  std::cin >> n_hours >> n_min >> n_sec;
  ++n_sec;

  if(n_sec >= 60){
    n_sec = 0;
    n_min = ++n_min;
  }

  if (n_min >= 60){
    n_min = 0;
    n_hours = ++n_hours;
  }

  if (n_hours >= 24){
    n_hours = 0;
  }
  

  std::cout << n_hours << " : " << n_min << " : " << n_sec;

  return 0;
}