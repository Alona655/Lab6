#include "Employee.h"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class HRMS
{
private:
	vector <Employee> All;
	map <string, string> Department;
	map <string, double> Salaries;
public:
	void add(Employee Employee, string department, double salary);
	void printDepartment(string department);
};