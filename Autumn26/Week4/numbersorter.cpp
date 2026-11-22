#include <iostream>
void myswap(double& n1, double& n2){
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}
void numbersorter(double& N1, double& N2, double& N3){
    if(N1 > N2){
        myswap(N1,N2);
    }
    if(N2 > N3){
        myswap(N2,N3);
    }
    if(N1 > N3){
        myswap(N1,N3);
    }
}
int main(){
    std::cout << "Enter 3 numbers" << std::endl;
    double n1, n2,n3;
    std::cin >> n1 >> n2 >> n3;
    numbersorter(n1,n2,n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;

}