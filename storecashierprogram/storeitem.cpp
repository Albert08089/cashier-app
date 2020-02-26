#include "storeitem.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

void storeitem::add_product()
{
	ofstream data_item("itemdata.txt",ios::app);
	cout << "Enter item name:";
	cin >> item_Name;
	cout << endl << "Enter item brand:";
	cin >> brand_name;
	cout << endl << "Enter item price:";
	cin >> item_Price;
	cout << endl << "Enter item PLU Number:";
	cin >> plu_Number;

	cout << "new item name:" << item_Name
		<< endl << "new item brand:" << brand_name
		<< endl << "new item price:" << item_Price
		<< endl << "new item PLU:" << plu_Number;

	data_item << endl << item_Name << " "
		<< brand_name << " "
		<< item_Price << " "
		<< plu_Number;

}
