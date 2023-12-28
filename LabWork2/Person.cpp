#include "Person.h"

string Person::getName() {
	return name;
}

string Person::getSurname() {
	return surname;
}
void Person::setName(string name) {
	this->name = name;
}
void Person::setSurname(string surname) {
	this->surname = surname;
}
