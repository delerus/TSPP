#include "InsuranceCase.h"
#include "Insurance.h"

InsuranceCase::InsuranceCase(int _id, std::string _issue, Insurance* _insurance) : id(_id), issue(_issue), insurance(_insurance), status("in queue") {}

InsuranceCase::~InsuranceCase() {
	delete insurance;
}