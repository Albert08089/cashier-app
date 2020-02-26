#include "manager.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

void manager::manger_addusers()
{

	string user_input1;
	string user_input2;
	
	ofstream user_data("userdata.txt", ios::app);
tryagain:
	cout << "Enter new user name:";
	cin >> user_input1;
	cout << endl << "Enter new user password:";
	cin >> user_input2;
	

	

	cout << "Enter new username:";
	cout << user_input1;
	cout << endl << "Enter new password:";
	cout << user_input2;

	user_data << endl << user_input1 << " " << user_input2;
	user_data.close();

}

void manager::add_manager()
{

	string user_input1;
	string user_input2;
	string Admin_name = "Admin";
	string Admin_password = "password";
	string user_input3, user_input4;


tryagain:
	cout << "Enter Admin username:";
	cin >> user_input1;
	cout << endl << "Enter Admin password:";
	cin >> user_input2;

	ofstream user_data("mangerdata.txt",ios::app);
	
	

	if (user_data.fail())
	{
		cerr << "Error Opening File" << endl;
		exit(1);

	}

	if (user_input1 == Admin_name && user_input2 == Admin_password)
	{
		cout << "Enter new username:";
		cin >> user_input3;
		cout << endl << "Enter new password:";
		cin >> user_input4;

		user_data<< endl << user_input3 << " " << user_input4;
		user_data.close();

	}

	else if (user_input1 == "Exit" || user_input2 == "Exit")
	{
		exit(1);
	}

	else
	{
		cout << "please renter user & password" << endl;
		goto tryagain;
	}
}

