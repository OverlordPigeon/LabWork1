#include "Patient.h"
#include "Document.h"

void Patient::SetPH(PatientHistory PH) {
	this->PH = &PH;
}

PatientHistory& Patient::getPH() {
	return *PH;
}

void Patient::SetDisease(string disease) {
	this->disease = disease;
	PH->AddDisease(disease);
}
void Patient::SetDocument(Document* document) {
	this->document = document;
	PH->AddDocs(document);
}
void Patient::SetMeds(Medication& meds) {
	CurrentMeds.push_back(meds);
	PH->AddMeds(meds);
}
string Patient::getDisease() {
	return disease;
}

Document& Patient::getDocument() {
	return *document;
}

bool Patient::FindMedication(Medication& meds) {
	bool IsFound = false;
	for (int i = 0; i < CurrentMeds.size(); i++) {
		if (CurrentMeds[i].getName() == meds.getName() && CurrentMeds[i].getReceipt() == meds.getReceipt() && CurrentMeds[i].getType() == meds.getType()) { //if (&CurrentMeds[i] == &meds) {
			return IsFound = true;
		}
	}
	return IsFound = false;
}

bool Patient::FindDisease(string disease) {
	bool IsFound = false;
	if (this->disease == disease) IsFound = true;
	return IsFound;
}