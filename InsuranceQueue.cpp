#include "InsuranceQueue.h"
#include "Insurance.h"
#include "InsuranceAgent.h"
#include "InsuranceDB.h"

InsuranceQueue::InsuranceQueue(InsuranceAgent* _worker, InsuranceDB* _database) : worker(_worker), dataBase(_database) {}

void InsuranceQueue::work() {
	while (!insurances.empty()) {
		Insurance* ins = insurances.front();
		insurances.pop();

		worker->registerInsurance(*ins, dataBase);
	}

}

void InsuranceQueue::addInsurance(Insurance* ins) {
	insurances.emplace(ins);
}