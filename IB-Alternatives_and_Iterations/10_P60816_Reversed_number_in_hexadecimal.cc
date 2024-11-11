/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 10_P60816_Reversed_number_in_hexadecimal.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads a number and prints its 
  * hexadecimal representation reversed. Follow the convention 
  * to use the letters from ‘A’ to ‘F’ to represent the values from 10 to 15.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include<string>
#include <algorithm>


int main() {
  unsigned long long int NumDec{0};

  std::cin >> NumDec;
  char hex[100];
    
sprintf(hex, "%llX" , NumDec); /*uso de %llx permite combertir a hexadecimal sin tener que usar calculos complejos, y el ll sirve para que n existan errores con numeros execivamente grandes.*/
  
  std::string NumHexaDec(hex);
reverse(NumHexaDec.begin(),NumHexaDec.end());

  std::cout<< NumHexaDec<< std::endl;
  return 0;
}