
#ifndef CUSTOMER_H
#define CUSTOMER_H

#pragma once

#include <string>
#include <stdint.h>

namespace bman {

	class __declspec(dllexport) Customer
	{
	public:
		Customer(unsigned long id, const char* name);
		~Customer();

		inline const char*	 get_name()	{ return m_name; }

		inline unsigned long get_id()	{ return m_id; }

	private:
		unsigned long	m_id;
		const char*		m_name; 

	};

}

#endif
