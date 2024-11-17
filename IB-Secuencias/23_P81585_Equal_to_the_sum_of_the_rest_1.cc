/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 23_P81585_Equal_to_the_sum_of_the_rest_1.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Nov 11 2024
  * @brief 
*/

#include <iostream>
#include <vector>

int main () {
	int n;
  while (std::cin >> n) {
    int sum = 0;
    std::vector <int> vector_1 (0);
    
    for (int i = 0; i < n; i++) {
      int num;
      std::cin >> num;
      vector_1.push_back(num);
      sum += num;
    }

    bool t = false;
    for (auto i : vector_1) {
      t = t or (sum-i == i);
      if (t) 
       break;
    }

    if (t) {
       std::cout << "YES" << std::endl;
    } else {
       std::cout << "NO" << std::endl;
    } 
  }
}