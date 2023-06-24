#include "Insurance.h"

Insurance::Insurance(int _id, Client& _ptrClient, std::string _status, std::string _conditions) : id(_id), ptrClient(_ptrClient), status(_status), conditions(_conditions) {}

int Insurance::getID() {
	return id;
}

void Insurance::setStatus(std::string _status) {
	status = _status;
}