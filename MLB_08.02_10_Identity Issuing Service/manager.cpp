// Manager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "manager.h"



manager::manager()
{
  cout << "Manager Details :- "<< endl;
}

manager::manager(int mid, string mname, string mnic, string mdep)
{
	Manager_ID = mid;
	Manager_Name = mname;
	Manager_Nic = mnic;
	Manager_Department = mdep;

}

void manager::Display_Manager_Details()
{
   cout << "Manager_ID :- "<< Manager_ID  << endl;
  cout << "Manager_Name :- "<< Manager_Name  << endl;
  cout << "Manager_Nic :- "<< Manager_Nic  << endl;
  cout << "Manager_Department :- "<<Manager_Department << endl;
}

float manager::Calculate_Salary()
{
    int salary = Basic_salary + bonus;
    return salary;
}
