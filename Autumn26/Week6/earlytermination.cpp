#include <iostream>
#include <fstream>
int main(){
    std::ifstream infile;
    std::string input;
    std::cin >> input;
    infile.open(input);
    if(!infile.is_open()){
        return EXIT_FAILURE;
    }
    int tmp;
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }
    infile.close();

}