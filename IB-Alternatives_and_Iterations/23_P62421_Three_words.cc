/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 23_P62421_Three_words.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 26 2024
  * @brief Write a program that that reads three words a, b and c, and prints a line with c, b and a in this order.
  * @bug There are no known bugs
  * @see 
  */


#include <iostream>
#include <string>

void IntercambiaTresPalabras(std::string palabra_1,std::string palabra_2,std::string palabra_3){
  std::cout << palabra_3 << " " << palabra_2 << " " << palabra_1 << std::endl;
}


int main () {
  std::string palabra_a, palabra_b, palabra_c;

  std::cin >> palabra_a >> palabra_b >> palabra_c;

  IntercambiaTresPalabras(palabra_a, palabra_b, palabra_c);

  return 0;
}