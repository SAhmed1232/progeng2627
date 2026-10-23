#include <iostream>
int main(){
    int l, w, perimeter, area;
    std::cout <<"Enter the length of the rectangle" << std :: endl;
    std::cin >> l;
    std::cout <<"Enter the width of the rectangle" << std::endl;
    std::cin >> w;
    perimeter = 2*l + 2*w;
    area = l*w;

    std::cout << "The perimeter of the rectangle is " << perimeter << std::endl;
    std::cout << "The area of the rectangle is " << area << std::endl;
    
  
}