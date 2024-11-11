/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 8_P50327_Reversed_number.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads a number and prints it reversed.
  * @bug There are no known bugs
  * @see 
  */


#include <iostream>

 int main(){
    int numero_normal{0}, numero_invertido{0};

    std::cin >> numero_normal;
    
        while(numero_normal != 0){
        int digito = numero_normal % 10;

        numero_invertido = numero_invertido * 10 + digito;

        numero_normal /= 10;    
    }

    std::cout << numero_invertido << std::endl;
    
 }