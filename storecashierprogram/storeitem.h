#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Brand.h"
using namespace std;


class storeitem : Brand
{
public:
	int plu_Number;
	double item_Price;
	string item_Name;
	void add_product();

};