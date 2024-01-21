#pragma once
#include"Person.h"
class Employee :virtual public Person
{
protected:
	int id;
	char* department;
	double salary;
public:
	Employee();
	Employee(const char*, int, int, int, int, int, const char*,int , const char*,  double);
	void display() const;
	~Employee();
};

