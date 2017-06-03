#include "stdafx.h"
#include "checking_account.h"


bman::Checking_Account::Checking_Account(bman::Customer& customer, unsigned int actNum, int balance)
	: Account(customer, actNum, balance)
{
}

bman::Checking_Account::~Checking_Account() {

}

int bman::Checking_Account::make_withdraw(int amountToWithdraw) {
	
	int n_balance = get_balance() - amountToWithdraw;
	set_balance(n_balance);

	return amountToWithdraw;
}
