#include "TeamLeader.h"

int main()
{
	TeamLeader* t1 = new TeamLeader("John Doe", 30, 1, 1, 1990, 123456789, "123 Main St", 50000, 1, "IT", 100, "Development", 75000.0);
	(*t1).display();
	delete t1;
	return 0;
}
