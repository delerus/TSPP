#pragma once

#include <string>

class Insurance;
class Client;
class InsuranceDB;
class ClientDB;

class InsuranceAgent {
public:
	InsuranceAgent(int _id, std::string _name);

	void registerInsurance(Insurance& insurance, InsuranceDB * insDB);

	void registerClient(Client& client, ClientDB * clDB);
private:
	int id;
	std::string name;
};