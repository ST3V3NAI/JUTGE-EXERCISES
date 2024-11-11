/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 27_P15613_Temperatures.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 27 2024
  * @brief Write a program that reads an integer number that 
  * represents a temperature given in degree Celsius, 
  * and that tells if the weather is hot, if it’s cold, or if it’s ok. 
  * Suppose that it’s hot if the temperature is higher than 30 degrees, 
  * that it’s cold if the temperature is lower than 10 degrees,
  * and that it’s ok otherwise. Moreover, warn if with the given 
  * temperature water would boil, or if water would freeze. 
  * Assume that water boils at 100 or more degrees, and 
  * that water freezes at 0 or less degrees.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

int main(){
  int temp_1{0};

  std::cin >> temp_1;

  if(temp_1 > 30){
    std::cout << "it's hot\n";
    if(temp_1 >= 100){
        std::cout << "water would boil\n";
    }
  } else if(temp_1 >= 10 && temp_1 <= 30){
    std::cout << "it's ok\n";
  } else if (temp_1 < 10){
    std::cout << "it's cold\n";
    if(temp_1 <= 0){
        std::cout << "water would freeze\n";
    }
  }

  return 0;
}