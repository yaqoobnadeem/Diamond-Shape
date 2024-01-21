#include "TeamLeader.h"


TeamLeader::TeamLeader(const char* nam, int ag, int d, int m, int y, int pn, const char* add, int sal, int id, const char* dep, int iD, const char* depp, double saal)
: Person(nam, ag, d, m, y, pn, add), Manager(nam, ag, d, m, y, pn, add, sal, id, dep), Employee(nam, ag, d, m, y, pn, add, iD, depp, saal)
{
}

void TeamLeader::display() const
{
	Person::display();
	Manager::display();
	Employee::display();
}
TeamLeader::~TeamLeader()
{
}
