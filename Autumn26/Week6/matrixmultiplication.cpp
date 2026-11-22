#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>

std::vector<double> line_to_vector(std::string s){
    std::stringstream ss;
    ss << s;
    std::string tmp;
    std::vector<double> out;

    while (ss >> tmp){
        out.push_back(std::stod(tmp));
    }

    return out;
}


std::vector<std::vector<double>> file_into_matrix(std::string input_file){

    std::ifstream infile;
    infile.open(input_file);

    if(!infile.is_open()){
        std::exit(EXIT_FAILURE);
    }

    std::vector<std::vector<double>> out;
    std::string line;
    
    while (std::getline(infile, line)){
        out.push_back(line_to_vector(line));
    }
    return out;
}

std::vector<double> column_extract(const std::vector<std::vector<double>>& m , int n){
    std::vector<double> out;
    for(int j=0; j < m[0].size();j++){
        out.push_back(m[j][n]);
    }
    return out;
}


double scalar_product(const std::vector<double>& m1, const std::vector<double>& m2){
    double product=0;
    for(int i=0; i < m1.size(); i++){
        product = product + m1[i]*m2[i];
    }
    return product;
}



std::vector<std::vector<double>> matrix_multiplication(
    const std::vector<std::vector<double>>& m1,
    const std::vector<std::vector<double>>& m2 ){

        std::vector<std::vector<double>> out;

        for(int i=0; i < m1.size();i++){
            std::vector<double> tmp;

            for(int j=0; j < m1[0].size();j++){
                tmp.push_back(scalar_product(m1[i], column_extract(m2, j )));
            }
            out.push_back (tmp);
        }
        return out;

    }

std::string matrix_to_string(const std::vector<std::vector<double>>& m){
    std::stringstream out;
    out << std::fixed << std::setprecision(2);
    for(int i=0; i < m.size();i++){
        for(int j=0; j<m[0].size();j++){
            out << m[i][j] << "\t";
        }
        out << "\n";
    }
    return out.str();
}

int main(int argc, char* argv[]){
    if (argc != 3){
        std::cout << "need 3 arguments" << std::endl;
        return EXIT_FAILURE;
    }
    std::vector<std::vector<double>> m1 = file_into_matrix(argv[1]);
    std::vector<std::vector<double>> m2 = file_into_matrix(argv[2]);
    std::vector<std::vector<double>> m3 = matrix_multiplication(m1, m2);

    std::cout << matrix_to_string(m3) << std::endl;
}