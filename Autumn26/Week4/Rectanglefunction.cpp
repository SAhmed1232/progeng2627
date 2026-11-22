#include <iostream>
void rectangle(double s1, double s2, double& area, double& perimeter){
    area = s1*s2;
    perimeter = 2*(s1+s2);
}
int main(){
    double s1, s2;
    std::cout << "enter length and width" << std::endl;
    std::cin >> s1 >> s2;
    double perimeter, area;
    rectangle(s1,s2,area,perimeter);
    std::cout << "Area is " << area << " and perimeter is " << perimeter << std::endl;


}