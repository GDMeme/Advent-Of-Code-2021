#include <iostream>
#include <fstream>

int main(){
    std::ifstream inFile;
    inFile.open(".\\input.txt");
    std::string input[2000];
    for (int i = 0; i < 2000; i++){
        (inFile >> input[i]);
    } 
    int forward{};
    int down{};
    std::cout << std::stoi(input[1]) << std::endl;
    for (int i = 0; i < 2000; i = i+2){
        if (input[i] == "forward"){
            forward = forward + std::stoi(input[i+1]);
        } else if (input[i] == "down"){
            down = down + std::stoi(input[i+1]);
        } else if (input[i] == "up"){
            down = down - std::stoi(input[i+1]);
        }  
    } 
    std::cout << (forward * down);
}