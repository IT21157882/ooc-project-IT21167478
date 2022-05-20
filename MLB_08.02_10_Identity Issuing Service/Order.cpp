// Order.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "order.h"
using namespace std;


order::order()
{
  cout << "Order Details :- "<< endl;
}

order::order(int eid, int id, string date)
{
	Employee_ID = eid;
	order_ID = id;
	order_Date = date;
}

void order::Display_Order_Details()

{
  cout << "Employee_ID :- "<< Employee_ID  << endl;
  cout << "Order_Id :- "<< order_ID << endl;
  cout << "Order_Date :- "<< order_Date << endl;
  
}


void order::Display_ID()
{
}
