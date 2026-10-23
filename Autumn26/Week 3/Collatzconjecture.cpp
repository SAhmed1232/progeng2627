#include <iostream>
int main(){
    int n, steps = 0, max;
    std::cin >> n;
    max = n;
    while (n != 1){
        if(n%2 == 0){
            n = n/2;
            std::cout << n << " ";
            steps = steps + 1;
            if( n > max ){
                max = n;
            }
          
        }
        else{
            n = 3*n + 1;
            std::cout << n << " ";
            steps = steps + 1;
            if( n > max ){
                max = n;
        }
    }
    std::cout << "" << std::endl;
    std::cout << steps << std::endl;
    std::cout << max << std::endl;
}