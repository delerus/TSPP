#pragma once

#include <queue>

class Client;
class InsuranceAgent;
class ClientDB;

class ClientQueue {
public:
	ClientQueue(InsuranceAgent* _worker, ClientDB* _dataBase);

	void work();

	void addClient(Client* client);
private:
	InsuranceAgent* worker;
	std::queue<Client*> clients;
	ClientDB* dataBase;
};