#pragma once

#include <list>

class Client;

class ClientDB {
public:
	ClientDB() = default;

	~ClientDB();

	void addClient(Client * client);

	void deleteClient(int _id);

	Client* const getClient(int _id);

	void printIDs();
private:
	std::list<Client*> cList;
};