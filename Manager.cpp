#include "Manager.h"


Manager::Manager() :managerid(0), salary(0), departpent(nullptr)
{
}

Manager::Manager(const char* nam, int ag, int d, int m, int y, int pn, const char* add, int sal, int id, const char* dep) :Person(nam, ag, d, m, y, pn, add), salary(sal), managerid(id)
{
	if (dep == nullptr)
	{
		departpent = nullptr;
	}
	else
	{
		int size = 0;
		while (dep[size] != '\0')
		{
			size++;
		}

		departpent  = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			departpent[i] = dep[i];
		}
		departpent[size] = '\0';
	}
}

void Manager::display() const 
{
	cout << "Salary: " << salary << endl;
	cout << "Manager ID: " << managerid << endl;
	cout << "Department: " << departpent << endl;
}
Manager::~Manager()
{
	departpent = nullptr;
	delete[] departpent;
}
