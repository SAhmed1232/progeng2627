#include <iostream>
int main(){
    int x, product = 1, n;
    std::cin >> x >> n;
    for( int i = 0; i < n; i++){
        product = product*x;
    }   std::cout << product << std::endl;
}