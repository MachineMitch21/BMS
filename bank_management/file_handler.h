
#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#pragma once

#include <fstream>

namespace bman {

	class File_Handler
	{
	public:
		File_Handler();
		~File_Handler();

	private:
		std::fstream m_ioCtrl;
	};

}


#endif