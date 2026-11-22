#include <iostream>
#include <vector>
int main(){
    std::vector<int> v;
    int n, t;
    std::cin >> n;
    for(int i=0; i < n;i++){
        int temp;
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cin >> t;
    for(int i= 0; i<n;i++){
        if(v[i]<t){
            std::cout << v[i] << " " << std::endl;
        }
    }
}