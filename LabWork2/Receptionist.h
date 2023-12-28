#pragma once
#include "Worker.h"
#include "Appointment.h"
#include "Doctor.h"
#include "Patient.h"
#include <vector>
#include <iostream>
using namespace std;

class Appointment;

class Receptionist : public Worker {
private:
	vector<Appointment*> AppsListRecept;
public:
	void AddAppointment(double time, Doctor* Doc, Patient* Pat);
	void ShowAppointments();
	bool FindAppointment(double time, Doctor* Doc, Patient* Pat); //was Appointment &App
	//void AddAppointment(Appointment& App);
};


