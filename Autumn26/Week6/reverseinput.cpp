#include <iostream>
#include <vector>
#include <fstream>
int main(){
    std::vector<int> v;
    std::ifstream infile;
    infile.open("input.txt");
    if(!infile.is_open()){
        return EXIT_FAILURE;
    }
    int tmp;
    while(infile >> tmp){
        v.push_back(tmp);

    }
    for(int i = 0; i < v.size();i++){
        std::cout << v[v.size() -1 - i] << std::endl;
    }
    infile.close();
}