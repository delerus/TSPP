#include "Client.h"
#include "Insurance.h"
#include "ClientQueue.h"
#include "InsuranceQueue.h"

Client::Client(int _id, std::string _name) : id(_id), name(_name) {}

int Client::getID() {
	return id;
}

std::string Client::getName() {
	return name;
}

std::vector<int> Client::getInsurances() {
	return insurances;
}

void Client::addInsurance(Insurance& ins) {
	insurances.push_back(ins.getID());
}

void Client::initClientRegistr(ClientQueue& q) {
	q.addClient(this);
}

void Client::initInsuranceRegistr(InsuranceQueue& q, Insurance * ins) {
	for (auto it: insurances) {
		if (it == ins->getID()) {
			q.addInsurance(ins);
			return;
		}
	}
	
}

void Client::initCaseRegistr() {

}