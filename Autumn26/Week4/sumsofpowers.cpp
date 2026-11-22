#include <iostream>
#include <cmath>
int main(){
    int n, x, sum = 0;
    std::cin >> n;
    std::cin >> x;
    for(int i = 1; i <= n; i++){
        sum = sum + std::pow(x,i);
    }
    std::cout << sum << std::endl;
}