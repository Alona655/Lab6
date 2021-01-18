#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class Employee
{
private:
	string name;
	string surname;
	string ID;
	string department; 
	string position;
public:
	Employee()
	{
		name = surname = ID = department = position = " ";
	}
	Employee(string ID, string name, string surname, string department, string position)
	{
		this->name = name;
		this->surname = surname;
		this->ID = ID;
		this->department = department;
		this->position;
	}
	string getName();
	string getSurname();
	string getID();
	string getDepartment();
	string getPosition();
};