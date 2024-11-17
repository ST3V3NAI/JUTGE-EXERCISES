/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 24_P18298_Roman_numbers_1.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief Write a program that reads several numbers and prints their equivalent Roman number.
*/


#include <iostream>
#include <vector>
using namespace std;

string roman (int n) {
  vector <pair <int,string> > v = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}, {0, ""}}; 
  string res = "";
  for (int i = 0; i < v.size() and v[i].first > 0; i++)
    while (n >= v[i].first) {
      res += v[i].second;
      n -= v[i].first;
    }
  return res;
}

int main() {
  int n;
  while (cin >> n) cout << n << " = "<< roman(n) << endl;
}
