/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 15_P39057_Average.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 19 2024
  * @brief Write a program that reads several descriptions of rectangles
  * and circles, and for each one prints its corresponding area.
  * @bug There are no known bugs
  * @see 
  */


#include <iostream>
#include <string>
#include <iomanip>

int main(){
  double length, width, radius;
  int number, descriptions;
    for(int i = 0; i < number - 1; i++){
      std::string shape;
      std::cin >> shape;

    if(shape == "rectangle"){
        std::cin >> length >> width;
        double area = length * width;
        std::cout << std::fixed << std::setprecision(6) << area << std::endl;
    } if(shape == "circle"){
        std::cin >> radius;
        double area = radius * radius * 3.14159265359;
        std::cout << std::fixed << std::setprecision(6) << area << std::endl;
    }
  }


  return 0;
}