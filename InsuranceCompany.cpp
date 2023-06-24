#include "InsuranceCompany.h"
#include "InsuranceCase.h"

InsuranceCompany::InsuranceCompany(int _id, std::string _name) : id(_id), name(_name) {}

void InsuranceCompany::handleInsuranceCase(InsuranceCase& insCase) {
	bool isCaseCompleted = 1;
	insCase.status = "processing";

	//
	// handling insurance case
	//

	if (isCaseCompleted) {
		insCase.status = "completed";
	}
	else {
		insCase.status = "rejected";
	}
}