// Tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <bank_management.h>

int main()
{
	bman::Customer cust(1234, "Jerry");
	
	std::cout << cust.get_id() << ", " << cust.get_name() << std::endl;

	bman::Checking_Account check_act(cust, 1988234, 125);

	std::cout << check_act.get_balance() << std::endl;

	system("PAUSE");
    return 0;
}

