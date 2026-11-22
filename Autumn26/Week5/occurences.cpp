#include <iostream>
#include <vector>
int main(){
    std::vector <int> v;
    int n, sum=0, x;
    std::cin>>n;
    for(int i=0; i<n;i++){
        int tmp;
        std::cin>>tmp;
        v.push_back(tmp);
    }
    std::cin>>x;
    for(int i=0;i<n;i++){
        if(v[i]==x){
            sum = sum+1;
            std::cout << "At index " << i << std::endl;
        }
    }
    std::cout << "The number of occurences is " << sum << std::endl;
}