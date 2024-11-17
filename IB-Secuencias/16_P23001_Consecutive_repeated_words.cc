/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 15_Hello_bye.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Given a sequence of words, print the length of the longest consecutive subsequence that only contains the first word. That is, if the sequence is s1, …, sn, print 
*/

#include <iostream>
#include <cmath>


int main() {
  std::string string, string2;

  std::cin >> string;

  int counter = 1, maximum = 1;
  while (std::cin >> string2) {
    if (string2 == string) 
      counter++;
    else {
      if (counter > maximum) 
      maximum = counter;
      counter = 0;
    }
  }
  std::cout << fmax(counter, maximum) << std::endl;
}