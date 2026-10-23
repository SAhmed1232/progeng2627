#include <iostream>
int main(){
    std::string input = "0";
    

    while( (input != "STOP" || input!= "Stop" || input != "stop" ) ){
        std::cin >> input;
        std::cout << input << std::endl;

    }
}