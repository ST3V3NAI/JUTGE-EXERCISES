/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file 6_P58294_The_answer.cc
  * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
  * @date Oct 11 2024
  * @brief Write a program that computes the product of two give natural numbers
*/


#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
#include <algorithm>
 
const double PI = acos(-1);
 
// Perform FFT or inverse FFT
void fft(std::vector<std::complex<double>>& a, bool invert) {
    int n = a.size();
    if (n == 1) return;
 
    std::vector<std::complex<double>> a0(n / 2), a1(n / 2);
    for (int i = 0; 2 * i < n; i++) {
        a0[i] = a[2 * i];
        a1[i] = a[2 * i + 1];
    }
 
    fft(a0, invert);
    fft(a1, invert);
 
    double angle = 2 * PI / n * (invert ? -1 : 1);
    std::complex<double> w(1), wn(cos(angle), sin(angle));
    for (int i = 0; 2 * i < n; i++) {
        a[i] = a0[i] + w * a1[i];
        a[i + n / 2] = a0[i] - w * a1[i];
        if (invert) {
            a[i] /= 2;
            a[i + n / 2] /= 2;
        }
        w *= wn;
    }
}
 
std::string multiply(const std::string& num1, const std::string& num2) {
    std::vector<int> a, b;
 
    for (int i = num1.size() - 1; i >= 0; i--) a.push_back(num1[i] - '0');
    for (int i = num2.size() - 1; i >= 0; i--) b.push_back(num2[i] - '0');
 
    int n = 1;
    while (n < a.size() + b.size()) n <<= 1;
    std::vector<std::complex<double>> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    fa.resize(n);
    fb.resize(n);
 
    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++) fa[i] *= fb[i];
 
    fft(fa, true);
 
    std::vector<int> result(n);
    for (int i = 0; i < n; i++) result[i] = round(fa[i].real());
 
    for (int i = 0; i < n; i++) {
        if (result[i] >= 10) {
            if (i + 1 < n) result[i + 1] += result[i] / 10;
            result[i] %= 10;
        }
    }
 
    std::string product;
    while (!result.empty() && result.back() == 0) result.pop_back(); // Remove leading zeros
    if (result.empty()) return "0";
 
    for (int i = result.size() - 1; i >= 0; i--) product.push_back(result[i] + '0');
    return product;
}
 
int main(int argc, char** argv) {
    std::string num1, num2;
    std::cin >> num1 >> num2;
 
    bool isNegative = (num1[0] == '-') ^ (num2[0] == '-');
    if (num1[0] == '-') num1 = num1.substr(1);
    if (num2[0] == '-') num2 = num2.substr(1);
 
    std::string result = multiply(num1, num2);
    if (isNegative && result != "0") result = "-" + result;
 
    std::cout << result << std::endl;
    return 0;
}

