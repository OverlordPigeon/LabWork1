#pragma once
#include "Doctor.h"
#include "Patient.h"
#include <string> //
#include <iostream>
using namespace std;

class Patient;
class Doctor;

class Document
{
private:
	string type;
	int date;
	Doctor* D;
	Patient* P;
public:
	//Document() {}
	Document(string type, int date, Doctor* Doc, Patient* Pat); //was &
	void Show();
	string getType();
	int getDate();
};



