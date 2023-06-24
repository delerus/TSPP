#pragma once

#include <string>

class Insurance;

class InsuranceCase {
public:

	InsuranceCase(int _id, std::string _issue, Insurance* _insurance);

	~InsuranceCase();

	int id;
	std::string status;
private:
	std::string issue;
	Insurance* insurance;
};