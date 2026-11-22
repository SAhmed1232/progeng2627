#include <iostream>
void myswap(int& n1, int& n2){
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}
int main(){
    int n1, n2;
    std::cin >> n1 >> n2;
    myswap(n1, n2);
    std::cout << "n2 is now" << n1 << "and n1 is now " << n2 << std::endl;


}