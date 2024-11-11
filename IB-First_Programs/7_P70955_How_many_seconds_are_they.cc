/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 6_P58294_The_answer.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that converts to seconds a given amount of years, days, hours, minutes and seconds.
*/

#include <iostream>

int main(){
    int num_y{0}, num_d{0}, num_h{0}, num_m{0}, num_s{0}, total_secs{0};
    
    std::cin >> num_y >> num_d >> num_h >> num_m >> num_s; 

    total_secs = (num_y * 31622400) + (num_d * 86400) + (num_h * 3600) + (num_m * 60) + (num_s);

    std::cout << total_secs << std::endl;

    return 0;

}