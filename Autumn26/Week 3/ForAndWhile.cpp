#include <iostream>
//Program should sort through the marks of n students and identify highest mark and grade students

int main(){
    int n, score, max = 0, pass = 0, sum = 0;
    std::cout << "Enter the number of papers" << std::endl;
    
    std::cin >> n;
    while(n < 0){
        std::cout << "Enter a valid number" << std::endl;
        std::cin >> n;
    }
    for(int i = 0; i < n; i++){
        std::cin >> score;
        while((score > 100) || (score < 0)){
            std::cout << "enter valid score" << std::endl;
            std::cin >> score;
        }
        if(score >= 50){
                std::cout << "pass" << std::endl;
                pass = pass + 1;
            }
            else{
                std::cout << "fail" << std::endl;
            }
            if (score > max){
                max = score;
            }
            sum = sum + score;

        
       
    }
    std::cout << "highest score is " << max << std::endl;
    std::cout << "class average is " << sum / n << std::endl;
}