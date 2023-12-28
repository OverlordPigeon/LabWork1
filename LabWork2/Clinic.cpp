#include "Clinic.h"
void Clinic::Hire(Worker& W) {
	WorkersList.push_back(W);
}
void Clinic::Fire(Worker& W) {
	for (int i = 0; i < WorkersList.size(); i++) {
		if (WorkersList[i].getSurname() == W.getSurname()) {
			WorkersList.erase(WorkersList.begin() + i);
		}
	}
}
void Clinic::SetSalary(Worker& W, double salary) {
	for (int i = 0; i < WorkersList.size(); i++) {
		if (WorkersList[i].getSurname() == W.getSurname()) {
			W.SetSalary(salary);
		}
	}
}
bool Clinic::FindWorker(Worker& W) {
	bool IsFound = false;
	for (int i = 0; i < WorkersList.size(); i++) {
		if (WorkersList[i].getSurname() == W.getSurname()) {
			cout << "Worker found\n";
			return IsFound = true;
		}
	}
	return IsFound;
}