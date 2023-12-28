#pragma once
#include <string>
#include <iostream>
using namespace std;
class Medication
{
private:
	string name;
	bool receipt = false;
	string type;
public:
	Medication(string name, bool receipt, string type);
	void Show();
	string getName();
	bool getReceipt();
	string getType();
};


