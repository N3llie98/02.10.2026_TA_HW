#pragma once
#include <iostream>
using namespace std;
class Bank
{
private:
	string name;
	double money;
public:
	Bank() = default;
	Bank(string name, double money);

	void print();

	string getName();
	double getMoney();
	void setName(string name);
	void setMoney(double money);

};