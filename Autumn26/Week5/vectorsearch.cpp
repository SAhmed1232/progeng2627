#include <iostream>
#include <cmath>
#include <vector>
int vector_search(int n,const std::vector<int>& vin){
    for(int i=0;i<vin.size();i++){
        if(vin[i] == n){
            return i;
        }
    }
    return -1;
}
int main(){
    std::vector <int> v{1,4,5,7,12,10,1};
    std::vector <int> x{2,6,5};
    int n;
    std::cin>>n;
    std::cout << vector_search(n,v) << std::endl;
    std::cout << vector_search(n,x) << std::endl;
}


