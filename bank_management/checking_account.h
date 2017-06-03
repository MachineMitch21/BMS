
#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#pragma once

#include "account.h"

namespace bman {

	class __declspec(dllexport) Checking_Account : Account
	{
	public:
		Checking_Account(bman::Customer& customer, unsigned int actNum, int balance);
		~Checking_Account();

		int		make_withdraw(int amountToWithdraw);

		using::bman::Account::get_balance;
		using::bman::Account::make_deposit;
		using::bman::Account::set_balance;

	private:


	protected:
		
	};

}



#endif