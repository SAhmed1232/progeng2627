#include <iostream>
int main(){
  double pounds, euros;
  std::cout <<"Enter the amount in pounds " << std::endl;
  std::cin >> pounds;
  euros = pounds*1.19;
  std::cout << "The amount is " << euros << " euros." << std::endl;


}