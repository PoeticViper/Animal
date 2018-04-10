#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class Animal
{
		protected:
		std::string name;
		char gender;
		__int8 age;
		char size;
		bool healthy;
	
	public:
		
		
		std::string&  getName()   	     { return name;    }
		char   getGender() 				 { return gender;  }
		int    getAge()    	             { return static_cast<int>(age);      }
		char   getSize()  				 { return size;    }
		const char*   isHealthy()		 { return healthy ? "Healthy" : "Unhealthy"; }
		void   setHealthy(bool ahealthy) { healthy = ahealthy; }
		virtual void sound() = 0;
		
		
};

#endif
