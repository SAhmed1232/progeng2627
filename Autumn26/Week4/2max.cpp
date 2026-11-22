#include <iostream>
double maximum(double n1, double n2){
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}
int main(){
    double n1, n2;
    std::cout << "enter 2 numbers" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "The largest number is " << maximum(n1,n2) << std::endl;
    
}