#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <cstdio>
#include "storeitem.h"
#include "manager.h"
#include "Brand.h"
#include "coupon.h"
#include "cashregister.h"
#include "resource.h"
using namespace std;


void main_manu();
void manager_manu();
void inventory_manager();
void checkout_main();

cashregister Box1;
manager store_Manager;
coupon discount_coupon;
Brand store_Band;
storeitem store_obj;

int main()
{
	
	
	main_manu();

	return 0;
}

// the main_manu function is used for user selection
void main_manu()
{
	cout << setw(75) << "*******************************************" << endl;
	cout << setw(75) << "* Welcome to cashier program Version 1.0  *" << endl;
	cout << setw(75) << "*******************************************" << endl;
	int user_input;
	
	
	do
	{
		cout << endl << "1.cashier login " << endl
			<< "2.manager setting " << endl
			<< "3.add item to inventory" << endl
			<< "4.Quit" << endl;
		cin >> user_input;

		//switch statement for sorting user choices
		switch (user_input)
		{
		case 1:
			cout << "walcome to checkout" << endl;
			checkout_main();

			break;

		case 2:
			manager_manu();
			break;
			
		case 3:
			cout << "welcome to inventory manager " << endl;
			inventory_manager();
			break;


		case 4:
			cout << "thank you for using this program!" << endl;
			break;

		default:
			
			cout << "Error plesas enter a number form 1-4" << endl;
			break;
		}
	} while (user_input < 4);

}

// manager manu
void manager_manu()
{
	int manager_input;

	do
	{	
		cout << endl << "1.add new cashier " << endl
			<< "2.add new manger " << endl
			<< "3.Quit" << endl;
		cin >> manager_input;

		switch (manager_input)
		{
		case 1:
			store_Manager.manger_addusers();
			break;
		
		case 2:
			store_Manager.add_manager();
			break;
		
		case 3:
			cout << "Manager setting exit";
			break;


		default:
			break;
		}

	} while (manager_input < 2);
}

//inventory manu
void inventory_manager()
{

	int user_input;
	tryagain:
	cin.clear();

	do
	{
		cout << "1.add inventory" << endl
			<< "2.add new coupon" << endl
			<< "3.Quit" << endl;
		cin >> user_input;

		//switch statement for sorting user choices
		switch (user_input)
		{
		case 1:
			cout << "add inventory" << endl;
			store_obj.add_product();
			break;


		case 2:
			cout << "add new coupon" << endl;
			discount_coupon.coupon_maker();
			break;


		case 3:

			cout << "main manu" << endl;
			break;

		default:
			cout << "enter a number in the list" << endl;
			goto tryagain;
		}
	} while (user_input < 2);
}

//checkout main
void checkout_main()
{
	
	static string userName, passWord;

	cout << "Enter username:";
	cin >> userName;
	cout << endl << "Enter password:";
	cin >> passWord;
	

	if (Box1.checkout_login(userName, passWord) == true)
	{
		cout << "login successful" << endl;
		Box1.checkout_box();
	}
	
	else
	{
		cout << "login not successful" << endl;
	}

}

