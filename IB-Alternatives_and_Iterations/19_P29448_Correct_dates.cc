/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 19_P29448_Correct_dates.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 26 2024
  * @brief Write a program that reads several dates, and for 
  * each one tells if it is correct or not according to the Gregorian calendar.
  * @bug There are no known bugs
  * @see 
  */

bool isLeapYear(int year){
     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year){
    if (month < 1 || month > 12){
        return false;
    }

    if (day < 1 || day > 30){
        return false;
    }
       switch (month) {
        case 2:
            return day <= isLeapYear(year) ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11:
            return day <= 30;
            break;
        default:
            return day <= 31;;
    }
}


#include <iostream>

int main () {
  int day{0}, month{0}, year{0};

  while(std::cin >> day >> month >> year){
    if(isValidDate(day, month, year)){
        std::cout << "Correct Date" << std::endl;
    } else {
        std::cout << "Incorrect Date" << std::endl;
    }
  }


  
  return 0; 
}