// SIngleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Singleton {
private:
	Singleton();
public:
	Singleton(Singleton const &copy) = delete;
	Singleton&operator=(Singleton const&copy) = delete;
	static Singleton& getInstance()
	{
		static Singleton instance;
		return instance;
	}
};
int main()
{
	 Singleton::getInstance();

    return 0;
}

