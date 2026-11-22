#include <iostream>
#include <vector>
#include <cmath>
int min_vector_element(const std::vector<double>& vin){
    if(vin.size()==0){
        return -1;
    }
    int max = 0;
    for(int i=1;i<vin.size();i++){
        if(vin[i] > vin[i-1]){
            max = i;
        }
    }
    return max;

}
int main(){
    std::vector <double> v{0.4,0.5,1.5,1.08,10.4};
    std::vector <double> x;
    std::cout << min_vector_element(v) << std::endl;
    std::cout << min_vector_element(x) << std::endl;

}