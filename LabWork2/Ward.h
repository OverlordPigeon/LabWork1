#pragma once
#include "Patient.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Ward
{
private:
	vector<Patient> WardPatients;
public:
	void AddPatient(Patient& P);
	void RemovePatient(Patient& P);
	void ShowPatients();
	bool FindPatient(Patient& P);
};



