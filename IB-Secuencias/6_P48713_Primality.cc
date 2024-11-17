/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 6_P48713_Primality.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads a sequence of natural numbers and, 
  * for each one, tells if it is a prime number or not. Remember that a 
  * natural number is prime if and only if it is greater than 1 and it 
  * does not have any positive divisor other than 1 and itself.
  */

#include <iostream>
#include <vector>
#include <cmath>

int main(){
  int quantity_of_numbers{0};
  std::vector <int> number;
  int numbers{0};

  std::cin >> quantity_of_numbers;

  while(std::cin >> numbers){
     number.emplace_back(numbers);
  }

  for(int i = 0; i < number.size(); i++){
    for(int iterador = 2; iterador <= std::sqrt(number[i]); iterador++){
        if(number[i] % iterador == 0) {
            std::cout << number[i] << "is not prime" << std::endl;
        }
    }

    std::cout << number[i] << "is prime" << std::endl;
  }

}