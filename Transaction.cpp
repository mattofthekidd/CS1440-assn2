//
// Created by Matthew Kidd on 2/1/17.
//

#include "Transaction.hpp"


Transaction::Transaction(std::string &line, const int &size) {
    std::stringstream split(line);
    auto ss = parse(split, size);
    ss >> m_symbol
       >> m_quantity
       >> m_purchaseDateTime
       >> m_purchasePrice
       >> m_purchaseFee
       >> m_saleDateTime
       >> m_salePrice
       >> m_saleFee;
}

std::string Transaction::getSymbol() {
    return m_symbol;
}

int Transaction::getQuantity() {
    return m_quantity;
}

int Transaction::getPurchaseDateTime() {
    return m_purchaseDateTime;
}

int Transaction::getPurchasePrice() {
    return m_purchasePrice;
}

int Transaction::getPurchaseFee() {
    return m_purchaseFee;
}

int Transaction::getSaleDateTime() {
    return m_saleDateTime;
}

int Transaction::getSalePrice() {
    return m_salePrice;
}

int Transaction::getSaleFee() {
    return m_saleFee;
}

int Transaction::computeInvestmentAmount() {
    return m_quantity * m_purchasePrice + m_purchaseFee + m_saleFee;
}

int Transaction::computeProfitLoss() {
    return m_quantity * m_salePrice - computeInvestmentAmount();
}

std::stringstream Transaction::parse(std::stringstream &line, const int &size) {
    std::string value;
    std::stringstream x;
    char delim = ',';

        for (int row = 0; row <= m_ROW_SIZE; row++) {
            std::getline(line, value, delim);
            x << value << ' ';
        }
    return x;
}

