#include "ClientQueue.h"
#include "Client.h"
#include "InsuranceAgent.h"
#include "ClientDB.h"

ClientQueue::ClientQueue(InsuranceAgent* _worker, ClientDB* _database) : worker(_worker), dataBase(_database) {}

void ClientQueue::work() {
	while (!clients.empty()) {
		Client* cl = clients.front();
		clients.pop();

		worker->registerClient(*cl, dataBase);
	}

}

void ClientQueue::addClient(Client* client) {
	clients.emplace(client);
}