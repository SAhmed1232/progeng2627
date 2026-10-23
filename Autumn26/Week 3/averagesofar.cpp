#include <iostream>
int main(){
    int n, count = 0, i = 0;
    
    while(n != 0){
        std::cin >> n;
        count = count + n;
        i = i + 1;
        std::cout << "the average so far is " << count / i << std::endl;
    }

}