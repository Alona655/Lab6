#include <iostream>
#include "HRMS.h"
using namespace std;

int main()
{
	Employee p1("Katarzyna", "Szymanska", "21345", "network", "Senior");
	Employee p2("Jakub", "Kwiatkowski", "25456", "sql", "Senior");
	Employee p3("Maja", "Wisniewska", "55426", "sql", "Junior");
	Employee p4("Szymon", "Chojnacki", "65784", "computer", "Junior");
	Employee p5("Bartek", "Grabowski", "54887", "network", "Junior");
	Employee p6("Wojciech", "Rutkowski", "63552","network", "Senior");
	Employee p7("Zuzanna", "Mazur", "15473", "computer", "Junior");
	Employee p8("Martyna", "Michalska", "78549", "network", "Senior");
	Employee p9("Wojciech", "Rutkowski", "20135", "sql", "Junior");
	Employee p10("Wiktor", "Rutkowski", "97504", "computer", "Junior");

	HRMS p;
	p.add(p1, "network", 1243);
	p.add(p2, "sql", 1547);
	p.add(p3, "sql", 2012.8);
	p.add(p4, "computer", 2243);
	p.add(p5, "network", 1683);
	p.add(p6, "network", 1299);
	p.add(p7, "computer", 2543);
	p.add(p8, "network", 1506.4);
	p.add(p9, "sql", 2451.9);
	p.add(p10, "computer", 1243);

	p.printDepartment("network");
	p.printDepartment("computer");
	p.printDepartment("sql");

	void add(Employee Employee, string department, double salary);
	void printDepartment(string department);

	return 0;
}
