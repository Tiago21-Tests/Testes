#include <iostream>
#include <map>

int main(){

    std::map<char, bool> myMap;
    char letter;
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

    return 0;
}