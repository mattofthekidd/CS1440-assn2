//
// Created by Matthew Kidd on 2/1/17.
//

#ifndef ASSN2_ANALYST_HPP
#define ASSN2_ANALYST_HPP


#include <fstream>
#include <string>
#include <vector>
#include "Transaction.hpp"

class Analyst {
public:
    Analyst(std::ifstream &fin);
    std::string getName();
    std::string getInitials();
    int getDays();
    int getSeedMoney();
    std::vector<Transaction> getHistory();

private:
    std::string m_name;
    std::string m_initials;
    int m_simulationDays;
    int m_seedMoney;
    int m_totalPurchases;
    std::vector<Transaction> m_history;
};


#endif //ASSN2_ANALYST_HPP
