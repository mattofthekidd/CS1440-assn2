//
// Created by Matthew Kidd on 2/1/17.
//

#ifndef ASSN2_TRANSACTION_HPP
#define ASSN2_TRANSACTION_HPP


#include <string>
#include <sstream>
#include <fstream>
#include <vector>

class Transaction {
public:
    Transaction(std::string &line, const int &size);

    std::string getSymbol();
    int getQuantity();
    int getPurchaseDateTime();
    int getPurchasePrice();
    int getPurchaseFee();
    int getSaleDateTime();
    int getSalePrice();
    int getSaleFee();

    std::stringstream parse(std::stringstream &line, const int &size);

private:

    const int m_ROW_SIZE = 7;

    std::string m_symbol;
    int m_quantity;
    int m_purchaseDateTime;
    int m_purchasePrice;
    int m_purchaseFee;
    int m_saleDateTime;
    int m_salePrice;
    int m_saleFee;
};


#endif //ASSN2_TRANSACTION_HPP
