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
