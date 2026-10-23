#include <iostream>
int main(){
    int n;
    std::cin >> n;
    for (int i = 1; i<=n; i++){
        for (int y = 1; y<=n; y++){
            std::cout << y*i << "  ";
        }
        std::cout << "\n";
    }
}
 
