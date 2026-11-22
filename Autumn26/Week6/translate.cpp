#include <iostream>
#include <fstream>
#include<vector>
void ad_reading(std::vector<std::string>& v1){
    std::ifstream advert;
    advert.open("advert.txt");
    std::string tmp;
    while(advert >> tmp){
        v1.push_back(tmp);
    }
}
void translation_reading(std::vector<std::string>& v2){
    std::ifstream translation;
    translation.open("translation.txt");
    std::string tmp;
    while(translation >> tmp){
        v2.push_back(tmp);
    }
}
void translate_ad(std::vector<std::string>&v1,std::vector<std::string>&v2,std::vector<std::string>&vout){
    for(int i=0; i < v1.size();i++){
        bool is_found = false;
        for(int j = 0; j<v2.size();j++){
            if(v2[j] == v1[i]){
                vout.push_back(v2[j+1]);
                is_found = true;
            }
        if(!is_found){
         vout.push_back(v1[i]);
        }   
        }
    }

}
int main(){
    std::vector<std::string> advert;
    std::vector<std::string> translation_guide;
    std::vector<std::string> real_version;
    ad_reading(advert);
    translation_reading(translation_guide);
    translate_ad(advert,translation_guide,real_version);

    std::ofstream translated;
    translated.open("translated.txt");
    if(!translated.is_open()){
        return EXIT_FAILURE;
    }
    for(int i=0;i <real_version.size();i++){
        translated << real_version[i] << std::endl;

    }

}