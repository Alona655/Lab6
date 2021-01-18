#include "HRMS.h"
using namespace std;

void HRMS::add(Employee Employee, string department, double salary)
{
	All.push_back(Employee);
	Employee.getDepartment(department);
	Department.insert(pair<string, string>(Employee.getID(), department));
}

void HRMS::printDepartment(string department)
{
	cout << "Department " << department << ": " << endl;
	for (auto i = Department.begin(); i != Department.end(); i++)
	{
		if (i->second == department)
			cout << i->first << endl;
	}
}
