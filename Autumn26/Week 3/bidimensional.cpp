#include <iostream>
int main(){
    int i = 0;
    int n;
    std::cin >> n;
    while(i < n ){
        int j = 0;
        while(j < n - 1){
            std::cout << "*";
            j = j + 1;
        
        }
    std::cout << "*" << std::endl;
    i = i + 1;
    }
}