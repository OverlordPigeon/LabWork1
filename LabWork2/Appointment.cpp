#include "Appointment.h"

//Appointment::Appointment() = default;

Appointment::Appointment(double time, Doctor& Doc, Patient& Pat) {
	this->time = time;
	this->Doc = &Doc;
	this->Pat = &Pat;
	Doc.AddAppointment(this);//
	Doc.AddPatient(&Pat);//
}
double Appointment::getTime() {
	return time;
}
Doctor& Appointment::getDoctor() {
	return *Doc;
}
Patient& Appointment::getPatient() {
	return *Pat;
}
void Appointment::setTime(double time) {
	this->time = time;
}
void Appointment::setDoctor(Doctor& Doc) {
	this->Doc = &Doc;
}
void Appointment::setPatient(Patient& Pat) {
	this->Pat = &Pat;
}
void Appointment::Show() {
	cout << this->time << " " << Doc->getSurname() << " " << Pat->getSurname();
}