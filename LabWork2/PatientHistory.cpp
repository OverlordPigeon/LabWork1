#include "PatientHistory.h"

void PatientHistory::AddMeds(Medication M) {
	Meds.push_back(M);
}
void PatientHistory::AddDocs(Document* D) {
	Docs.push_back(D);
}
void PatientHistory::AddDisease(string disease) {
	Diseases.push_back(disease);
}

bool PatientHistory::FindMedication(Medication M) {
	bool IsFound = false;
	for (int i = 0; i < Meds.size(); i++) {
		if (Meds[i].getName() == M.getName()) {
			return IsFound = true;
		}
	}
	return IsFound = false;
}

bool PatientHistory::FindDocument(Document* Doc) {
	bool IsFound = false;
	for (int i = 0; i < Docs.size(); i++) {
		if (Docs[i] == Doc) {
			return IsFound = true;
		}
	}
	return IsFound = false;
}

bool PatientHistory::FindDisease(string disease) {
	bool IsFound = false;
	for (int i = 0; i < Diseases.size(); i++) {
		if (Diseases[i] == disease) {
			return IsFound = true;
		}
	}
	return IsFound = false;
}

void PatientHistory::ShowMeds() {
	for (int i = 0; i < Meds.size(); i++) {
		Meds[i].Show();
		cout << endl;
	}
}
void PatientHistory::ShowDocs() {
	for (int i = 0; i < Docs.size(); i++) {
		Docs[i]->Show();
		cout << endl;
	}
}