/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 13_Movements_on_the_ground.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 19 2024
  * @brief Write a program that reads a sequence of characters, 
  * each one codifying a movement (‘n’ ‍for north, ‘s’ for south,
  *  ‘e’ for east, and ‘w’ for west), and that computes the final 
  * position of an object initially located at (0, 0). Suppose 
  * that the first component corresponds to the east-west direction, 
  * that going est means adding 1 to that component, and that going south means 
  * adding 1 to the second component.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <string>

int main () {
  std::string instruction{};
  int coordinate_1{0}, coordinate_2{0};

  std::cin >> instruction;

  for(char letter : instruction){
    if(letter == 's'){
        coordinate_2++;
    } else if (letter == 'n'){
        coordinate_2--;
    } else if (letter == 'e'){
        coordinate_1++;
    } else if (letter == 'w') {
        coordinate_1--;
    } else if (letter == ' '){
        coordinate_1 = 0;
        coordinate_2 = 0;
    }

  }

  std::cout << "(" << coordinate_1 << ",  " << coordinate_2 << ")" << std::endl;

  return 0;
}