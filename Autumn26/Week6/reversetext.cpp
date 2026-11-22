#include <iostream>
#include <vector>
#include <fstream>
#include <iostream>
int main(){
    std::vector<std::string> v;
    std::ifstream infile;
    infile.open("text.txt");
    if(!infile.is_open()){
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(infile >> tmp){
        v.push_back(tmp);

    }
    for(int i = 0; i < v.size();i++){
        std::cout << v[v.size() -1 - i] << std::endl;
    }
    infile.close();
}