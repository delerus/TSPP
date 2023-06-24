#pragma once

#include <string>

class InsuranceCase;

class InsuranceCompany {
public:
	InsuranceCompany(int _id, std::string _name);

	void handleInsuranceCase(InsuranceCase& insCase);
private:
	unsigned int entryLevel;
	int id;
	std::string name;
};