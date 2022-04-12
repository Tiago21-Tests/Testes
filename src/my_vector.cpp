#include "../inc/my_vector.hpp"
#include <iostream>

void appendAnItem(std::vector<char> &vec, char letter){
    vec.push_back(letter);
}

void printVector(const std::vector<char> &vec){

    std::cout << ">> Printing Vector...." << std::endl;
    for(char letter : vec){
        std::cout << ">> " << letter << std::endl;
    }
}