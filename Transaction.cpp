//
// Created by Matthew Kidd on 2/1/17.
//

#include "Transaction.hpp"


Transaction::Transaction(std::ifstream &fin, const int &size) {
   parse(fin, size);
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


void Transaction::parse(std::ifstream &fin, const int &size) {

    std::string value;
    std::vector<int> temp;
    for(int record = 0; record < size - 1; record++) {
        for(int line = 0; line < 7; line++) {
            std::getline(fin, value, ',');
            if(line == 0) {
                m_symbol = value;
            }
            else {
                temp.push_back(std::stoi(value));
            }
        }
//        m_quantity = temp.at(0);
//        m_purchaseDateTime = temp.at(1);
//        m_purchasePrice = temp.at(2);
//        m_purchaseFee = temp.at(3);
//        m_saleDateTime = temp.at(4);
//        m_salePrice = temp.at(5);
//        m_saleFee = temp.at(6);
    }

}
