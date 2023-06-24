#pragma once

#include <string>
#include <vector>
#include <queue>

class Insurance;
class ClientQueue;
class InsuranceQueue;

class Client
{
public:
	Client(int _id, std::string _name);

	int getID();

	std::string getName();

	std::vector<int> getInsurances();

	void addInsurance(Insurance& ins);

	void initClientRegistr(ClientQueue & q);
	
	void initInsuranceRegistr(InsuranceQueue & q, Insurance * ins);

	void initCaseRegistr();

private:
	unsigned int id;
	std::string name;
	std::vector<int> insurances;
};

