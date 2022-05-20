#include<iostream>
#include<string>
using namespace std;
class manager
{
private:
	int Manager_ID;
	string Manager_Name;
	string Manager_Nic;
	string Manager_Department;
	int Basic_salary;
	int bonus;
public:
	manager();
	manager(int mid, string mname, string mnic, string mdep);
	void Display_Manager_Details();
	float Calculate_Salary();

};
