#include <iostream>
bool leap_year(int year){
    bool ly;
    if(year % 4 == 0){
        ly = true;
    }
    else{
        ly = false;
    }
    if(year % 100 == 0 && year % 400 != 0){
        ly = false;
    }



    return ly;
}
int main(){
    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1600) == true) << std::endl;
}