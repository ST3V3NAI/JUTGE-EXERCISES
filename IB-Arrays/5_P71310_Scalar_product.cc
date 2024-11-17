/*
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  * 
  * @file 5_P71310_Scalar_product.cc
  * @date 11 Nov 2024
  * @brief This is a program prints the scalar product of two vectors
  * @bug No known bugs
  * @see https://jutge.org/problems/P71310_en
*/

#include <iostream>
#include <vector>

double scalar_product(const std::vector<double>& u, const std::vector<double>& v) {
    double result = 0.0;
    size_t size = u.size();

    for (size_t i = 0; i < size; i++) {
        result += u[i] * v[i];
    }

    return result;
}

int main() {
    // Example usage
    std::vector<double> u = {1.0, 2.0, 3.0};
    std::vector<double> v = {4.0, 5.0, 6.0};

    double result = scalar_product(u, v);

    std::cout << "Scalar product: " << result << std::endl;

    return 0;
}