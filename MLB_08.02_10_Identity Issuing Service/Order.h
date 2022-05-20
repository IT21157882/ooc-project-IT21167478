#include<iostream>
#include<string>
using namespace std;
class order
{
private:
	int Employee_ID;
	int order_ID;
	string order_Date;
	
public:
	order();
	order(int eid, int id, string date);
	void Display_Order_Details();
	void Display_ID();
};
