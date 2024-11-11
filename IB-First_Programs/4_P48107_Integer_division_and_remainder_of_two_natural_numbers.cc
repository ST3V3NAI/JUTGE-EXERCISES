/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 4_P48107_Integer_division_and_remainder_of_two_natural_numbers.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that reads two natural numbers a and b, with b > 0, and prints the integer division d and the remainder r of a divided by b.

Remember that, by definition, d i r must be the only integer numbers such that 0 ≤ r < b and d · b + r = a.
  */

 #include <iostream>

int main(){

  int num_a{0}, num_b{0}, div{0}, rem{0};

  std::cin >> num_a >> num_b;

  if(num_b > 0){

    div = num_a / num_b;
    rem = num_a % num_b;
    std::cout << div << " " << rem << std::endl;
    
  } else {
    std::cout << "No se puede" << std::endl;

  }

  return 0;

}

