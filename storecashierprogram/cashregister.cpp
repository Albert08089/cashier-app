#include "cashregister.h"
#include "storeitem.h"
#include "Brand.h"
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

void cashregister::checkout_box()
{
    ifstream item_data("itemdata.txt");

     string item_brand, item_name;
     double item_price, item_discount;

    int userPut_switch;
    int userPut_PLU;
    double total_price = 0;


    do
    {
        cout << "1.add item to cart" << endl
            << "2.exit and total" << endl;
        cin >> userPut_switch;


        switch (userPut_switch)
        {
        case 1:
            cout << "Enter or scan item PLU:";
            cin >> userPut_PLU;
            total_price += checkout_adder(userPut_PLU);
            cout << "item price:" << checkout_adder(userPut_PLU) << endl
                << "item name:" << chechout_item(userPut_PLU) << endl
                << "item brand:" << checkout_brand(userPut_PLU) << endl
                << "total:" << total_price << endl;
            break;
        case 2:
            cout << "total:" << total_price;
            cout << endl << "total+tax:"<< fixed << setprecision(2) << (total_price * 0.0825) + total_price << endl;
            break;




        default:
            break;
        }
    } while (userPut_switch < 2);
}

double cashregister::checkout_adder(int PLU_input)
{
    ifstream item_data("itemdata.txt");
   static string item_name = "";
    static string item_band = "";
    static double item_price = 0;
    static int item_plu = 0;
    double item_aws = 0;

    while (item_data >> item_name >> item_band >> item_price >> item_plu)
    {

        if (PLU_input == item_plu)
        {
            item_aws = item_price;
        }

    }

    return item_aws;
    
}

string cashregister::checkout_brand(int PLU_input)
{
    ifstream item_data("itemdata.txt");
    static string item_name = "";
    static string item_band = "";
    static double item_price = 0;
    static int item_plu = 0;
    string item_aws= " ";
    while (item_data >> item_name >> item_band >> item_price >> item_plu)
    {

        if (PLU_input == item_plu)
        {
            item_aws = item_band;
        }
       

    }

    return item_aws;
}

string cashregister::chechout_item(int PLU_input)
{

    ifstream item_data("itemdata.txt");
    static string item_name ;
    static string item_band ;
    static double item_price;
    static int item_plu;
    string item_aws;
    while (item_data >> item_name >> item_band >> item_price >> item_plu)
    {

        if (PLU_input == item_plu)
        {
            item_aws = item_name;
        }

    }
   

    return item_aws;
}



// login checker for login and password
bool cashregister::checkout_login(string user, string password)
{
    ifstream item_data("userdata.txt");
    bool checker = NULL;
    static string user_name, user_password;

    while (item_data >> user_name >> user_password)
    {
        if (user == user_name && password == user_password)
        {
            checker = true;
        }
    }

	return checker;
}


