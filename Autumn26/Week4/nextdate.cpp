#include <iostream>
bool leapyear(int year){
    bool ly;
    if(year%4 == 0){
        ly = true;
    }
    else{
        ly = false;
    }
    if(year%100 == 0){
        if(year%400 == 0){
            ly = true;
        }
        else{
            ly = false;
        }
    }
    return ly;
}
void nextdate(int d1, int m1,int y1,int& d2, int& m2, int& y2){
    y2 = y1;
    m2 = m1;
    if((m1 == 1) || (m1 == 3) || (m1 == 5) || (m1 == 7) || (m1 == 8) || (m1 == 10) || (m1 == 12)){
        if(d1 + 1 > 31){
            if(m1 == 12){
                m2 = 1;
                y2 = y1 + 1;
            }
            else{
                m2 = m1 + 1;
                d2 = 1;
            }
        }
        else{
            d2 = d1 + 1;
        }
    }
    if((m1 == 4) || (m1 == 6) || (m1 == 9) || (m1 == 11)){
        if(d1 + 1 > 30){
            m2 = m1 + 1;
            d2 = 1;
        }
        else{
            d2 = d1 + 1;
        }
    }
    if(m1 == 2){
        if(d1 + 1 > 28){
            if(leapyear(y1)){
                d2 = d1 + 1;
            }
            else{
                m2 = m1 + 1;
                d2 = 1;
            }
        }
        else{
            d2 = d1 + 1;
        }
    }
}
int main(){
    int d1, m1, y1, d2, m2, y2;
    std::cin >> d1 >> m1 >> y1;
    nextdate(d1,m1,y1,d2,m2,y2);
    std::cout << d2 << " " << m2 << " " << y2 << std::endl;
}