
#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#pragma once
#include <fstream>
#include <string>
#include "customer.h"
#include "checking_account.h"
#include "savings_account.h"

namespace bman {

	enum ACCOUNT {
		CHECKING,
		SAVINGS
	};

	class __declspec(dllexport) Account_Manager
	{
	public:
		Account_Manager(Customer& customer);
		~Account_Manager();

		void open_account(std::string customer, ACCOUNT act_type);
		void close_account(std::string customer, ACCOUNT act_type);
		Account get_account(ACCOUNT act_type);

	private:
		std::fstream m_ioCtrl;

	};

}

#endif
