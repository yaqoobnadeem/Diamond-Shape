#pragma once
#include<iostream>
using namespace std;

class Person
{
protected:
	char* name;
	int age;
	int day;
	int month;
	int year;
	int phonenumebr;
	char* Address;
public:
	Person();
	Person(const char*, int ,int ,int ,int ,int ,const char*);
	virtual void display() const;
	virtual ~Person();
};

