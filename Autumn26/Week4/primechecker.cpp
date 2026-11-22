#include <iostream>
int smallestfactor(int n){
    for( int i = 2; i < n; i++){
        if(n%i == 0){
            return i;
        }
        
    }
    return 0;
}
int main(){
    int lower, upper;
    std::cin >> lower >> upper;
    for(int i = lower; i <= upper; i++){
        if(smallestfactor(i) == 0){
            std::cout << i << " ";
        }
    }
    std::cout << "" << std::endl;
}