#include "InsuranceAgent.h"
#include "Insurance.h"
#include "Client.h"
#include "InsuranceDB.h"
#include "ClientDB.h"

InsuranceAgent::InsuranceAgent(int _id, std::string _name) : id(_id), name(_name) {}

void InsuranceAgent::registerInsurance(Insurance& insurance, InsuranceDB * insDB) {
	insDB->addInsurance(&insurance);
}

void InsuranceAgent::registerClient(Client& client, ClientDB * clDB) {
	clDB->addClient(&client);
}