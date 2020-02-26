#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
#include "Brand.h"
using namespace std;

class coupon : public Brand
{
public:
	int coupon_PLU;
	double item_discount;

	void coupon_maker();


};


