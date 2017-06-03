#include "stdafx.h"
#include "savings_account.h"


bman::Savings_Account::Savings_Account(bman::Customer& customer, unsigned int actNum, int balance, unsigned short maxWithdraws, unsigned short withdrawPeriod, unsigned short withdrawsThisPeriod)
	: Account(customer, actNum, balance), MAX_WITHDRAWS(maxWithdraws), WITHDRAW_PERIOD(withdrawPeriod), m_Withdraws(withdrawsThisPeriod)
{

}

bman::Savings_Account::~Savings_Account() {

}

int bman::Savings_Account::make_withdraw(int amountToWithdraw) {

	if (m_Withdraws < MAX_WITHDRAWS) {

		int n_balance = get_balance() + amountToWithdraw;

		if (amountToWithdraw <= get_balance()) {
			set_balance(n_balance);
		}
		else {
			throw std::exception("Insufficient funds..");
		}

	}
	else {
		throw std::exception("Your withdraw limit has been reached for the period.");
	}
	
	return amountToWithdraw;
}
