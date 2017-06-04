
#ifndef ACCOUNT_MANAGER_H
#define ACCOUNT_MANAGER_H

#pragma once
#include <string>
#include "customer.h"
#include "checking_account.h"
#include "savings_account.h"
#include "file_handler.h"

namespace bman {

	enum ACCOUNT {
		CHECKING,
		SAVINGS
	};

	class __declspec(dllexport) Account_Manager
	{
	public:
		Account_Manager(Customer* customer);
		~Account_Manager();

		void open_account(ACCOUNT act_type);
		void close_account(ACCOUNT act_type);
		Account get_account(ACCOUNT act_type);

	private:
		File_Handler m_fileHandler;
		Customer* m_customer;
	};

}

#endif
