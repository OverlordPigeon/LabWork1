#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Document.h"
#include "Medication.h"
using namespace std;

class Document;

class PatientHistory
{
private:
	vector <Document*> Docs;
	vector <Medication> Meds;
	vector <string> Diseases;
public:
	void AddMeds(Medication M);
	void AddDocs(Document* D);
	void AddDisease(string disease);
	bool FindMedication(Medication M);
	bool FindDocument(Document* Doc);
	bool FindDisease(string disease);
	void ShowMeds();
	void ShowDocs();
};

