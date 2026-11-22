#include <iostream> 
#include <string>
void textswap(std::string& t1, std::string& t2){
    std::string tmp;
    tmp = t1;
    t1 = t2;
    t2 = tmp;
}
int main(){
    std::string text1, text2;
    std::cin >> text1 >> text2;
    textswap(text1,text2);
    std::cout <<"text 1 is now " << text1 << " and text 2 is now " << text2 << std::endl;
}