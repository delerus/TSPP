#pragma once

#include <queue>

class Insurance;
class InsuranceAgent;
class InsuranceDB;

class InsuranceQueue
{
public:
	InsuranceQueue(InsuranceAgent* _worker, InsuranceDB* _dataBase);

	void work();

	void addInsurance(Insurance* ins);
private:
	InsuranceAgent* worker;
	std::queue<Insurance*> insurances;
	InsuranceDB* dataBase;
};

