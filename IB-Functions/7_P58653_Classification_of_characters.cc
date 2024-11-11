/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 7_P58653_Classification_of_characters.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 10 2024
  * @brief Write a program that reads a character and tells if it is a letter, if it is a vowel, if it is a consonant, if it is an uppercase letter, if it is a lowercase letter and if it is a digit.
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

int main() {
    char input;
    std::cin >> input;

    print_line(input, "letter", (input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z'));
    print_line(input, "vowel", (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U'));
    print_line(input, "consonant", ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) && !((input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' || input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U')));
    print_line(input, "uppercase", (input >= 'A' && input <= 'Z'));
    print_line(input, "lowercase", (input >= 'a' && input <= 'z'));
    print_line(input, "digit", (input >= '0' && input <= '9'));

    return 0;
}