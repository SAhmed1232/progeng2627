#include <iostream>
int main(){
    double length_in, length_out;
    const double mile_to_km = 1.609;
    std::string unit_in, unit_out;
    std::cin >> length_in >> unit_in;
    if((unit_in == "mile") || (unit_in == "miles")){
        unit_out = "km";
        length_out = length_in * mile_to_km;
        std::cout << length_out << unit_out << std::endl;
    }
    else if(unit_in == "km"){
        unit_out = "mile";
        length_out = length_in / mile_to_km;
        std::cout << length_out << unit_out << std::endl;
    }
    else{
        std::cout << "Not a valid unit" << std::endl;
    }
    

}