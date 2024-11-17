#include <string>
#include <iostream>


int sum_of_digits(int n) {
   std::string cadena = std::to_string(n);

   int suma{0};

   for(char digito : cadena) {
      suma += digito - '0';
   }

   return suma;
}

bool is_multiple_3(int n){
   if(sum_of_digits(n) % 3 == 0){
    return true;
   } else {
    return false;
   }
}

int main() {
   int number{};

   std::cin >> number;

   if(is_multiple_3(number) == true){
      std::cout << "true";
   } else {
      std::cout << "false";
   }
}
