#include <iostream>
#include "Headers.h"
using namespace std;
int main() {
	/*Ward W;
	Patient P;
	P.setName("Danila");
	P.setSurname("Nabeshko");
	W.AddPatient(P);
	W.ShowPatients();
	/*cout << W.FindPatient(P) << endl;
	W.RemovePatient(P);
	cout << W.FindPatient(P) << endl;
	Patient P1, P2;
	W.AddPatient(P1);
	W.AddPatient(P2);
	W.RemovePatient(P1);
	cout << W.FindPatient(P1) << endl;
	cout << W.FindPatient(P2) << endl;*/
	/*Receptionist R;
	Doctor D;
	D.setSurname("Sobol");
	R.AddAppointment(20, &D, &P);
	R.ShowAppointments();
	D.PrintPatients();
	R.AddAppointment(12, &D, &P);
	R.FindAppointment(12, &D, &P);
	D.FindPatient(&P);

	Medication M("name", true, "type");
	PatientHistory PH;
	PH.AddMeds(M);
	cout << PH.FindMedication(M);

	Doctor Doctor1;
	Patient Patient1;
	Document Document1("type", 12, &Doctor1, &Patient1);
	PatientHistory PH1;
	Document* DocumentPtr = &Document1;
	PH1.AddDocs(&Document1);
	cout << "\nDocument found: " << PH1.FindDocument(DocumentPtr);

	Patient P0;
	PatientHistory PH0;
	P0.SetPH(PH0);
	P0.SetDisease("plague");
	cout << "\nDisease found: " << P0.FindDisease("plague");*/
	/*
	Patient P1;
	PatientHistory PH;
	Doctor D1;
	P1.SetPH(PH);
	Medication Meds("name", true, "type");
	P1.SetMeds(Meds);
	cout << "\nMeds found: " << P1.FindMedication(Meds);
	Document document("FUCK", 20, &D1, &P);
	P1.SetDocument(&document);
	cout << "Document's type = " << P1.getDocument().getType();

	Clinic clinic;
	Worker Work;
	Work.setSurname("surname");
	clinic.Hire(Work);
	clinic.FindWorker(Work);*/
	return 0;
}
