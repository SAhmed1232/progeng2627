#include <iostream>
int main(){
    bool found_factor = false;
    int n, i = 2;
    std::cin >> n;
    while((found_factor == false) && (i < n)){

            if(n%i == 0){
                found_factor = true;
                
            }
            i = i + 1;
    }
    if(found_factor){
        std::cout << "n is not prime" << std::endl;
    }
    else{
        std::cout << "n is prime" << std::endl;
    }
}
    
