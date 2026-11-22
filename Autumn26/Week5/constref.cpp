#include <iostream>
#include <vector>
double sum_vector(const std::vector <double>& vin){
    int sum = 0;
    for(int i=0;i<vin.size();i++){
        sum = sum + vin[i];
    }
    return sum;
}
int main(){
    std::vector <double> v;
    v.push_back(2);
    v.push_back(3.5);
    v.push_back(5);
    std::cout << sum_vector(v) << std::endl;
}