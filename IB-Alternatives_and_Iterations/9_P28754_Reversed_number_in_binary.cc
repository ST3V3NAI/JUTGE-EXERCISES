/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 9_P28754_Reversed_number_in_binary.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads a number and prints its 
  * binary representation reversed.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <string>
#include <algorithm>


int main() {
  long long int Num1;
  std::string binario = "";

  std::cin >> Num1;
//comprobamso que sea superior a cero, en caso de ser 0 el resultado es 0
  while (Num1 < 0) {
    std::cin >> Num1;
  }
  if (Num1 == 0) {
    binario = "0";
  }
//calculamos cÃ³mo es en sistema binario
  while (Num1 > 0) {
    if (Num1 % 2 == 0) {
      binario = "0" + binario;
    } else {
      binario = "1" + binario;
    }
    Num1 = Num1 / 2;
  }

  reverse(binario.begin(), binario.end());
  std::cout << binario << std::endl;
}