#include "InsuranceDB.h"
#include "Insurance.h"

#include <stdexcept>
#include <iostream>

InsuranceDB::~InsuranceDB() {
    iList.clear();
}

void InsuranceDB::addInsurance(Insurance* insurance) {
    iList.push_back(insurance);
}

void InsuranceDB::deleteInsurance(int _id) {
    for (auto it = iList.begin(); it != iList.end();) {
        if ((*it)->getID() == _id) {
            it = iList.erase(it);
            return;
        }
        else {
            ++it;
        }
    }

    throw std::runtime_error("Insurance not found");
}

Insurance* const InsuranceDB::getInsurance(int _id) {
    for (auto it = iList.begin(); it != iList.end();) {
        if ((*it)->getID() == _id) {
            return *it;
        }
        else {
            ++it;
        }
    }

    throw std::runtime_error("Insurance not found");
}

void InsuranceDB::printIDs() {
    for (const auto& insurance : iList) {
        if (insurance != nullptr) {
            std::cout << "Insurance ID: " << insurance->getID() << std::endl;
        }
    }
}