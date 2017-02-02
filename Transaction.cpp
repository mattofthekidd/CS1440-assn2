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


std::stringstream Transaction::parse(std::stringstream &line, const int &size) {
    std::string value;
    std::stringstream x;
    char delim = ',';

        for (int row = 0; row <= m_ROW_SIZE; row++) {
            std::getline(line, value, delim);
            x << value << ' ';
        }
//        m_quantity = std::stoi(temp.at(1));
//        m_purchaseDateTime = std::stoi(temp.at(2));
//        m_purchasePrice = std::stoi(temp.at(3));
//        m_purchaseFee = std::stoi(temp.at(4));
//        m_saleDateTime = std::stoi(temp.at(5));
//        m_salePrice = std::stoi(temp.at(6));
//        m_saleFee = std::stoi(temp.at(7));

    return x;
}
