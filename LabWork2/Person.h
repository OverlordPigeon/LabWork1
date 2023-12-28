#pragma once
#include <string>
using namespace std;

class Person {
protected:
	string name;
	string surname;
public:
	virtual string getName();
	virtual string getSurname();
	virtual void setName(string name);
	virtual void setSurname(string surname);
};