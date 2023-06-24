#include "ClientDB.h"
#include "Client.h"

#include <stdexcept>
#include <iostream>

ClientDB::~ClientDB() {
	cList.clear();
}

void ClientDB::addClient(Client * client) {
	cList.emplace_back(client);
}

void ClientDB::deleteClient(int _id) {
    for (auto it = cList.begin(); it != cList.end();) {
        if ((*it)->getID() == _id) {
            it = cList.erase(it);
            return;
        }
        else {
            ++it;
        }
    }

    throw std::runtime_error("Client not found");
}

Client* const ClientDB::getClient(int _id) {
    for (auto it = cList.begin(); it != cList.end();) {
        if ((*it)->getID() == _id) {
            return *it;
        }
        else {
            ++it;
        }
    }

    throw std::runtime_error("Client not found");
}

void ClientDB::printIDs() {
    for (const auto& client : cList) {
        if (client != nullptr) {
            int id = client->getID();
            std::cout << "Client ID: " << id << std::endl;
        }
    }
}