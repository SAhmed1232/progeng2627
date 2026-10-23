#include <iostream>
int main(){
    int upper = 100, lower = 1, n = 50;
    std::string response;
    while( response != "y"){
        std::cout << "is your answer " << n << std::endl;
        std::cin >> response;
        if( response == ">"){
            lower = n;
        }
        else if( response == "<"){
            upper = n;
        }
        n = (upper + lower) / 2;


    }
    

}