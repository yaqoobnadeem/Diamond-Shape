#include "Employee.h"


Employee::Employee() :id(0), department(nullptr), salary(0.0)
{}

Employee::Employee(const char* nam, int ag, int d, int m, int y, int pn, const char* add ,int iD, const char* dep, double sal) : Person(nam,ag,d,m,y,pn,add), id(iD), salary(sal)
{
	if (dep == nullptr)
	{
		department = nullptr;
	}
	else
	{

		int size = 0;
		while (dep[size] != '\0')
		{
			size++;
		}
		department = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			department[i] = dep[i];
		}
		department[size] = '\0';
	}
}

void Employee::display() const
{
	cout << "Employee ID: " << id << endl;
	cout << "Department: " << department << endl;
	cout << "Salary: " << salary << endl;
}

Employee::~Employee()
{
	department = nullptr;
	delete[]department;
}
