#pragma once
#include "Doctor.h"
#include "Patient.h"

class Doctor;
class Patient;

class Appointment
{
private:
	double time;
	Doctor* Doc;
	Patient* Pat;
public:
	//Appointment() = default;
	Appointment(double time, Doctor& Doc, Patient& Pat);
	double getTime();
	Doctor& getDoctor();
	Patient& getPatient();
	void setTime(double time);
	void setDoctor(Doctor& Doc);
	void setPatient(Patient& Pat);
	void Show();
};


