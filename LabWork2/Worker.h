#pragma once
#include "Person.h"
class Worker : public Person {
private:
	int salary;
public:
	void SetSalary(int salary);
	int getSalary();
};

