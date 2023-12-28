#pragma once
#include "Worker.h"
#include "Patient.h"
#include "Appointment.h"

class Appointment;
class Patient;

class Doctor : public Worker {
private:
	vector <Patient*> Patients;
	vector <Appointment*> AppsListDoc;
public:
	void AddPatient(Patient* P); //was &
	void PrintPatients();
	void AddAppointment(Appointment* appoint); //it was &
	bool FindPatient(Patient* P); //was &
};


