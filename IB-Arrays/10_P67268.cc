/**
  * Universisdad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file P67268.cc
  * @author 
  * @date 11 Nov 2024
  * @brief This is a program that prints the reverse of a sequence
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P67268_en
  */ 
#include <iostream>
#include <algorithm>
#include <vector>
int main() {
  int n;
  std::vector<int> nums;
  while (std::cin >> n) {
    for (int i = 0; i < n; i++) {
      int num;
      std::cin >> num;
      nums.emplace_back(num);
    }
    std::reverse(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      std::cout << nums[i];
      if (i != nums.size() - 1) {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
    nums.clear(); // Resetea el contenido del vector
  }
  return 0;
}

