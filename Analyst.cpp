//
// Created by Matthew Kidd on 2/1/17.
//

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
    while(!fin.eof()) {
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
    for(int i = 0; i < m_history.size() - 1; i++) {
        if(m_history.at(i).getSymbol() == "AMZN") { //remove this if statement before turning in
            total += m_history.at(i).computeProfitLoss();
        }
    }
    return total;
}

int Analyst::computeProfitLossPerDay() {
    //calculate for this analyst based on all of their transactions
    //
    return 0;
}

int Analyst::computeStockPerformance(std::string symbol) {
    //(total profit/loss) / ((last sale time - first purchase time) / 1440)
    int minPos = 0;
    for(int start = 0; start < m_history.size() - 1; start++) {
        for (int scanPos = 0; scanPos < m_history.size(); scanPos++)
            if(m_history.at(scanPos).getSymbol() == symbol) {
                //add to computation for stock performance
            }

        (computeTotalProfitLoss() / (m_history.at(m_history.size() - 1).getSaleDateTime() - m_history.at(0).getPurchaseDateTime()) / 1440);
    }
    return 0;
}
