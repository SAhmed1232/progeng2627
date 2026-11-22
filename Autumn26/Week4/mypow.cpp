#include <iostream>
double mypow(double base, int exponent){
    double result = 1;
    if(exponent >= 0){
        for(int i = 0; i < exponent; i++){
        result = result*base;
        }
    }
    else{
        for(int i = 0; i < -exponent; i++){
            result = result / base;
        }
    }
    
    return result;
}
int main(){
    std::cout << "2^0 = " << mypow(2,0) << std::endl;
    std::cout << "2^-1 = " << mypow(2,-1) << std::endl;
    std::cout << "2^3 = " << mypow(2,3) << std::endl;

    int n, x, sum = 0;
    std::cin >> n;
    std::cin >> x;
    for(int i = 1; i <= n; i++){
        sum = sum + mypow(x,i);
    }
    std::cout << sum << std::endl;
}
    
