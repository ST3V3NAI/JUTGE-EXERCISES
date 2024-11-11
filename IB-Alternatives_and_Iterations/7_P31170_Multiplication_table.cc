/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 7_P31170_Multiplication_table.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 12 2024
  * @brief Write a program that reads a number n and prints the “multiplication table” of n.
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

 int main(){
    int numero_tabla{0}, mult{0};

    std::cin >> numero_tabla;

    for(int i = 1; i <= 10; i++){
        mult = numero_tabla * i;
        std::cout << numero_tabla << "*" << i << " = " << mult << std::endl;
    }
 }