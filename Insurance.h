#pragma once

#include <string>

class Client;

class Insurance
{
public:
	Insurance(int _id, Client& _ptrClient, std::string _status, std::string _conditions);

	int getID();

	void setStatus(std::string _status);
private:
	int id;
	Client& ptrClient;
	std::string status;
	std::string conditions;
};
