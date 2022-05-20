#include "admin.h"
#include "employee.h"
#include "id_card.h"
#include "id_issuing_sector.h"
#include "manager.h"
#include "new_employee.h"
#include "order.h"

#include <iostream>
#include <string>
using namespace std;

int main() {
 
 
 
  admin* ad1, * ad2;
  ad1 = new admin(02515,"namal","abc@gmail.com","kdana");
  ad2 = new admin;
  ad1-> Display_Admin_Details();
  
  cout << "..................." << endl;
  
  
  employee* emp1, * emp2;
  emp1 = new employee(02515,"namal","kumara","1999-05-25");
  emp2 = new employee;
  emp1->Display_Employee_Details();

  cout << "..................." << endl;
  
  id_card id;
  emp1->Display_Employee_Details();
  cout << "..................." << endl;
  
  id_issuing_sector *iss,*id1;
  iss->display_ID_Issuing_Details();

  cout << "..................." << endl;
  manager *mng,*mng1;
  mng->Calculate_Salary();
  cout << "..................." << endl;
  
  new_employee *nemp1,*nemp2;
  nemp1 = new new_employee(02515,"namal","kumara","1999-05-25");
  nemp2 = new new_employee;
  nemp1->Display_Employee_Details();

  cout << "..................." << endl;
  manager *mn1,*mn2;
  mn1 = new manager(01235,"Hasitha","125468975","id_issuing");
  mn2 = new manager;
  mn1->Display_Manager_Details();

  cout << "..................." << endl;
  cout << "..................." << endl;
  
  
  order *od, *od1;
  od -> Display_Order_Details();
 
  
}
