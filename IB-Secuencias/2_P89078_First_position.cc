/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 2_P89078_First_position.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads a sequence of characters ended in a dot and tells if the sequence has any lowercase ‘a’ or not.
*/

#include <iostream>
#include <vector>

int main() {
   std::vector<int> numbers;
   int sequence_of_numbers{0};

   while(std::cin >> sequence_of_numbers && sequence_of_numbers >= 0){
     numbers.emplace_back(numbers);
   }

   int position{1};
   for(int i = 0; i < numbers.size(); i++){
     if(numbers[i] % 2 == 0){
        std::cout << position << std::endl;
        break;
     } else {
        position++;
     }
   }
   return 0;
}
  