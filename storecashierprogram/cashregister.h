#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
#include "storeitem.h"
#include "Brand.h"
using namespace std;

class cashregister : storeitem
{
public:
	string login_User;
	string password_User;

	void checkout_box();
	double checkout_adder(int PLU_input);
	string checkout_brand(int PLU_input);
	string chechout_item(int PLU_input);

	bool checkout_login(string user, string password);
	//void check_change();
	

};



