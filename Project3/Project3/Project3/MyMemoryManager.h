#pragma once
#include "virtualMemoryManagerInterface.hpp"

class MyMemoryManager : public virtualMemoryManagerInterface {




	
	private:

		
	public:
	
		MyMemoryManager(ReplacementPolicy p, unsigned int pS, unsigned int nF, unsigned int vA);
		virtual unsigned long long memoryAccess(unsigned long long address);
		void swap(unsigned int frameNumber, unsigned int pageNumber);
		unsigned long long& numberPageSwaps();



	};

