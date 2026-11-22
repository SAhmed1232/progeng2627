#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
    std::ifstream file;
    file.open(argv[1]);
    if(!file.is_open()){
        return EXIT_FAILURE;
    }
    for(int i=0;i<argc;i++){
        std::string line;
        while(file >> line){
            std::cout << line << std::endl;
        }
    }
}
