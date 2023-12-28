#include "Document.h"

//Document::Document() {}
Document::Document(string type, int date, Doctor* Doc, Patient* Pat) {
	this->type = type;
	this->date = date;
	this->D = Doc;
	this->P = Pat;
}
void Document::Show() {
	cout << type << " " << date << " " << D->getSurname() << " " << P->getSurname();
}
string Document::getType() {
	return type;
}
int Document::getDate() {
	return date;
}