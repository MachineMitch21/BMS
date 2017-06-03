#include "stdafx.h"
#include "customer.h"


bman::Customer::Customer(unsigned long id, const char* name) 
	: m_id(id), m_name(name)
{
}

bman::Customer::~Customer() {

}
