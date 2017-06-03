#include "stdafx.h"
#include "account.h"


bman::Account::Account(bman::Customer& customer, unsigned int actNum, int balance)
	: m_holder(&customer), m_actNum(actNum), m_balance(balance)
{
}

bman::Account::~Account() {

}

int bman::Account::get_balance() {
	return m_balance;
}

void bman::Account::set_balance(int balance) {
	m_balance = balance;
}

void bman::Account::make_deposit(int amountToDeposit) {

	int n_balance = m_balance + amountToDeposit;
	m_balance = n_balance;

}
