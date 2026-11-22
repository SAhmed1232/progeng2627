#include <iostream>
int mypowsum(int x, int n){
    int sum = 0, power = 1;
    for(int i = 1; i <= n; i++){
        power = power*x;
        sum = sum + power;
    }
    return sum;
}
int main(){
    std::cout << mypowsum(3,2) << std::endl;
    std::cout << mypowsum(2,4) << std::endl;
}