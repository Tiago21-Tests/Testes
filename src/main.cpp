#include <iostream>
#include <map>
#include "../inc/my_vector.hpp"

int main(){

    std::map<char, bool> myMap;
    std::vector<char> vec;
    char letter;
    int opt;
    myMap['T'] = true;
    myMap['i'] = true;

    std::cout << "Git Practice!" << std::endl;
    std::cout << ">> ";
    std::cin >> letter;

    if(myMap.find(letter) == myMap.end()){
        std::cout << "There is no letter!" << std::endl;
    }
    else{
        std::cout << "There is the letter!" << std::endl;
    }

    do{
        std::cout << "Character >> ";
        std::cin >> letter;
        appendAnItem(vec, letter);
        std::cout << std::endl;
        std::cout << "Opt: ";
        std::cin >> opt;

    }while(opt != 0);

    printVector(vec);

    return 0;
}