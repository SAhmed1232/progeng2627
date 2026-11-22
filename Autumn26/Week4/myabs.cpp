#include <iostream>

double myabs(double input){
    double abs;
    if(input<0){
        abs = -input;
    }
    else{
        abs = input;
    }
    return abs;
}
int main(){
    std::cin >> n;
    std::cout<< "|n| = " << myabs(n) << std::endl;
}