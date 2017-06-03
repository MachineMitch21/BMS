
#ifndef ACCOUNT_H
#define ACCOUNT_H
#pragma once

#include <stdint.h>
#include "customer.h"

namespace bman {

	class __declspec(dllexport) Account
	{
	public:
		Account(bman::Customer& customer, unsigned int actNum, int balance);
		~Account();

		virtual int	make_withdraw(int amountToWithdraw) = 0;
		void make_deposit(int amountToDeposit);
		int	get_balance();
		void set_balance(int balance);

	private:

		int m_balance;
		unsigned int m_actNum;
		bman::Customer* m_holder;
	protected:
		
	};

}

#endif
