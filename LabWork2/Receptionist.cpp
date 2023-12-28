#include "Receptionist.h"
void Receptionist::AddAppointment(double time, Doctor* Doc, Patient* Pat) {
	Appointment* App = new Appointment(time, *Doc, *Pat);
	AppsListRecept.push_back(App);
	Doc->AddAppointment(App);//
	Doc->AddPatient(Pat); //
}
void Receptionist::ShowAppointments() {
	for (int i = 0; i < AppsListRecept.size(); i++) {
		AppsListRecept[i]->Show();
		cout << endl;
	}
}
/*bool Receptionist::FindAppointment(Appointment& App) {
	bool IsFound = false;
	for (int i = 0; i < AppsListRecept.size(); i++) {
		if (AppsListRecept[i] == &App) {
			App.Show();
			return IsFound = true;
		}
	}
	return IsFound = false;
	}*/

bool Receptionist::FindAppointment(double time, Doctor* Doc, Patient* Pat) {
	bool IsFound = false;
	for (int i = 0; i < AppsListRecept.size(); i++) {
		if (AppsListRecept[i]->getTime() == time && &AppsListRecept[i]->getDoctor() == Doc && &AppsListRecept[i]->getPatient() == Pat) {
			AppsListRecept[i]->Show();
			return IsFound = true;
		}
	}
	return IsFound = false;
}

/*void Receptionist::AddAppointment(Appointment& App) {
	AppsListRecept.push_back(App);
	App.getDoctor().AddAppointment(App);
	Doc->AddPatient(Pat); //
}*/