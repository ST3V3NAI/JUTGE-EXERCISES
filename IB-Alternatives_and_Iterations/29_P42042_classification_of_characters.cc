/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 29_P42042_Classification_of_characters.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 27 2024
  * @brief Write a program that reads a letter and prints it 
  * in lowercase if it was uppercase, or prints it in uppercase if it was lowercase.
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

int main(){
    char letter{};

    std::cin >> letter;

    if (letter >= 'A' && letter <= 'Z'){
        std::cout << "uppercase\n";
    } else if (letter >= 'a' && letter <= 'z'){
        std::cout << "lowercase\n";
    }

    if(letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        std::cout << "vowel\n";
    } else {
        std::cout << "consonant\n";
    }

    return 0;
}