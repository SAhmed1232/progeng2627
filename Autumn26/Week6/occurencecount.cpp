#include <iostream>
#include<fstream>
#include <vector>


int main(){
    std::vector<std::string> v1;
    std::vector<std::string> v2;
    std::ifstream words;
    words.open("words.txt");
    if(!words.is_open()){
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(words >> tmp){
        v1.push_back(tmp);
    }
    words.close();
    std::ifstream text;
    text.open("text2.txt");
    if(!text.is_open()){
        return EXIT_FAILURE;
    }
    while(text >> tmp){
        v2.push_back(tmp);
    }
    text.close();
    int sum = 0;
    for(int i=0;i < v1.size();i++){
        
        for(int j =0;j<v2.size();j++){
            if(v1[i] == v2[j]){
                sum = sum + 1;
                
            }
        }
        std::cout<< v1[i] << ":" << sum << std:: endl;
        sum = 0;
        
    }

}