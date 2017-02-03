//
// Created by Matthew Kidd on 2/1/17.
//

#include <iostream>
#include "Analyst.hpp"

Analyst::Analyst(std::ifstream &fin) {
    std::string line = "";
    std::getline(fin, m_name);
    std::getline(fin, m_initials);
    fin >> m_simulationDays;
    fin.ignore();
    fin >> m_seedMoney;
    fin.ignore();
    fin >> m_totalPurchases;
    fin.ignore();

    //This is the line that gets sent to Transaction
    while (!fin.eof()) {
        std::getline(fin, line);
        Transaction x(line, m_totalPurchases);
        m_history.push_back(x);
    }
}

std::string Analyst::getName() {
    return m_name;
}

std::string Analyst::getInitials() {
    return m_initials;
}

int Analyst::getDays() {
    return m_simulationDays;
}

int Analyst::getSeedMoney() {
    return m_seedMoney;
}

std::vector<Transaction> Analyst::getHistory() {
    return m_history;
}

int Analyst::computeTotalProfitLoss() {
    //calculate for this analyst based on all of their transactions
    int total = 0;
    for (int i = 0; i < m_history.size() - 1; i++) {
//        if (m_history.at(i).getSymbol() == "AMZN") { //remove this if statement before turning in
            total += m_history.at(i).computeProfitLoss();
//        }
    }
    return total;
}

int Analyst::computeProfitLossPerDay() {
    //calculate for this analyst based on all of their transactions
    //
    return 0;
}

float Analyst::computeStockPerformance(std::string symbol) {
    //(total profit/loss) / ((last sale time - first purchase time) / 1440)
    unsigned int firstPurchase = 0;
    unsigned int lastSale = 0;
    auto investmentDays = findInvestmentDays(symbol, firstPurchase, lastSale);

    return (computeTotalProfitLoss() / investmentDays) / 100;
}

float Analyst::findInvestmentDays(const std::string &symbol, unsigned int &firstPurchase, unsigned int &lastSale) {
    for (unsigned int start = 0; start < m_totalPurchases - 1; start++) {
        for (unsigned int scanPos = start + 1; scanPos < m_totalPurchases; scanPos++)
            // If symbol of obj matches desired symbol
            if (m_history.at(scanPos).getSymbol() == symbol) {
                // Check that the purchase time is lower
                if (m_history.at(firstPurchase).getPurchaseDateTime() > m_history.at(scanPos).getPurchaseDateTime()) {
                    firstPurchase = scanPos;
                }
                // Check that the sale time is higher
                if (m_history.at(lastSale).getSaleDateTime() < m_history.at(scanPos).getSaleDateTime()) {
                    lastSale = scanPos;
                }
            }
    }
    // Casting to float so CLion doesn't pester me. I divided it by 1440.0 specifically to make it a float return.
   return (float) ((m_history.at(lastSale).getSaleDateTime() - m_history.at(firstPurchase).getPurchaseDateTime()) / 1440.0);
}