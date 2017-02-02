#include <iostream>
#include <fstream>
#include "Analyst.hpp"

int main() {
    std::ifstream fin;
    fin.open("./Data/trs.csv");
    if(fin) {
        std::cout << "File open\n";
    }
    else {
        std::cout << "File read error\n";
    }
    Analyst analyst(fin);
    std::cout << analyst.getName() << ", " << analyst.getInitials() << ", " << analyst.getSeedMoney()
              << ", " << analyst.getHistory().at(0).getSymbol() << std::endl;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}