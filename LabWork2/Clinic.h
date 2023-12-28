#pragma once
#include <iostream>
#include "Worker.h"
#include "Doctor.h"
using namespace std;
class Clinic
{
private:
	vector <Worker> WorkersList;
	vector <Patient> PatientsList;
	vector <Doctor> DoctorsList;
public:
	void Hire(Worker& W);
	void Fire(Worker& W);
	void SetSalary(Worker& W, double salary);
	bool FindWorker(Worker& W);
};


