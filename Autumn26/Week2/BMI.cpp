#include <iostream>
int main(){
    double height, weight, bmi;
    std::cout <<"Enter your height" << std::endl;
    std::cin >> height;
    std::cout <<"Enter your weight" << std::endl;
    std::cin >> weight;
    bmi = weight / (height*height);
    std::cout << "Your BMI is " << bmi << std::endl;


}