#include <iostream>
#include<vector>
#include<fstream>
int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i=0;i<vin.size();i++){
        if(s == vin[i]){
            return 0;
        }
    }
    return 1;
}
void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    for(int i=0;i<vin1.size();i++){
        vout.push_back(vin1[i]);
    }
    for(int i=0;i<vin2.size();i++){
        if(search_vector(vin2[i], vin1) != 0){
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i<vin1.size();i++){
        if(search_vector(vin1[i],vin2) == 0){
            vout.push_back(vin1[i]);
        }
      
    }

}
int main(){
    std::ifstream w1;
    w1.open("warehouse1.txt");
    if(!w1.is_open()){
        return EXIT_FAILURE;
    }
    std::string tmp;
    std::vector<std::string> v1;
    while(w1 >> tmp){
        v1.push_back(tmp);
    }
    w1.close();

    std::ifstream w2;
    w2.open("warehouse2.txt");
    if(!w2.is_open()){
        return EXIT_FAILURE;
    }
    std::vector<std::string> v2;
    while(w2 >> tmp){
        v2.push_back(tmp);
    }
    w2.close();
    std::vector <std::string> unionv;
    std::vector <std::string> intersectionv;
    union_vector(v1,v2,unionv);
    intersection_vector(v1,v2,intersectionv);
    std::ofstream union1;
    union1.open("union.txt");
    if(!union1.is_open()){
        return EXIT_FAILURE;
    }
    for(int i = 0; i < unionv.size();i++){
        union1 << unionv[i] << std::endl;
    }
    union1.close();
    std::ofstream intersection1;
    intersection1.open("intersection.txt");
    if(!intersection1.is_open()){
        return EXIT_FAILURE;
    }
    for(int i = 0; i < intersectionv.size();i++){
        intersection1 << intersectionv[i] << std::endl;
    }
    intersection1.close();


    

    
}