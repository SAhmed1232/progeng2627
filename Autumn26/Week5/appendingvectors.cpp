#include <iostream>
#include <vector>
void appendingvectors(const std::vector<int>& v1,const std::vector<int>& v2, std::vector<int>& vout){
    vout.clear();
    for(int i=0;i<v1.size();i++){
        vout.push_back(v1[i]);
    }
    for(int i=0;i<v2.size();i++){
        vout.push_back(v2[i]);
    }
}
int main(){
    std::vector<int> v1{1,4,9,21,7},v2{2,3,49,18},vout;
    appendingvectors(v1,v2,vout);
    for(int i =0;i<vout.size();i++){
        std::cout<<vout[i]<<std::endl;
    }
    

}