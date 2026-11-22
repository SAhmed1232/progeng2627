#include <iostream>
int smallestfactor(int n){
    for( int i = 2; i < n; i++){
        if(n%i == 0){
            return i;
        }
        
    }
    return 0;
}
int main(){
    int n;
    std::cin >> n;
    std::cout << "smallest factor is " << smallestfactor(n) << std::endl;

}