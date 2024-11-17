/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 5_P65103_I-th_3.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that, given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.
  */

#include <iostream>

int main(){
  int position, iterator, sequence;

  std::cin >> iterator;

  while(position != iterator && std::cin >> sequence && sequence != -1){
    ++position;
  }

  if(iterator <= 0) std::cout << "Incorrect position" << std::endl;
  else if (position == iterator) std::cout << "At the position " << iterator << " there is a(n) " << sequence << '.' << std::endl;
  else std::cout << "Incorrect position." << std::endl;
  return 0;
}