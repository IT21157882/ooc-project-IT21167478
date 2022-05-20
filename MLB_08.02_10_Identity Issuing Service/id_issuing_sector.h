#include <iostream>
#include <string>

using namespace std;
class id_issuing_sector
{
private:
	int Id_Issuing_Manager_id;
	int Id_Issuing_date;
	string Id_issuing_Type;
  
  

public:
	id_issuing_sector();
	id_issuing_sector(int id, int idate, string itype);
	void display_ID_Issuing_Details();

};
