#include "coupon.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
#include "Brand.h"
using namespace std;

void coupon::coupon_maker()
{
	
	ofstream user_input;
	user_input.open("coupondata.txt", ios::app);
	cout << "enter brand name:";
	cin >> brand_name;
	cout << endl << "enter item type:";
	cin >> item_Type;
	cout << "enter discount persent:";
	cin >> item_discount;

	user_input << endl << brand_name << " " << item_Type << " "<< item_discount;
	cout << "Entered:" << brand_name << endl
		<< "Entered:" << item_Type
		<< endl << "Entered:"
		<< item_discount << endl;
	user_input.close();

	
}
