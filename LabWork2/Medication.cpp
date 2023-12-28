#include "Medication.h"

Medication::Medication(string name, bool receipt, string type) {
	this->name = name;
	this->receipt = receipt;
	this->type = type;
}
void Medication::Show() {
	cout << this->name << " " << this->receipt << " " << this->type;
}

string Medication::getName() {
	return name;
}
bool Medication::getReceipt() {
	return receipt;
}
string Medication::getType() {
	return type;
}