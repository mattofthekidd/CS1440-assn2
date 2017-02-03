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
    std::cout << analyst.getName() << ", "
              << analyst.getInitials() << ", "
              << analyst.getDays() << ", "
              << analyst.getSeedMoney()
              << std::endl;
for(int i = 0; i < 15; i++) {
//    std::cout << analyst.getHistory().at(i).getSymbol() << ", "
//              << analyst.getHistory().at(i).getQuantity() << ", "
//              << analyst.getHistory().at(i).getPurchaseDateTime() << ", "
//              << analyst.getHistory().at(i).getPurchasePrice() << ", "
//              << analyst.getHistory().at(i).getPurchaseFee() << ", "
//              << analyst.getHistory().at(i).getSaleDateTime() << ", "
//              << analyst.getHistory().at(i).getSalePrice() << ", "
//              << analyst.getHistory().at(i).getSaleFee()
//              << std::endl;
    if(analyst.getHistory().at(i).getSymbol() == "AMZN") {
        std::cout << "Profit/Loss:\t\t" << analyst.getHistory().at(i).computeProfitLoss() << std::endl;
    }
}
    std::cout << "Total Profit/Loss:\t$" << analyst.computeTotalProfitLoss() << std::endl;
    std::cout << "Stock Performance:\t$" << analyst.computeStockPerformance("AMZN") << std::endl;

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}