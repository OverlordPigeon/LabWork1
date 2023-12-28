#include "Doctor.h"
#include "Appointment.h"
void Doctor::AddPatient(Patient* P) {
	Patients.push_back(P);
}
void Doctor::PrintPatients() {
	cout << "List of patients: \n";
	for (int i = 0; i < Patients.size(); i++) {
		cout << Patients[i]->getSurname() << endl;
	}
}
void Doctor::AddAppointment(Appointment* appoint) { //was &
	AppsListDoc.push_back(appoint);
}
bool Doctor::FindPatient(Patient* P) {
	bool IsFound = false;
	for (int i = 0; i < Patients.size(); i++) {
		if (Patients[i]->getSurname() == P->getSurname()) {
			cout << "The patient is: " << Patients[i]->getName() << " " << Patients[i]->getSurname() << endl;
			return IsFound = true;
			//break;
		}
	}
	if (!IsFound) {
		cout << "Patient not found\n";
	}
	return IsFound;
}