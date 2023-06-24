#pragma once

#include <list>

class Insurance;

class InsuranceDB {
public:
	InsuranceDB() = default;

	~InsuranceDB();

	void addInsurance(Insurance* client);

	void deleteInsurance(int _id);

	Insurance* const getInsurance(int _id);

	void printIDs();
private:
	std::list<Insurance*> iList;
};