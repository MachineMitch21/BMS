
#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#pragma once

#include "account.h"
#include "customer.h"
#include <stdint.h>

namespace bman {

	class __declspec(dllexport) Savings_Account : public Account
	{
	public:
		Savings_Account(bman::Customer& customer, unsigned int actNum, int balance, unsigned short maxWithdraws, unsigned short withdrawPeriod, unsigned short withdrawsThisPeriod);
		~Savings_Account();

		int make_withdraw(int amountToWithdraw) throw(std::exception);
		
		using::bman::Account::get_balance;
		using::bman::Account::make_deposit;
		using::bman::Account::set_balance;


	private:
		const unsigned short	MAX_WITHDRAWS;
		const unsigned short	WITHDRAW_PERIOD;
		unsigned short			m_Withdraws;

	protected:
		
	};

}

#endif

