#include <iostream>
int myfactorial(int input){
    int factorial = 1;
    for(int i = 1; i <= input; i++){
        factorial = factorial*i;
    }
    return factorial;
}
int main(){
    int n;
    std::cin >> n;
    std::cout << "n! = " << myfactorial(n) << std::endl;
}