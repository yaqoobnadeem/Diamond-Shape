#include "Person.h"


Person::Person() :name(nullptr), age(0), day(0), month(0), year(0), phonenumebr(0), Address(nullptr)
{
}

Person::Person(const char* nam, int ag , int d,int m,int y,int pn,const char* add) : age(ag), day(d), month(m), year(y), phonenumebr(pn)
{
	if (nam == nullptr)
	{
		name = nullptr;
	}
	else
	{
		int size = 0;
		while (nam[size] != '\0')
		{
			size++;
		}

		name = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			name[i] = nam[i];
		}
		name[size] = '\0';
	}

	if (add == nullptr)
	{
		Address = nullptr;
	}
	else
	{
		int size = 0;
		while (add[size] != '\0')
		{
			size++;
		}

		Address = new char[size + 1];
		for (int i = 0; i < size; i++)
		{
			Address[i] = add[i];
		}
		Address[size] = '\0';
	}
}

void Person::display() const
{
	cout << "Name :" << name << endl;
	cout << "Age: " << age << endl;
	cout << "Date OF Birth: " << day<<" - ";
	if (month == 1)
	{
		cout << "January - " << year;
	}
	else if (month == 2)
	{
		cout << "Febauary - " << year;
	}
	else if (month == 3)
	{
		cout << "March - " << year;
	}
	else if (month == 4)
	{
		cout << "Aprial - " << year;
	}
	else if (month == 5)
	{
		cout << "May - " << year;
	}
	else if (month == 6)
	{
		cout << "June - " << year;
	}
	else if (month == 7)
	{
		cout << "July - " << year;
	}
	else if (month == 8)
	{
		cout << "August - " << year;
	}
	else if (month == 9)
	{
		cout << "Sepetember - " << year;
	}
	else if (month == 10)
	{
		cout << "October - " << year;
	}
	else if (month == 11)
	{
		cout << "November - " << year;
	}
	else if (month == 12)
	{
		cout << "December - "<<year;
	}
	cout << endl << "Phone NUmber: " << phonenumebr << endl;
	cout << "Address: " << Address << endl;
}

Person::~Person()
{
	name = nullptr;
	delete[]  name;
	Address = nullptr;
	delete[] Address;
}
