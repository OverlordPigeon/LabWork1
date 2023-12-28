#include "Ward.h"

void Ward::AddPatient(Patient& P) {
	WardPatients.push_back(P);
}
void Ward::RemovePatient(Patient& P) {
	for (int i = 0; i < WardPatients.size(); i++) {
		if (WardPatients[i].getSurname() == P.getSurname()) {
			WardPatients.erase(WardPatients.begin() + i);
			break;
		}
	}
	cout << "Patient removed\n";
}
void Ward::ShowPatients() {
	for (int i = 0; i < WardPatients.size(); i++) {
		cout << "Patient " << i << ": " << WardPatients[i].getName() << " " << WardPatients[i].getSurname() << endl;
	}
}
bool Ward::FindPatient(Patient& P) {
	bool IsFound = false;
	for (int i = 0; i < WardPatients.size(); i++) {
		if (WardPatients[i].getSurname() == P.getSurname()) {
			return IsFound = true;
		}
	}
	return IsFound = false;
}
