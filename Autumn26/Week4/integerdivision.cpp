#include <iostream>
void integerdivision(int n1, int n2, int& remainder, int& result){
    remainder = n1%n2;
    result = n1 / n2;
}
int main(){
    int n1, n2, remainder, result;
    std::cin >> n1 >> n2;
    integerdivision(n1,n2,remainder,result);
    std::cout << result << " remainder " << remainder << std::endl;

}