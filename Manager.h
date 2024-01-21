#pragma once
#include"Person.h"
class Manager:virtual public Person
{
protected:
	int salary;
	int managerid;
	char* departpent;
public:
	Manager();
	Manager(const char*, int, int, int, int, int, const char*,int,int,const char*);
	void display() const;
	~Manager();
};