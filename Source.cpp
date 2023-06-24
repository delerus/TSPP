#include "Client.h"
#include "Insurance.h"
#include "ClientDB.h"
#include "InsuranceAgent.h"
#include "InsuranceCase.h"
#include "InsuranceCompany.h"
#include "InsuranceDB.h"
#include "ClientQueue.h"
#include "InsuranceQueue.h"

#include <iostream>
#include <conio.h>

int main() {
	InsuranceAgent agent(1, "asd");
	InsuranceCompany company(1, "CEO");
	ClientDB clDB;
	InsuranceDB insDB;
	ClientQueue clQueue(&agent, &clDB);
	InsuranceQueue insQueue(&agent, &insDB);

	Client cl(1, "John");
	cl.initClientRegistr(clQueue);
	Client cl2(2, "Maxim");
	cl2.initClientRegistr(clQueue);
	Client cl3(3, "Bob");
	cl3.initClientRegistr(clQueue);

	clQueue.work();

	clDB.printIDs();

	Insurance ins1(11, cl, "pending approval", "cond-s");
	cl.addInsurance(ins1);
	cl.initInsuranceRegistr(insQueue, &ins1);

	insQueue.work();

	insDB.printIDs();

	return 0;
}