#include <iostream>
int main(){
    int n, i = 0, count;
    std::cin >> n >> count;
    while(n > count){
        n = n - count;
        i = i + 1;

    }
    std::cout << i << " remainder " << n << std::endl;
}