#pragma once
#include"Employee.h"
#include"Manager.h"
#include"Person.h"
class TeamLeader:public Employee,public Manager
{
public:
	TeamLeader();
	TeamLeader(const char*, int, int, int, int, int, const char*, int, int, const char*, int, const char*, double);
	void display() const ;
	~TeamLeader();
};

