#pragma once
#include "Person.h"
#include "PatientHistory.h"
#include "Document.h"
#include "Medication.h"

class Document;
class PatientHistory;

class Patient : public Person {
private:
	PatientHistory* PH;
	string disease;
	Document* document;
	vector <Medication> CurrentMeds;
public:
	void SetPH(PatientHistory PH);
	PatientHistory& getPH();
	void SetDisease(string disease);
	void SetDocument(Document* document);
	void SetMeds(Medication& meds);
	string getDisease();
	bool FindMedication(Medication& meds);
	bool FindDisease(string disease);
	Document& getDocument();
};



