#include <iostream>
int main(){
  double celsius, farenheit;
  std::cout <<"Enter the temperature in celsius " << std::endl;
  std::cin >> celsius;
  farenheit = celsius*1.8 + 32;
  std::cout << "The amount is " << farenheit << " farenheit." << std::endl;
}