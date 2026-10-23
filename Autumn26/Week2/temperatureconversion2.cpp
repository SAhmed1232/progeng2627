#include <iostream>
int main(){
    double temp_in, temp_out;
    std::string unit_in, unit_out;
    bool valid_unit = true;
    std::cin >> temp_in >> unit_in;
    if(unit_in == "celsius"){
        temp_out = temp_in*1.8 + 32;
        unit_out = "farenheit";
    }
    else if(unit_in == "farenheit"){
        unit_out = "celsius";
        temp_out = (temp_in - 32) / 1.8;
    }
    else{
        valid_unit = false;
    }
    if(valid_unit){
        std::cout << temp_out << unit_out << std::endl;
    }
    else{
        std::cout << "unit invalid" << std::endl;
    }
    

}